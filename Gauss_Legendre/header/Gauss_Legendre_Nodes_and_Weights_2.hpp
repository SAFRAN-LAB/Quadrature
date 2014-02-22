//
//        Gauss_Legendre_Nodes_and_Weights_2.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 2.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_2_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_2_hpp__

void Gauss_Legendre_Nodes_and_Weights_2(long double*& nodes, long double*& weights) {
	nodes	= new long double[2];
	weights	= new long double[2];

	nodes[0] 	= -0.57735026918962576450914878050195745564760175127012687601860232648397767230293334569371539558574952522520871380513556767665664836;
	weights[0] 	= 1.;

	nodes[1] 	= 0.57735026918962576450914878050195745564760175127012687601860232648397767230293334569371539558574952522520871380513556767665664836;
	weights[1] 	= 1.;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_2_hpp__)*/