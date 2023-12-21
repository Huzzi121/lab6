
#ifndef MODE_H
#define MODE_H

typedef enum {
  AVERAGE,
  LIGHTNESS,
  LUMINOSITY
} Mode;

typedef enum{
  NO_ERROR,
  INVALID_INPUT
}ErrorCode;

#endif /* MODE_H */

/**
 * Returns the maximum value among the three given values
 */
int max(int a, int b, int c);

/**
 * Returns the minimum value among the three given values
 */
int min(int a, int b, int c);

/**
 * TODO: add documentation here=returns the minimum value among the three given values
 */
ErrorCode toGrayScale(int *r, int *g, int *b, Mode mode);//there was a error here with int so i added errorcode which was taken from the enum above.


/**
 * TODO: add documentation here
 */
ErrorCode toSepia(int *r, int *g, int *b);//idhar bhi error aa raha tha

