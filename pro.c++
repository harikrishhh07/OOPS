#include <iostream>
#include <vector>
using namespace std;
class Product{
    int pid,quantity;
    string pname;
    double price,total;
    public:
    Product(){
        pid=0;
        quantity=0;
        pname="null";
        price=0;
    }
    Product(int pi,int q,string pn,double p){
        pid=pi;
        quantity=q;
        pname=pn;
        price=p;
    }
    void CalculateTotalprice(){
        total=price*quantity;
        
    }
    ~Product(){
        cout<<"The Product Object is Removed!"<<endl;
    }

    void Displayproduct(){
        cout<<"the Product Id is:"<<pid<<endl;
        cout<<"the Product Quantity:"<<quantity<<endl;
        cout<<"the Product name is:"<<pname<<endl;
        cout<<"the Product price is:"<<price<<endl;
        cout<<"the total price is:"<<total<<endl;
    }
    
};
int main() {
    vector<Product> p1;
    p1.push_back(Product(1001,10,"pen",5));
    p1[0].CalculateTotalprice();
    p1[0].Displayproduct();
    return 0;
}
