#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
private:
    int total_tax;
public:

    Restaurant(int food_item_codes[12],string food_item_names[12],int food_item_prices[12])
    {
        for(int i=0; i<1; i++)
        {
            food_item_codes[i]=food_item_codes[i];
            food_item_names[i]=food_item_names[i];
            food_item_prices[i]=food_item_prices[i];
        }
    }
};

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

int main()
{
    int n;
    //cout<<"Give the number of items: ";
    //cin>>n;

    Restaurant *restaurant;
    restaurant=storeItems();
    //for(int i=0; i<n; i++)
   // {
        //restaurant[i]=storeItems(i+1);
    //}//


    for(int i=0; i<n; i++)
    {
        for(int k=0; k<12; k++)
        {
            cout<<"Restaurant Items: "<<endl;
            cout<<restaurant[i]->food_item_codes[k]<<" "<<restaurant[i]->food_item_names[k]<<restaurant[i]->food_item_prices[k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
