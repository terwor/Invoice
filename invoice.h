#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
public:
    Invoice(std::string, std::string, int, int);

    void setArticle(std::string);
    void setDescription(std::string);
    void setNumber(int);
    void setPrice(int);

    std::string getArticle();
    std::string getDescription();
    int getNumber();
    int getPrice();

    int getInvoiceAmount();
private:
    std::string article;
    std::string description;
    int number;
    int price;
};

#endif // INVOICE_H
