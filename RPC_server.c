/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "RPC.h"

float *
findaverage_1_svc(intMatrix *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */

	return &result;
}

intMatrix *
findminmax_1_svc(intMatrix *argp, struct svc_req *rqstp)
{
	static intMatrix  result;

	/*
	 * insert server code here
	 */

	return &result;
}

floatMatrix *
mulmatrixwithfloat_1_svc(mulFloat *argp, struct svc_req *rqstp)
{
	static floatMatrix  result;

	/*
	 * insert server code here
	 */

	return &result;
}