#include <iostream>
#include <string>
#include "invoice.h"

Invoice::Invoice(std::string art, std::string desc, int num, int price)
{
    setArticle(art);
    setDescription(desc);
    setNumber(num);
    setPrice(price);
}

void Invoice::setArticle(std::string valueArticle)
{
    if (valueArticle.length() <= 0)
    {
        article = "default_article";
        std::cout << "Артикул установлен по-умолчанию!" << std::endl;
    }
    if (valueArticle.length() > 10)
    {
        article = valueArticle.substr(0, 10);
        std::cout << "Длина артикля не должна превышать 10 знаков!" << std::endl;
    }

    article = valueArticle;
}

void Invoice::setDescription(std::string valueDescription)
{
    if (valueDescription.length() <= 0)
    {
        description = "default_description";
        std::cout << "Описание установлено по-умолчанию!" << std::endl;
    }
    if (valueDescription.length() > 100)
    {
        description = valueDescription.substr(0, 100);
        std::cout << "Длина артикля не должна превышать 100 знаков!" << std::endl;
    }

    description = valueDescription;
}

void Invoice::setNumber(int valueNumber)
{
    if (valueNumber < 0)
    {
        number = 0;
        std::cout << "Количество установлено по-умолчанию" << std::endl;
    }
    else
        number = valueNumber;
}

void Invoice::setPrice(int valuePrice)
{
    if (valuePrice < 0)
    {
        price = 0;
        std::cout << "Цена установлена по-умолчанию" << std::endl;
    }
    else
        price = valuePrice;
}

std::string Invoice::getArticle()
{
    return article;
}

std::string Invoice::getDescription()
{
    return description;
}

int Invoice::getNumber()
{
    return number;
}

int Invoice::getPrice()
{
    return price;
}

int Invoice::getInvoiceAmount()
{
    return price * number;
}






























