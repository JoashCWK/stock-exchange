#ifndef INCLUDED_ORDER_BOOK
#define INCLUDED_ORDER_BOOK

#include "limit.h"
#include "order.h"

#include <unordered_map>

class OrderBook{
public:
	OrderBook();

	bool addOrder(Order& order);

private:
	Limit* buyTree;
	Limit* sellTree;
	std::unordered_map<int, Limit*> limitMap;
	std::unordered_map<int, Order*> orderMap;
	bool isBuyTreeInitialised = false;
	bool isSellTreeInitialised = false;

	void addFirstOrderAtLimit(Order& order);
};

#endif
