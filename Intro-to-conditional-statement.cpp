int main()
{
    int N;
    cin >> N;
    if(N%2!=0){
        cout<<"Weird"<<endl;
    }
    else if(N%2==0){
        if(N>=2 && N<5){
            cout<<"Not Weird"<<endl;
        }
        else if(N%2==0 && N>=6 && N<=20){
            cout<<"Weird"<<endl;
        }
        else if(N%2==0 && N>20){
            cout<<"Not Weird"<<endl;
        }
    } 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
