/*
 *	From the FPTaylor project <https://github.com/soarlab/FPTaylor>,
 *	all `*.txt` files in the directory `benchmarks/real2float/`.
 *	Note that the many are duplicates of benchmarks from Rosa,
 *	and those are not represented here (see rosa.fpcore instead).
 */

/*
 *	:name "logexp"
 *	:cite (solovyev-et-al-2015)
 *	:precision binary64
 *	:pre (<= -8 x 8)
 */
double ex0(double x);

/*
 *	:name "sphere"
 *	:cite (solovyev-et-al-2015)
 *	:precision binary64
 *	:pre (and (<= -10 x 10) (<= 0 r 10)
 *	          (<= -1.570796 lat 1.570796) (<= -3.14159265 lon 3.14159265))
 */
double ex1(double x, double r, double lat, double lon);

/*
 *	:name "azimuth"
 *	:cite (solovyev-et-al-2015)
 *	:precision binary64
 *	:pre (and (<= 0 lat1 0.4) (<= 0.5 lat2 1)
 *	          (<= 0 lon1 3.14159265) (<= -3.14159265 lon2 -0.5))
 */
double ex2(double lat1, double lat2, double lon1, double lon2);

/*
 *	The remainder are not used in solovyev-et-al-2015, but are present
 *	in the repository. The _fp variants use mixed real/float
 *	operations, so are skipped.
 */

/*
 *	:name "floudas1"
 *	:precision binary64
 *	:pre (and (<= 0 x1 6) (<= 0 x2 6) (<= 1 x3 5)
 *	          (<= 0 x4 6) (<= 0 x5 6) (<= 0 x6 10)
 *	          (>= (- (+ (* (- x3 3) (- x3 3)) x4) 4) 0)
 *	          (>= (- (+ (* (- x5 3) (- x5 3)) x6) 4) 0)
 *	          (>= (+ (- 2 x1) (* 3 x2)) 0)
 *	          (>= (- (+ 2 x1) x2) 0)
 *	          (>= (- (- 6 x1) x2) 0)
 *	          (>= (- (+ x1 x2) 2) 0))
 */
double ex3(double x1, double x2, double x3, double x4, double x5, double x6);

/*
 *	:name "floudas2"
 *	:precision binary64
 *	:pre (and (<= 0 x1 3) (<= 0 x2 4)
 *	          (>= (- (+ (- (* 2 (* (* x1 x1) (* x1 x1))) (* (* 8 (* x1 x1)) x1)) (* (* 8 x1) x1)) x2) 0)
 *	          (>= (- (+ (- (+ (- (* 4 (* (* x1 x1) (* x1 x1))) (* (* 32 (* x1 x1)) x1)) (* (* 88 x1) x1)) (* 96 x1)) 36) x2) 0))
 */
double ex4(double x1, double x2);

/*
 *	:name "floudas3"
 *	:precision binary64
 *	:pre (and (<= 0 x1 2) (<= 0 x2 3) (>= (+ (* -2 (* (* x1 x1) (* x1 x1))) 2) x2))
 */
double ex5(double x1, double x2);

/*
 *	:name "hartman3"
 *	:precision binary64
 *	:pre (and (<= 0 x1 1) (<= 0 x2 1) (<= 0 x3 1))
 */
double ex6(double x1, double x2, double x3);

/*
 *	:name "hartman6"
 *	:precision binary64
 *	:pre (and (<= 0 x1 1) (<= 0 x2 1) (<= 0 x3 1) (<= 0 x4 1) (<= 0 x5 1) (<= 0 x6 1))
 */
double ex7(double x1, double x2, double x3, double x4, double x5, double x6);

/*
 *	:name "kepler0"
 *	:precision binary64
 *	:pre (and (<= 4 x1 6.36) (<= 4 x2 6.36) (<= 4 x3 6.36) (<= 4 x4 6.36) (<= 4 x5 6.36) (<= 4 x6 6.36))
 */
double ex8(double x1, double x2, double x3, double x4, double x5, double x6);

/*
 *	:name "kepler1"
 *	:precision binary64
 *	:pre (and (<= 4 x1 6.36) (<= 4 x2 6.36) (<= 4 x3 6.36) (<= 4 x4 6.36))
 */
double ex9(double x1, double x2, double x3, double x4);

/*
 *	:name "kepler2"
 *	:precision binary64
 *	:pre (and (<= 4 x1 6.36) (<= 4 x2 6.36) (<= 4 x3 6.36)
 *	          (<= 4 x4 6.36) (<= 4 x5 6.36) (<= 4 x6 6.36))
 */
double ex10(double x1, double x2, double x3, double x4, double x5, double x6);

