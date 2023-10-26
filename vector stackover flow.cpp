#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// I define the vector<int> data type to be stored in the variable int_vector.
typedef vector<int> int_vector;

// The definition of the max index of the array.
#define N 3

// The Solve class.
class Solve{
    public:
        // The elements of an array! This is just for testing!
        const int num[N] = {0,1};
        // The length of the array. That means the index of the last element.
        const int length = N;
        // The vector that stores the possible combinations.
        vector<int_vector> solution;

        // The create_combination function.
        void create_combinations(){

            // The queue to create the possible combinations.
            queue<int_vector> combinations;

            // A vector just to store the elements.
            vector<int> test;

            // I create the front vector of the queue.
            for(int i = 0; i <= length; i++){
                // I push back to the vector the i-element of the num array.
                test.push_back(num[i]);
            }

            // I push back to the queue the test vector.
            combinations.push(test);

            // This is just a variable to store some numbers laterin the loop.
            int number;
            // This loop runs forever EXCEPT if the condition that is refered in the if-statement later in te loop happens.
            while(1){
                // This creates the possible combinations and push them back to the solution variable.
                for(int sub_i = 0; sub_i <= length; sub_i++){
                    // I access the front element of the queue.
                    test = combinations.front();
                    number = test[sub_i];
                    test.erase(test.begin() + sub_i);
                    test.push_back(number);
                    combinations.push(test);
                    solution.push_back(test);
                }
                // The pop function erases the front element of the queue. That means that the next element of the queue becomes the front of the queue.
                combinations.pop();
                //This is the condition that breaks the loop if it is true.
                if(combinations.front()[2] == num[2]){
                    break;
                }
            }   
        }
};

// The main function.
int main(){
    // I create the object of the Solve class.
    Solve solve;
    // I call the create_combinations function of the Solve class.
    solve.create_combinations();
    // I access the solution variable of the Solve class and I store it to another variable called combinations.
    vector<int_vector> combinations = solve.solution;
    // This loop prints out to the screen the possible combinations
    for(int i = 0; i <= 6; i++){
        for(int sub_i = 0; sub_i <= solve.length; sub_i++){
            cout << combinations[i].at(sub_i) << " ";
        }
        cout << endl;
    }

    return 0;
}
