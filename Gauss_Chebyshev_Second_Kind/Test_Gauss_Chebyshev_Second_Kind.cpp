//
//  Test_Gauss_Chebyshev_Second_Kind.cpp
//  
//
//  Created by Sivaram Ambikasaran on 2/21/14.
//
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include "./header/Gauss_Chebyshev_Second_Kind_Nodes_and_Weights.hpp"
#include "./header/Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_3.hpp"

using std::cout;
using std::endl;
using std::setprecision;

int main() {
        long double* nodes;
        long double* weights;
//        int N   =       1;
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights(N, nodes, weights);
//        long double sum =       0.0;
//        for (int k=0; k<N; ++k) {
////                cout << setprecision (50) << nodes[k] << "\t" << setprecision (50) << weights[k] << endl;
//                sum+=weights[k];
//        }
//        cout << "Sum is :" << setprecision (10) << sum << endl;
//        cout << M_PI << endl;
//        sum     =       0.0;
//        for (int k=0; k<N; ++k) {
//                sum+=weights[k]*cos(0.5*M_PI*nodes[k]);
//        }
//        cout << "Area of cos(pi*x/2) from -1 to 1 is: " << sum << endl;
//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_3(nodes, weights);
//        sum     =       0.0;
//        for (int k=0; k<3; ++k) {
//                sum+=weights[k]*cos(0.5*M_PI*nodes[k]);
//        }
//        cout << "Area of cos(pi*x/2) from -1 to 1 is: " << sum << endl;

//
        long double sum;
        for (int k=1; k<=20; ++k) {
                sum     =       0.0;
                Gauss_Chebyshev_Second_Kind_Nodes_and_Weights(k, nodes, weights);
                for (int j=0; j<k; ++j) {
                        sum+=weights[j]*exp(-0.5*nodes[j]*nodes[j]);
                }
                cout << "Integral with " << k << " nodes is: " << setprecision(16) << sum << endl;
        }

//        long double sum =       0.0;
//        for (int k=0; k<N; ++k) {
//                //                cout << setprecision (50) << nodes[k] << "\t" << setprecision (50) << weights[k] << endl;
//                sum+=weights[k];
//        }
//        cout << "Sum is :" << setprecision (10) << sum << endl;
//        cout << M_PI << endl;
//        sum     =       0.0;
//        for (int k=0; k<N; ++k) {
//                sum+=weights[k]*cos(0.5*M_PI*nodes[k]);
//        }
        return 0;
}