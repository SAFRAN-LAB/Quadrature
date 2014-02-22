//
//  Generate_Gauss_Chebyshev_Second_Kind_Header.cpp
//  
//
//  Created by Sivaram Ambikasaran on 2/21/14.
//
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cassert>
#include <ctime>
#include <string>

using std::ofstream;
using std::ifstream;
using std::ostringstream;
using std::string;
using std::endl;


// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const string currentDateTime() {
        time_t     now = time(0);
        struct tm  tstruct;
        char       buf[80];
        tstruct = *localtime(&now);
        // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
        // for more information about date/time format
        strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
        
        return buf;
}

//      Generates individual files for each number of nodes.
void generate_File(int n) {

        //      Filename of the different files
        string fileName         =       "./header/Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_";
        string nodesFile        =       "./nodes/nodes";
        string weightsFile      =       "./weights/weights";
        ostringstream oss;
        oss << n;
        fileName+=oss.str();
        fileName+=".hpp";
        nodesFile+=oss.str();
        weightsFile+=oss.str();

        //      Variable for the files.
        ofstream myhppfile(fileName.c_str());
        ifstream mynodesFile(nodesFile.c_str());
        ifstream myweightsFile(weightsFile.c_str());

        //      Some initial things to be done in each of the header files.

        myhppfile << "//" << endl;
        myhppfile << "//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_" << n << ".hpp" << endl;
        myhppfile << "//" << endl;
        myhppfile << "//" << endl;
        myhppfile << "//        Created by Sivaram Ambikasaran on " << currentDateTime() << "." << endl;
        myhppfile << "//" << endl;
        myhppfile << "//" << endl;
        myhppfile << "//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order " << n << "." << endl;
        myhppfile << "//" << endl;
        myhppfile << "//" << endl << endl;
        myhppfile << "#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_" << n << "_hpp__" << endl;
        myhppfile << "#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_" << n << "_hpp__" << endl << endl;
        myhppfile << "void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_" << n << "(long double*& nodes, long double*& weights) {" << endl;
        myhppfile << "\tnodes\t= new long double[" << n << "];" << endl;
        myhppfile << "\tweights\t= new long double[" << n << "];" << endl << endl;
        string nodes, weights;
        for (int k=0; k<n; ++k) {
                getline(mynodesFile, nodes);
                getline(myweightsFile, weights);
                myhppfile << "\tnodes[" << k << "] \t= " << nodes << ";" << endl;
                myhppfile << "\tweights[" << k << "] \t= " << weights << ";" << endl << endl;
        }
        mynodesFile.close();
        myweightsFile.close();
        myhppfile << "}" << endl;
        myhppfile << "#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_" << n << "_hpp__)*/";
        myhppfile.close();
}

//      Generates a single file for different number of nodes.
void generate_Main_File(int N) {
        string fileName         =       "./header/Gauss_Chebyshev_Second_Kind_Nodes_and_Weights.hpp";

        //      Variable for the files.
        ofstream myhppfile(fileName.c_str());

        //      Some initial things to be done in the header file.

        myhppfile << "//" << endl;
        myhppfile << "//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights.hpp" << endl;
        myhppfile << "//" << endl;
        myhppfile << "//" << endl;
        myhppfile << "//        Created by Sivaram Ambikasaran on " << currentDateTime() << "." << endl;
        myhppfile << "//" << endl;
        myhppfile << "//" << endl;
        myhppfile << "//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order between 1 and " << N << "." << endl;
        myhppfile << "//" << endl;
        myhppfile << "//" << endl << endl;
        myhppfile << "#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_hpp__" << endl;
        myhppfile << "#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_hpp__" << endl << endl;
        myhppfile << "#include <cassert>" << endl << endl;
//        for (int k=0; k<N; ++k) {
//                myhppfile << "#include \"Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_" << k+1 << ".hpp\"" << endl;
//        }
        string nodesFile;
        string weightsFile;
        ifstream mynodesFile;
        ifstream myweightsFile;
        myhppfile << "void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights(int N, long double*& nodes, long double*& weights) {" << endl;
        myhppfile << "\tassert(N>=1 && \"Number of nodes must be atleast 1.\");" << endl;
        myhppfile << "\tassert(N<=256 && \"Currently, the maximum number of nodes is only " << N << ".\");" << endl;
        myhppfile << "\tswitch(N) {" << endl;
        for (int k=1; k<=N; ++k) {

                nodesFile       =       "./nodes/nodes";
                weightsFile     =       "./weights/weights";
                ostringstream oss;
                oss << k;
                nodesFile+=oss.str();
                weightsFile+=oss.str();

                mynodesFile.open(nodesFile.c_str());
                myweightsFile.open(weightsFile.c_str());
                myhppfile << "\tcase " << k << ":" << endl;
                myhppfile << "\t\tnodes\t= new long double[" << k << "];" << endl;
                myhppfile << "\t\tweights\t= new long double[" << k << "];" << endl << endl;
                string nodes, weights;
                for (int j=0; j<k; ++j) {
                        getline(mynodesFile, nodes);
                        getline(myweightsFile, weights);
                        myhppfile << "\t\tnodes[" << j << "] \t= " << nodes << ";" << endl;
                        myhppfile << "\t\tweights[" << j << "] \t= " << weights << ";" << endl << endl;
                }
                myhppfile << "\tbreak;" << endl << endl;
                mynodesFile.close();
                myweightsFile.close();
        }
        myhppfile << "\t}" << endl;
        myhppfile << "}" << endl;
        myhppfile << "#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_hpp__)*/";
        myhppfile.close();
}

int main(int argc, char* argv[]) {
        int N   =       atoi(argv[1]);
        assert(N>=1 && "Number of nodes must be atleast 1.");
        assert(N<=256 && "Currently, the maximum number of nodes is only 256.");
        generate_Main_File(N);
        for (int j=1; j<=N; ++j) {
                generate_File(j);
        }
}