void restrict(float* U1h, float* U2h)
{
  int a=3, b=10;
  int c;

  U2h[0] = 0.25*U1h[-1] + 0.5*U1h[0] + 0.25*U1h[+1];

  c = a - b;
}
