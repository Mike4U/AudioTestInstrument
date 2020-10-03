/*

FIR filter designed with
http://t-filter.appspot.com

sampling frequency: 44117 Hz

fixed point precision: 16 bits

* 0 Hz - 1100 Hz
  gain = 1
  desired ripple = 0.05 dB
  actual ripple = n/a

* 1800 Hz - 22050 Hz
  gain = 0
  desired attenuation = -30 dB
  actual attenuation = n/a

*/

#define FIR_LP1100A_NUM 130

static int fir_lp1100A[FIR_LP1100A_NUM] = {
  -655,
  612,
  383,
  233,
  132,
  62,
  9,
  -34,
  -71,
  -105,
  -135,
  -161,
  -183,
  -199,
  -206,
  -204,
  -194,
  -170,
  -137,
  -94,
  -41,
  19,
  85,
  153,
  220,
  281,
  334,
  376,
  401,
  408,
  395,
  360,
  302,
  222,
  123,
  6,
  -123,
  -260,
  -398,
  -531,
  -652,
  -754,
  -828,
  -868,
  -868,
  -824,
  -730,
  -585,
  -389,
  -142,
  153,
  489,
  862,
  1262,
  1681,
  2106,
  2529,
  2936,
  3317,
  3660,
  3956,
  4196,
  4373,
  4481,
  4517,
  4481,
  4373,
  4196,
  3956,
  3660,
  3317,
  2936,
  2529,
  2106,
  1681,
  1262,
  862,
  489,
  153,
  -142,
  -389,
  -585,
  -730,
  -824,
  -868,
  -868,
  -828,
  -754,
  -652,
  -531,
  -398,
  -260,
  -123,
  6,
  123,
  222,
  302,
  360,
  395,
  408,
  401,
  376,
  334,
  281,
  220,
  153,
  85,
  19,
  -41,
  -94,
  -137,
  -170,
  -194,
  -204,
  -206,
  -199,
  -183,
  -161,
  -135,
  -105,
  -71,
  -34,
  9,
  62,
  132,
  233,
  383,
  612,
  -655,
   0};

