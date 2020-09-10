#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip,tax,result;
    tip=double(double(tip_percent*0.01)*meal_cost);
    tax=double(double(tax_percent*0.01)*meal_cost);
    result= double(tip+tax+meal_cost);
    if((result-int(result))>=0.5){
        cout<<int(result+1);
    }
    else{
        cout<<int(result);
    }
    
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
