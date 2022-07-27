#include<bits/stdc++.h>

using namespace std;

class Restaurant
{
public:
    int food_item_codes[13];
    string food_item_names[13];
    int food_item_prices[13];
private:
    int total_tax;
public:
    void set_total_tax(int total_tax)
    {
        //int total_tax=1200;
        this->total_tax+=total_tax;
    }
    int get_total_tax()
    {
        return total_tax;
    }
/*
    Restaurant(int food_item_codes[12],string food_item_names[12],int food_item_prices[12])
    {
        for(int i=0; i<1; i++)
        {
            food_item_codes[i]=food_item_codes[i];
            food_item_names[i]=food_item_names[i];
            food_item_prices[i]=food_item_prices[i];
        }
    }
    */
};
/*
Restaurant* storeItems()
{
    cout<<"Provide items for restaurant: ";
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

    for(int i=0; i<12; i++)
    {
        cin>>food_item_codes[i];
        cin>>food_item_names[i];
        cin>>food_item_prices[i];
    }
    Restaurant *restaurant = new Restaurant(food_item_codes, food_item_names, food_item_prices);
    return restaurant;
}
*/
int main()
{
    Restaurant *restaurant=new Restaurant;
    //cout<<"No of items: ";
    int n;
    //cout<<"Give the number of items: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        //cout<<"item  "<<i<<" code: ";
        cin>>restaurant->food_item_codes[i];
        //cout<<"item  "<<i<<" name: ";
        cin.ignore();
        //cin>>restaurant->food_item_names[i];
        getline(cin,restaurant->food_item_names[i]);
        //cin.getline(restaurant->food_item_names[i],25);
        //cout<<"item "<<i<<" price: ";
        cin>>restaurant->food_item_prices[i];
    }
    Flag:
        cout<<"                 \t\tMAKE BILL           "<<endl;
        cout<<"         \t\t_______________________  "<<endl;
        cout<<"Item code"<<"        "<<"Item Name"<<"          "<<"     \t\tItem Price"<<"   "<<endl;
        for(int i=1; i<=n; i++)
        {
            cout<<restaurant->food_item_codes[i]<<"\t\t "<<restaurant->food_item_names[i]<<"\t\t\t "<<restaurant->food_item_prices[i]<<endl;
        }


        //enter table number

        cout<<"\n"<<endl;
        int table_number, no_of_items, item_codes[12],quantity[12];
        int total_price=0;

        cout<<"Enter Table No: ";
        cin>>table_number;
        cout<<"Enter No of Items: ";
        cin>>no_of_items;


        for(int i=1; i<=no_of_items; i++)
        {

            cout<<"Enter Item "<<i<<" Code: ";
            cin>>item_codes[i];
            cout<<"Enter Item "<<i<<" of Quantity: ";
            cin>>quantity[i];

        }
/*
        for(int i=1; i<=no_of_items; i++)
        {
            for(int m=1; m<=n; m++)
            {
                if(item_codes[i] != restaurant->food_item_codes[m])
                {
                    cout<<"Invalid item enter again"<<endl;
                    cout<<"Enter Item "<<i<<" Code: ";
                    cin>>item_codes[i];
                    cout<<"Enter Item "<<i<<" of Quantity: ";
                    cin>>quantity[i];
                }

            }
        }
*/
        cout<<"                 \t\tBILL SUMMARY           "<<endl;
        cout<<"         \t\t_________________________  "<<endl;
        cout<<"Table number: "<<table_number<<endl;
        cout<<"Item code"<<"        "<<"Item Name"<<"          "<<"     Item Price"<<"   "<<"   item quantity"<<"     "<<"  total price"<<endl;

        for(int i=1; i<=no_of_items; i++)
        {
            for(int m=1; m<=n; m++)
            {
                if(item_codes[i] == restaurant->food_item_codes[m])
                {
                    cout<<restaurant->food_item_codes[m]<<"\t\t"<<restaurant->food_item_names[m]<<"\t   "<<restaurant->food_item_prices[m]<<"\t\t\t"<<quantity[i]<<"\t\t"<<quantity[i]*restaurant->food_item_prices[m]<<endl;

                    total_price+=quantity[i]*restaurant->food_item_prices[m];
                }


            }
        }

        double tax_amount, net_total;
        cout<<"Total price: \t\t\t\t\t\t\t\t\t"<<total_price<<endl;
        tax_amount=(5.0*total_price)/100;
        cout<<"TAX: \t\t\t\t\t\t\t\t\t\t"<<fixed<<setprecision(2)<<tax_amount<<endl;

        cout<<"________________________________________________________________________________________________"<<endl;

        net_total=total_price+tax_amount;
        cout<<"Net Total:       \t\t\t\t\t\t\t\t"<<net_total<<" Taka"<<endl;


        restaurant->set_total_tax(tax_amount);
        //cout<<restaurant->get_total_tax();

        cout<<"Total Tax: \t\t"<<restaurant->get_total_tax()<<endl;
        goto Flag;



    return 0;
}
