// 3.18 - To Compute Total Marks

#include <iostream>

using namespace std;

int main(){

    int n, m, i, j, no, marks, total;

    cout << "\nEnter no. of Students and Subjects\n";
    cin >> n >> m;

    for(i = 1; i <= n; ++i){
        cout << "\nEnter Roll no: ";
        cin >> no;

        total = 0;
        cout << "\nEnter marks of " << m << " subjects for " << no << ":";

        for(j = 1; j <= m; j++){
            cin >> marks;
            total = total + marks;
        }

        cout << "\nTotal Marks: " << total;
    }

    return 0;
}