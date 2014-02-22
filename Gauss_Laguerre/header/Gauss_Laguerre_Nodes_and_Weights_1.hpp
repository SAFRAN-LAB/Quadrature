//
//        Gauss_Laguerre_Nodes_and_Weights_1.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 1.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_1_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_1_hpp__

void Gauss_Laguerre_Nodes_and_Weights_1(long double*& nodes, long double*& weights) {
	nodes	= new long double[1];
	weights	= new long double[1];

	nodes[0] 	= 1.;
	weights[0] 	= 1.;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_1_hpp__)*/