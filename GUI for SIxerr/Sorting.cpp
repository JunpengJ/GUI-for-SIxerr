#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
//#include "MaxHeap.cpp"
#include <algorithm>
//#include <sqlite3.h>
#include <string>
using namespace std;

template <typename T> void heapSort(vector <T>& v, int type){
    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());
    if (type == 1) {
        reverse(v.begin(), v.end());
    }
 }

int main(){
    float ranRatings;
    vector <float> freelancerRatings; //generate random ratings for tests
       for (int i=0; i<8; i++) {
            ranRatings = 1 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/4));
            freelancerRatings.push_back(ranRatings);
       }
    
    cout<<"\nUnsorted Ratings: ";
    for(const auto& element:freelancerRatings){
        cout<<"[ "<<setprecision(2)<<element<<" ] ";
    }

    heapSort(freelancerRatings, 0);

    cout<<"\n\nRatings Sorted (Ascending): ";
    for(const auto& element:freelancerRatings){
        cout<<"[ "<<setprecision(2)<<element<<" ] ";
    }

    heapSort(freelancerRatings, 1);

    cout<<"\n\nRatings Sorted (Descending): ";
    for(const auto& element:freelancerRatings){
        cout<<"[ "<<setprecision(2)<<element<<" ] ";
    }

    vector <string> freelancerNames;
    freelancerNames.push_back("Landon McKay");
    freelancerNames.push_back("Junpeng Jiang");
    freelancerNames.push_back("Marcus Hoang");
    freelancerNames.push_back("John Smith");
    freelancerNames.push_back("Jane Smith");

    cout<<"\n\nUnsorted Names: ";
    for(const auto& element:freelancerNames){
        cout<<"[ "<<setprecision(2)<<element<<" ] ";
    }

    heapSort(freelancerNames, 0);

    cout<<"\n\nNames Sorted (Ascending): ";
    for(const auto& element:freelancerNames){
        cout<<"[ "<<setprecision(2)<<element<<" ] ";
    }

    
    heapSort(freelancerNames, 1);

    cout<<"\n\nNames Sorted (Descending): ";
    for(const auto& element:freelancerNames){
        cout<<"[ "<<setprecision(2)<<element<<" ] ";
    }

    // A.push_back(1);
    // A.push_back(5);
    // A.push_back(4);
    // A.push_back(2);
    // A.push_back(7);
    // make_heap(A.begin(), A.end());
    // cout<<"The element of the heap"<<endl;
    // for (const auto& element :A){
    //     cout<<element<<" ";
    // }
    // cout<<endl;
    // A.push_back(7);
    // push_heap(A.begin(), A.end());
    // cout<<"After insert: ";
    // for(const auto& element:A){
    //     cout<<element<<" ";
    // }
    // cout<<endl;
    
    // is_heap(A.begin(),A.end());
    
    return 0;
}