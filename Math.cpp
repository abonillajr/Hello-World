#include <iostream>
#include <vector>

using namespace std;

template<class T>
		class genClass {

			vector <T> storage;

			void memberFun(T input)
			{
				storage push.back(input);
			};
		};


template <class M>

class Poly
{
private:
    M xValue, aValue, bValue, cValue, sum;

public:

    Poly(M x, M a, M b, M c)
    {
        xValue = x;
        aValue = a;
        bValue = b;
        cValue = c;

        sum = ((aValue*(xValue*xValue))+(bValue*xValue)+cValue);
    }

    void showSum()
    {
        cout << "\n\n The solution is: " << sum << endl;
    }

};

int main()
{
    float x, a, b, c;

    cout << "For the solution to the Polynomial (ax^2 + bx + c) enter the values below: \n\n";

    cout << "\n Enter the x Value:  ";
    cin >> x;
    cout << "\n Enter the a Value:  ";
    cin >> a;
    cout << "\n Enter the b Value:  ";
    cin >> b;
    cout << "\n Enter the c Value:  ";
    cin >> c;

    Poly<float> answer(x,a,b,c);

    answer.showSum();



    //Poly<int> ones(1,1,1,1);
    //Poly<int> zeros(0,0,0,0);
    //Poly<int> norm(5,3,4,6);

   // cout <<"ones: " << endl;
   // ones.showSum();

   // cout <<"zeros: " << endl;
  //  zeros.showSum();

  //  cout <<"norm: " << endl;
  //  norm.showSum();
}
