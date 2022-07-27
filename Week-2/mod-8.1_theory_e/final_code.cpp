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
        this->total_tax+=total_tax;
    }
    int get_total_tax()
    {
        return total_tax;
    }

    int search_food(int code, int items){
            for (int i = 0; i < items; i++)
            {
                if (this->food_item_codes[i]==code)
                {
                    return i;
                }

            }
            return -1;

        }
};

int main()
{
    Restaurant *restaurant=new Restaurant;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>restaurant->food_item_codes[i];
        cin.ignore();
        getline(cin,restaurant->food_item_names[i]);
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
            int code;
            cout<<"Enter Item "<<i<<" Code: ";

            repeat_code:
                cin>>code;
                if(restaurant->search_food(code, n) == -1)
                {
                    cout<<"Invalid code. Enter valid item Code."<<endl;
                    cout<<"Enter Item "<<i<<" Code: ";
                    goto repeat_code;

                }
                item_codes[i]=code;
                cout<<"Enter Item "<<i<<" of Quantity: ";
                cin>>quantity[i];
        }

        cout<<"\n"<<endl;
        cout<<"                 \t\tBILL SUMMARY           "<<endl;
        cout<<"         \t\t_________________________  "<<endl;
        cout<<"Table number: "<<table_number<<endl;
        cout<<"Item code"<<"        "<<"Item Name"<<"          "<<"     Item Price"<<"   "<<"   Item Quantity"<<"     "<<"  Total Price"<<endl;

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
        //cout<<"Total price: \t\t\t\t\t\t\t\t\t"<<total_price<<endl;
        tax_amount=(5.0*total_price)/100;
        cout<<"TAX: \t\t\t\t\t\t\t\t\t\t"<<fixed<<setprecision(2)<<tax_amount<<endl;

        cout<<"________________________________________________________________________________________________"<<endl;

        net_total=total_price+tax_amount;
        cout<<"Net Total:       \t\t\t\t\t\t\t\t"<<net_total<<" Taka"<<endl;
        cout<<"\n"<<endl;

        restaurant->set_total_tax(tax_amount);

        //cout<<"Total Tax: \t\t"<<restaurant->get_total_tax()<<endl;
        goto Flag;

    return 0;
}

