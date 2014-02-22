//
//        Gauss_Legendre_Nodes_and_Weights_1.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 1.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_1_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_1_hpp__

void Gauss_Legendre_Nodes_and_Weights_1(long double*& nodes, long double*& weights) {
	nodes	= new long double[1];
	weights	= new long double[1];

	nodes[0] 	= 0;
	weights[0] 	= 2.;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_1_hpp__)*/