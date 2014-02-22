//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_3.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 3.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_3_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_3_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_3(long double*& nodes, long double& weight) {
	weight 		= 1.0471975511965977461542144610931676280657231331250352736583148641026054687620696662093449417807056893273826955044274355490312815;

	nodes		= new long double[3];

	nodes[0] 	= 0.86602540378443864676372317075293618347140262690519031402790348972596650845440001854057309337862428783781307070770335151498497255;
	nodes[1] 	= 0.e-127;
	nodes[2] 	= -0.8660254037844386467637231707529361834714026269051903140279034897259665084544000185405730933786242878378130707077033515149849725;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_3_hpp__)*/