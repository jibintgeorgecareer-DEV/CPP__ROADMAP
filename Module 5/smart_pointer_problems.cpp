#include<iostream>
#include<memory>
using namespace std;

//----------------------- UNIQUE_PTR -------------------
// There will be a single house (class) and have a single owner, we move owner user move()
// This demonstrate unique_ptr functionality as it points to single object.
class House     
{
    private:
        string name;
    public:
    string owner;
        House(string n)
        {
            name = n;
        }
        void getNames()
        {
            cout<<"House Name:"<<name<<endl;
            cout<<"Owner Name:"<<owner<<endl;
        }
};
//----------------------------------------------------------

//+++++++++++++++++++++++++ SHARED_PTR ++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Car
{
    public:
        string model;
        Car(string MODEL)
        {
            model = MODEL;
        }

        void get_model()
        {
            cout<<"Model:"<<model<<endl;
        }

};
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main()
{
//--------------------------- Unique_Ptr --------------------------------
    unique_ptr<House> John_ptr = make_unique<House>("Cherry Villa");
    John_ptr->owner = "John";
    John_ptr->getNames();   // Now the house owned by John

    //Moving ownership from John to Hari
    cout<<"\nCHANGING OWNER........\n"<<endl;
    unique_ptr<House> Hari_ptr = move(John_ptr);
    Hari_ptr->owner = "Hari";
    Hari_ptr->getNames();
//-------------------------------------------------------------------------

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    shared_ptr<Car> share_car = make_shared<Car>("Ferrari 250 GT0");

    shared_ptr<Car> Banu = share_car;  // These 3 persons sharing a single object
    shared_ptr<Car> Arjun = share_car;
    shared_ptr<Car> Abhi = share_car;

    cout<<"\n Banu have the ";     Banu->get_model();
    cout<<"\n Arjun have the "; Arjun->get_model();
    cout<<"\n Abhi have the ";  Abhi->get_model();
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
return 0;
}