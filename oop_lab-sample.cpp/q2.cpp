#include<iostream>
using namespace std;
class parcel{
    private:
    int weight;
    protected:
    int shipping_cost;
    // public:
    // // int x , y;
    public:
    parcel()
    {
        weight = 0;
        shipping_cost =0;
    }
    parcel(int x, int y){
        weight = x;
        shipping_cost = y;

    }
    // parcel(parcel &ob)
    // {
    //     weight = ob.weight;
    //     shipping_cost = ob.shipping_cost;
    // }
    int show_weight()
    {
        return weight;
    }
    void cart_shipping()
    {
        shipping_cost = 10*weight;
    }
};
class Box:public parcel{
    private:
    int no_boxes;
    public:
    
    Box()
    {
        int w = show_weight();
        if(w > 30 && w <= 50)
        {
            no_boxes = 2;
        }
        else if(w > 50)
        {
            no_boxes = 5;
        }
        else{
            no_boxes = 1;
        }
    }
    void cart_shipping()
    {
        if(no_boxes > 30)
        {
            shipping_cost += 30;
        }
        cout<<"Shipping Cost :"<<shipping_cost<<endl;

    }

};
int main()
{
    int p;int q;
    cout<<"Enter weight : "<<endl;
    
    
}