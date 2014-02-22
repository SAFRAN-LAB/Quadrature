#Gauss Laguerre Quadrature#

![Quadrature](https://raw2.github.com/sivaramambikasaran/Quadrature/master/images/Gauss_Laguerre.png)

Table of nodes and weights upto 256th order for the Gauss-Laguerre quadrature. The tables are generated using mathematica to a very high precision (most of them are accurate upto more than '100' digits).

The nodes are found inside the folder named 'nodes' and the weights are found in the folder named 'weights'.

For instance, the file 'nodes10' contains the Gauss Laguerre nodes of order 10 and the file 'weights10' contains the corresponding weights. All the digits in these files are accurate.

C++ header files are also provided to obtain these values as an array of long double. There are two ways to obtain these values.

###First method:###

This gives access to all orders from '1' to '128'. This takes slightly longer to compile but is useful when we do not *apriori* know the order to use.

1. Include the header file "**./header/Gauss\_Laguerre\_Nodes\_and\_Weights.hpp**"
    
2. Nodes and weights of any order can be obtained using the following command:
    
    **Gauss_Laguerre_Nodes_and_Weights(N, nodes, weights);**

where 'N' is the order of the Gauss Laguerre quadrature, 'nodes' is a long double array with the nodes and 'weights' is a long double array with the respective weights.


###Second method:###

If we *a-priori* know the order we want to use, i.e., say order '16', then proceed as follows:

1. Include the header file "**./header/Gauss\_Laguerre\_Nodes\_and\_Weights_16.hpp**"
    
2. Nodes and weights of order '16' can be obtained using the following command:
    
    **Gauss_Laguerre_Nodes_and_Weights_16(nodes, weights);**

where 'nodes' is a long double array with the nodes and 'weights' is a long double array with the respective weights.
