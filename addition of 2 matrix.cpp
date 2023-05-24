#include <iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2,j,i,k;
	cout << "Enter the number of rows and columns in matrix one respectively." <<endl;
	cin >> r1 >> c1;
	cout << "Enter the number of rows and columns in matrix two respectively." <<endl;
	cin >> r2 >> c2;
	
	while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second." <<endl;

        cout << "Enter rows and columns for first matrix: " <<endl;
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: "<<endl;
        cin >> r2 >> c2;
    }
    
	int m1[r1][c1],m2[r2][c2],ans[r1][c2];
	// Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> m1[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> m2[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            ans[i][j]=0;
        }

    // adding matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                ans[i][j] += m1[i][k] + m2[k][j];
            }

    // Displaying the addition of two matrix.
    cout << endl << "Matrix Addition: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << ans[i][j] << "   ";
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}
