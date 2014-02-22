#Gauss Legendre#

Table of nodes and weights upto 128th order for the Gauss-Legendre quadrature. The tables are generated using mathematica to a very high precision (most of them are accurate upto 100 digits).

The nodes are found inside the folder named 'nodes' and the weights are found in the folder named 'weights'.

For instance, the file 'nodes10' contains the Gauss Legendre nodes of order 10 and the file 'weights10' contains the corresponding weights. All the digits in these files are accurate.

C++ header files are also provided to obtain these values as an array of long double. There are two ways to obtain these values.

###First method:###

1. Include the header file "**./header/Gauss\_Legendre\_Nodes\_and\_Weights.hpp**"
    
2. Nodes and weights of any order can be obtained using the following command:
    
    **Gauss_Legendre_Nodes_and_Weights(N, nodes, weights);**

where 'N' is the order of the Gauss Legendre quadrature, 'nodes' is a long double array with the nodes and 'weights' is the a long double array with the respective weights.
