/* Example sample patterns appearing in Graphics Gems V
 ``Sampling Patterns Optimized for Uniform Distribution of Edges''
   Figures 3 and 4. */

typedef float sample[2];

sample foursamples[3][4]={
  {{0.274942f,  0.884325f},    {0.797099f,  0.207128f},
   {0.765063f,  0.715779f},    {0.122774f,  0.282759f}},

  {{0.152302f,  0.657716f},    {0.649413f,  0.907929f},
   {0.305133f,  0.221223f},    {0.784722f,  0.280605f}},

  {{0.775219f,  0.152203f},    {0.846312f,  0.737633f},
   {0.247618f,  0.777035f},    {0.228821f,  0.197385f}}};

sample sixteensamples[3][16]={
  {{0.755279f,  0.0497319f},   {0.384479f,  0.688268f},
   {0.666094f,  0.868388f},    {0.317172f,  0.0331764f},
   {0.729309f,  0.43103f},     {0.0867931f, 0.368519f},
   {0.322668f,  1.0f},         {0.442302f,  0.572752f},
   {0.889074f,  0.606985f},    {0.0343768f, 0.191404f},
   {0.910321f,  0.872547f},    {0.92479f,   0.345332f},
   {0.289126f,  0.389783f},    {0.896551f,  0.141167f},
   {0.23357f,   0.678942f},    {0.11281f,   0.526939f}},

  {{0.740161f,  0.0942363f},   {0.384479f,  0.688268f},
   {0.642662f,  0.884825f},    {0.324146f,  0.0213393f},
   {0.729309f,  0.43103f},     {0.0867931f, 0.368519f},
   {0.306925f,  0.995787f},    {0.442302f,  0.572752f},
   {0.889074f,  0.606985f},    {0.0343768f, 0.191404f},
   {0.910321f,  0.872547f},    {0.92479f,   0.345332f},
   {0.299325f,  0.371848f},    {0.896551f,  0.141167f},
   {0.226811f,  0.658172f},    {0.27796f,   0.873217f}},

  {{0.73534f,   0.316016f},    {0.755279f,  0.0497319f},
   {0.152649f,  0.442638f},    {0.917626f,  0.771549f},
   {0.0492709f, 0.836601f},    {0.0642901f, 0.155284f},
   {0.94238f,   0.458705f},    {0.392657f,  0.644079f},
   {0.626425f,  0.534164f},    {0.0918845f, 0.468493f},
   {0.372743f,  0.0552449f},   {0.217678f,  0.319869f},
   {0.460074f,  0.759592f},    {0.827202f,  0.875453f},
   {0.596844f,  0.352386f},    {0.387125f,  0.96096f}}};