//
//  Test_Gauss_Chebyshev_First_Kind.cpp
//  
//
//  Created by Sivaram Ambikasaran on 2/21/14.
//
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include "./header/Gauss_Chebyshev_First_Kind_Nodes_and_Weights.hpp"
#include "./header/Gauss_Chebyshev_First_Kind_Nodes_and_Weights_3.hpp"

using std::cout;
using std::endl;
using std::setprecision;

int main() {
        long double* nodes;
        long double weight;

        long double sum;
        for (int k=1; k<=20; ++k) {
                sum     =       0.0;
                Gauss_Chebyshev_First_Kind_Nodes_and_Weights(k, nodes, weight);
                for (int j=0; j<k; ++j) {
                        sum+=exp(-0.5*nodes[j]*nodes[j]);
                }
                sum*=weight;
                cout << "Integral with " << k << " nodes is: " << setprecision(16) << sum << endl;
        }
        return 0;
}