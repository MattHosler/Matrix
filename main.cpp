#include <iostream> 
using namespace std;
int matrix[5][5]{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
};
int rowSize = 5;
int columnSize = 5;
int maxRow = 0;



int main() {
    int total= 0;
    for (int column =0; column < columnSize; column++) {
        for (int row = 0; row < rowSize; row++) {

            total += matrix[row][column];
            if (matrix[row][column]> maxRow){
                maxRow= matrix[row][column];
            }
        }
        cout << "Sum for column" << column << "is" << total << endl;

    }
    cout << "Max of all is: "<< maxRow<< endl;


}
