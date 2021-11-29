#include "nystylepizzastore.h"

NYStylePizzaStore::NYStylePizzaStore()
{

}

Pizza* NYStylePizzaStore::createPizza(QString type) {
    Pizza *pizza;
    if (type == "cheese") {
        pizza = new NYStyleCheezePizza();
    }
    return pizza;
}
