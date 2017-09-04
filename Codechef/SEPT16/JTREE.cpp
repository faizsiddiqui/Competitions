#include <bits/stdc++.h>

typedef struct Ticket {
	unsigned long long int times, cost;
	Ticket *ticket;
} Ticket;

typedef struct City {
	unsigned long long int des;
	Ticket *ticket;
} City;

int calc(City *, unsigned long long int, unsigned long long int);

int main() {

	int nCities, nTickets, i, from, to, friends;

	scanf("%d %d", &nCities, &nTickets);

	City routes[nCities - 1];

	for (i = 0; i < nCities - 1; i++) {
		scanf("%d %d", &from, &to);
		routes[from - 2].des = to;
		routes[from - 2].ticket = NULL;
	}

	Ticket *t;

	for (i = 0; i < nTickets; i++) {
		t = (Ticket*) malloc(sizeof(Ticket));
		t->ticket = NULL;
		scanf("%d %d %d", &from, &t->times, &t->cost);
		if(routes[from - 2].ticket != NULL) {
			t->ticket = routes[from - 2].ticket;
		}
		routes[from - 2].ticket = t;
	}

	scanf("%d", &friends);

	for (i = 0; i < friends; i++) {
		scanf("%d", &from);
		//calc(routes, from, 0);
		printf("%d %d\n", from, calc(routes, from, 0));
	}

}

int calc(City *routes, unsigned long long int city, unsigned long long int times) {
	unsigned long long static int newCost, prevCost = 0;
	if(city == 1) {
		return 0;
	} else {
		if(times == 0) {
			Ticket *t = routes[city - 2].ticket;
			while (t != NULL) {
				newCost += t->cost;
				calc(routes, routes[city - 2].des, t->times - 1);
				printf("%d\n", newCost);
				//if(prevCost == 0 || newCost < prevCost) prevCost = newCost;
				t = t->ticket;
				newCost = 0;
			}
			return prevCost;
		} else {
			return (0 + calc(routes, routes[city - 2].des, times - 1));
		}
	}
}
