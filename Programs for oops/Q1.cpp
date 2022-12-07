#include <iostream>
using namespace std;
class Matrix{
    int i, j, k,m,n,p,q;
    int a[10][10];
    int b[10][10];
    int c[10][10];
    public:
    Matrix(int n1,int n2,int n3,int n4){
        m=n1;
        n=n2;
        p=n3;
                                                                                                                                                             
        q=n4;  }
    void Mult();
    void InputMatrix();
    void OutputMatrix();
};
void Matrix::InputMatrix(){
    if(n!=p){
        cout<<"Matrix can not be multiplied with these order of matrix"<<endl;  }
    else{
        cout << "\nEnter the values for the first matrix" << endl;
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                cin >> a[i][j];  }  }
        cout << "\nEnter the values for the second matrix" << endl;
        for (i = 0; i < p; i++){
            for (j = 0; j < q; j++){
                cin >> b[i][j];
           } } } }
void Matrix::Mult(){
    for (i = 0; i < m; i++){
        for (j = 0; j < q; j++){
            c[i][j] = 0;
            for (k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
        } } } }
void Matrix::OutputMatrix(){
    cout << "\nThe Resultant Matrix is: \n";
    for (i = 0; i < m; i++){
        for (j = 0; j < q; j++){
            cout << c[i][j] << " ";  }
        cout << endl;
    }  }
int main(){
    cout << "08113202721 , GAGANDEEP KAUR , CSE-2(A)";
    int n1,n2,n3,n4;
    cout<<"\n\nEnter the size of matrix 1: ";
    cin>>n1>>n2;
    cout<<"Enter the size of matrix 2: ";
    cin>>n3>>n4;
    Matrix x(n1,n2,n3,n4);
    x.InputMatrix();
    x.Mult();
    x.OutputMatrix();
    return 0;
}
