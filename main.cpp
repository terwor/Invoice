#include <iostream>
#include "invoice.h"
int main()
{
    Invoice Goods("456", "Это описание товара.", 55, 211);

    std::cout << "article " << Goods.getArticle() << std::endl;
    std::cout << "description " << Goods.getDescription() << std::endl;
    std::cout << "number " << Goods.getNumber() << std::endl;
    std::cout << "price " << Goods.getPrice() << std::endl;
    std::cout << "Invoice amount " << Goods.getInvoiceAmount() << std::endl;

    return 0;
}
