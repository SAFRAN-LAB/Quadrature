//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_1.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 1.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_1_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_1_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_1(long double*& nodes, long double& weight) {
	weight 		= 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446;

	nodes		= new long double[1];

	nodes[0] 	= 0.e-127;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_1_hpp__)*/