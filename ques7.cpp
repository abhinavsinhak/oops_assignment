#include <iostream>
using namespace std;

template <class T1, class T2>
class Vector {
public:
    T1* vec1;
    T2* vec2;
    int size=3;

    Vector(int size) {
        this->size = size;
        vec1 = new T1[size];
        vec2 = new T2[size];
    }

    void get_vector() {
        cout << "Enter elements of vector 1: ";
        for(int i = 0; i < size; i++) {
            cin >> vec1[i];
        }
        cout << "Enter elements of vector 2: ";
        for(int i = 0; i < size; i++) {
            cin >> vec2[i];
        }
    }

    void display_data() {
        cout << "Vector 1: ";
        for(int i = 0; i < size; i++) {
            cout << vec1[i] << " ";
        }
        cout << endl << "Vector 2: ";
        for(int i = 0; i < size; i++) {
            cout << vec2[i] << " ";
        }
        cout << endl;
    }

    double scalar_product() {
        double result = 0;
        for(int i = 0; i < size; i++) {
            result += (double)vec1[i] * vec2[i];
        }
        return result;
    }
};

int main() {

    Vector<int, float> v(3);

    v.get_vector();
    v.display_data();
    cout << "Scalar product of the vectors: " << v.scalar_product() << endl;

    return 0;
}
