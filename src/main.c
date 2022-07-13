/*
 *	Authored 2021, Orestis Kaparounakis.
 *
 *	All rights reserved.
 *
 *	Redistribution and use in source and binary forms, with or without
 *	modification, are permitted provided that the following conditions
 *	are met:
 *	*	Redistributions of source code must retain the above
 *		copyright notice, this list of conditions and the following
 *		disclaimer.
 *	*	Redistributions in binary form must reproduce the above
 *		copyright notice, this list of conditions and the following
 *		disclaimer in the documentation and/or other materials
 *		provided with the distribution.
 *	*	Neither the name of the author nor the names of its
 *		contributors may be used to endorse or promote products
 *		derived from this software without specific prior written
 *		permission.
 *
 *	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *	FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *	COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *	BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *	CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *	LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *	ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *	POSSIBILITY OF SUCH DAMAGE.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <uncertain.h>

#include "fptaylor-real2float.h"

enum {
	kBenchmarkFunctionCount 	= 11,
	kBenchmarkMaxArgumentCount 	= 6,
};

double	loadDoubleDistFromPath(double *  var, const char * folder, const char *  filename);
void	usage();

int
main(int argc, char *  argv[])
{
	char *  folder = "test";
	double	ex[kBenchmarkFunctionCount];
	double	in[kBenchmarkFunctionCount][kBenchmarkMaxArgumentCount];

	if (argc == 1)
	{
	}
	else if (argc == 2)
	{
		folder = argv[1];
	}
	else
	{
		usage();
		exit(EXIT_FAILURE);
	}

	/*
	 *	Load samples into distributional double variables and call
	 *	benchmark functions.
	 */
	loadDoubleDistFromPath(&in[0][0], folder, "input-ex0-x.txt");
	ex[0] = ex0(in[0][0]);
	printf("ex0 = %lf\n", ex[0]);

	loadDoubleDistFromPath(&in[1][0], folder, "input-ex1-x.txt");
	loadDoubleDistFromPath(&in[1][1], folder, "input-ex1-r.txt");
	loadDoubleDistFromPath(&in[1][2], folder, "input-ex1-lat.txt");
	loadDoubleDistFromPath(&in[1][3], folder, "input-ex1-lon.txt");
	ex[1] = ex1(in[1][0], in[1][1], in[1][2], in[1][3]);
	printf("ex1 = %lf\n", ex[1]);

	loadDoubleDistFromPath(&in[2][1], folder, "input-ex2-lat1.txt");
	loadDoubleDistFromPath(&in[2][1], folder, "input-ex2-lat2.txt");
	loadDoubleDistFromPath(&in[2][2], folder, "input-ex2-lon1.txt");
	loadDoubleDistFromPath(&in[2][3], folder, "input-ex2-lon2.txt");
	ex[2] = ex2(in[2][0], in[2][1], in[2][2], in[2][3]);
	printf("ex2 = %lf\n", ex[2]);

	loadDoubleDistFromPath(&in[3][0], folder, "input-ex3-x1.txt");
	loadDoubleDistFromPath(&in[3][1], folder, "input-ex3-x2.txt");
	loadDoubleDistFromPath(&in[3][2], folder, "input-ex3-x3.txt");
	loadDoubleDistFromPath(&in[3][3], folder, "input-ex3-x4.txt");
	loadDoubleDistFromPath(&in[3][4], folder, "input-ex3-x5.txt");
	loadDoubleDistFromPath(&in[3][5], folder, "input-ex3-x6.txt");
	ex[3] = ex3(in[3][0], in[3][1], in[3][2], in[3][3], in[3][4], in[3][5]);
	printf("ex3 = %lf\n", ex[3]);

	loadDoubleDistFromPath(&in[4][0], folder, "input-ex4-x1.txt");
	loadDoubleDistFromPath(&in[4][1], folder, "input-ex4-x2.txt");
	ex[4] = ex4(in[4][0], in[4][1]);
	printf("ex4 = %lf\n", ex[4]);

	loadDoubleDistFromPath(&in[5][0], folder, "input-ex5-x1.txt");
	loadDoubleDistFromPath(&in[5][1], folder, "input-ex5-x2.txt");
	ex[5] = ex5(in[5][0], in[5][1]);
	printf("ex5 = %lf\n", ex[5]);

	loadDoubleDistFromPath(&in[6][0], folder, "input-ex6-x1.txt");
	loadDoubleDistFromPath(&in[6][1], folder, "input-ex6-x2.txt");
	loadDoubleDistFromPath(&in[6][2], folder, "input-ex6-x3.txt");
	ex[6] = ex6(in[6][0], in[6][1], in[6][2]);
	printf("ex6 = %lf\n", ex[6]);

	loadDoubleDistFromPath(&in[7][0], folder, "input-ex7-x1.txt");
	loadDoubleDistFromPath(&in[7][1], folder, "input-ex7-x2.txt");
	loadDoubleDistFromPath(&in[7][2], folder, "input-ex7-x3.txt");
	loadDoubleDistFromPath(&in[7][3], folder, "input-ex7-x4.txt");
	loadDoubleDistFromPath(&in[7][4], folder, "input-ex7-x5.txt");
	loadDoubleDistFromPath(&in[7][5], folder, "input-ex7-x6.txt");
	ex[7] = ex7(in[7][0], in[7][1], in[7][2], in[7][3], in[7][4], in[7][5]);
	printf("ex7 = %lf\n", ex[7]);

	loadDoubleDistFromPath(&in[8][0], folder, "input-ex8-x1.txt");
	loadDoubleDistFromPath(&in[8][1], folder, "input-ex8-x2.txt");
	loadDoubleDistFromPath(&in[8][2], folder, "input-ex8-x3.txt");
	loadDoubleDistFromPath(&in[8][3], folder, "input-ex8-x4.txt");
	loadDoubleDistFromPath(&in[8][4], folder, "input-ex8-x5.txt");
	loadDoubleDistFromPath(&in[8][5], folder, "input-ex8-x6.txt");
	ex[8] = ex8(in[8][0], in[8][1], in[8][2], in[8][3], in[8][4], in[8][5]);
	printf("ex8 = %lf\n", ex[8]);

	loadDoubleDistFromPath(&in[9][0], folder, "input-ex9-x1.txt");
	loadDoubleDistFromPath(&in[9][1], folder, "input-ex9-x2.txt");
	loadDoubleDistFromPath(&in[9][2], folder, "input-ex9-x3.txt");
	loadDoubleDistFromPath(&in[9][3], folder, "input-ex9-x4.txt");
	ex[9] = ex9(in[9][0], in[9][1], in[9][2], in[9][3]);
	printf("ex9 = %lf\n", ex[9]);


	loadDoubleDistFromPath(&in[10][0], folder, "input-ex10-x1.txt");
	loadDoubleDistFromPath(&in[10][1], folder, "input-ex10-x2.txt");
	loadDoubleDistFromPath(&in[10][2], folder, "input-ex10-x3.txt");
	loadDoubleDistFromPath(&in[10][3], folder, "input-ex10-x4.txt");
	loadDoubleDistFromPath(&in[10][4], folder, "input-ex10-x5.txt");
	loadDoubleDistFromPath(&in[10][5], folder, "input-ex10-x6.txt");
	ex[10] = ex10(in[10][0], in[10][1], in[10][2], in[10][3], in[10][4], in[10][5]);
	printf("ex10 = %lf\n", ex[10]);

	return 0;
}

double
loadDoubleDistFromPath(double *  var, const char * folder, const char *  filename)
{
	const char * pathTemplate = "%s/%s";
	char *       pathFilled;
	size_t       needed = 0;

	FILE *		inp;
	int		sampleCount;
	double *	samples;
	double		returnValue;

	needed = snprintf(NULL, 0, pathTemplate, folder, filename) + 1;
	pathFilled = malloc(needed);
	if (pathFilled == NULL)
	{
		fprintf(stderr, "Error: could not allocate memory.\n");
		exit(EXIT_FAILURE);
	}
	snprintf(pathFilled, needed, pathTemplate, folder, filename);

	inp = fopen(pathFilled, "r");
	if (inp == NULL)
	{
		fprintf(stderr, "Error: could not open input file: %s\n", pathFilled);
		exit(EXIT_FAILURE);
	}

	if (fscanf(inp, "%d\n", &sampleCount) != 1)
	{
		fprintf(stderr, "Error: could not read number of samples at start of input file.\n");
		free(pathFilled);
		exit(EXIT_FAILURE);
	}

	printf("Number of samples from %s: %d\n", pathFilled, sampleCount);

	samples = calloc(sampleCount, sizeof(double));
	if (samples == NULL)
	{
		fprintf(stderr, "Error: could not allocate memory for samples.\n");
		free(pathFilled);
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < sampleCount; i++)
	{
		fscanf(inp, "%lf\n", &samples[i]);
	}

	if (var == NULL )
	{
		returnValue = libUncertainDoubleDistFromSamples(samples, sampleCount);
	}
	else
	{
		(*var) = libUncertainDoubleDistFromSamples(samples, sampleCount);
	}

	if (fclose(inp) != 0)
	{
		fprintf(stderr, "Warning: could not close input file.\n");
	}
	free(pathFilled);
	free(samples);

	return returnValue;
}


void
usage(void)
{
	fprintf(stderr, "Usage: <folder> (optional)\n");
}
