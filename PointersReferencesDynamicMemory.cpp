// PointersReferencesDynamicMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* GenerateInvoice(int size);
void AddItemToBasket(int* items, int size);
void PrintInvoice(int* items, int size);
int main()
{
    std::cout << "Hello World!\n";

    bool* pBool = new bool{ true };
    delete pBool;
    pBool = nullptr;

    float* pFloat = new float{ 20.5f };
    delete pFloat;
    pFloat = new float{ 30.5f };
    delete pFloat;
    pFloat = nullptr;

    int size = 0;
    cout << "Welcome, how many items do you want to shop for today !? " << endl;
    cin >> size;
    int* shoppingItems = GenerateInvoice(size);
    AddItemToBasket(shoppingItems, size);
    PrintInvoice(shoppingItems, size);
    delete[] shoppingItems;
    shoppingItems = nullptr;
}

int* GenerateInvoice(int size) {
   int* items = new int[size];
    return items;
}
void AddItemToBasket(int* items, int size) {
    cout << "Add items to your shopping basket using dynamic pointer and allocation " << endl;
    for (int i = 0; i < size; i++) {
        cin >> items[i];
    }
}
void PrintInvoice(int* items, int size) {
    cout << "Welcome to CGSpectrum ABK Shopping Limited" << endl <<
        "3100 Ocean Park Blvd, Santa Monica, CA 90405" << endl <<
        "Your cashier is Abiola Akinnubi" << endl;
        for (int i = 0; i < size; i++) {
            cout<< "\t" << items[i] << endl;
        }
        cout << "Little Rock AR 72204" << endl;
        cout << "Chase Visa Purchase" << endl;
        cout << "REF #: 0033474747744" << endl;
        cout << "Total Item Sold =" << size << endl;
        cout << "www.activision.com" << endl;
} 