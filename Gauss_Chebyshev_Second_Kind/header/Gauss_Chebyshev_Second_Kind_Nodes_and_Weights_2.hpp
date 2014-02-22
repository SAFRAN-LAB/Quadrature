//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_2.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:56.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 2.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_2_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_2_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_2(long double*& nodes, long double*& weights) {
	nodes	= new long double[2];
	weights	= new long double[2];

	nodes[0] 	= 0.5;
	weights[0] 	= 0.7853981633974483096156608458198757210492923498437764552437361480769541015715522496570087063355292669955370216283205766617734612;

	nodes[1] 	= -0.5;
	weights[1] 	= 0.7853981633974483096156608458198757210492923498437764552437361480769541015715522496570087063355292669955370216283205766617734612;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_2_hpp__)*/