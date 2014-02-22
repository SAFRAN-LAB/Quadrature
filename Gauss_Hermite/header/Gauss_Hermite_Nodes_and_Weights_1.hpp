//
//        Gauss_Hermite_Nodes_and_Weights_1.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 1.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_1_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_1_hpp__

void Gauss_Hermite_Nodes_and_Weights_1(long double*& nodes, long double*& weights) {
	nodes	= new long double[1];
	weights	= new long double[1];

	nodes[0] 	= 0;
	weights[0] 	= 1.7724538509055160272981674833411451827975494561223871282138077898529112845910321813749506567385446654162268236242825706662361529;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_1_hpp__)*/