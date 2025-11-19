#ifdef __CLING__
#pragma cling optimize(0)
#endif
void AmBeInitialNeutrons100s_anisotropic()
{
  //=========Macro generated from canvas: c1/c1
  //=========  (Wed Nov 19 11:50:07 2025) by ROOT version 6.36.04
  TCanvas *c1 = new TCanvas("c1", "c1", 0, 0, 2016, 1440);
  gStyle->SetOptFit(0);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(1);
  TColor::SetPalette(57, nullptr);
  c1->Range(-1.5,-331.8,13.5,2986.2);
  c1->SetFillColor(0);
  c1->SetBorderMode(0);
  c1->SetBorderSize(2);
  c1->SetFrameBorderMode(0);
  c1->SetFrameBorderMode(0);

  TH1D *h1__1 = new TH1D("h1__1", "h1", 240, 0, 12);
  std::vector<Double_t> h1__1_vect0{
      0, 1, 2, 5, 6, 13, 50, 103, 137, 246,
      281, 409, 488, 589, 619, 667, 709, 761, 703, 744,
      777, 713, 705, 764, 732, 685, 702, 750, 690, 691,
      659, 676, 624, 601, 607, 630, 733, 842, 925, 982,
      1053, 1113, 1152, 1211, 1199, 1236, 1167, 1176, 1135, 1149,
      1203, 1226, 1178, 1268, 1367, 1433, 1455, 1583, 1700, 1816,
      1961, 2048, 2185, 2369, 2404, 2463, 2528, 2428, 2278, 2207,
      2103, 2117, 2055, 2012, 2013, 1893, 1928, 1811, 1893, 1870,
      1820, 1756, 1875, 1776, 1779, 1803, 1751, 1817, 1753, 1801,
      1839, 1798, 1798, 1881, 1802, 1956, 1992, 1998, 2045, 2134,
      2240, 2142, 2045, 2009, 2088, 1939, 1943, 1818, 1827, 1812,
      1818, 1760, 1868, 1856, 1918, 1871, 1905, 1831, 1689, 1566,
      1507, 1368, 1312, 1290, 1162, 1072, 979, 916, 836, 852,
      818, 888, 991, 1029, 1056, 1027, 991, 935, 885, 836,
      847, 819, 788, 760, 779, 775, 757, 753, 800, 793,
      823, 889, 876, 893, 900, 809, 754, 874, 796, 787,
      796, 723, 748, 721, 747, 701, 680, 611, 615, 621,
      585, 593, 550, 533, 536, 452, 455, 452, 406, 412,
      384, 456, 419, 457, 478, 442, 475, 511, 521, 455,
      465, 443, 454, 440, 434, 387, 409, 387, 401, 344,
      336, 359, 329, 296, 311, 315, 335, 365, 332, 265,
      291, 217, 180, 177, 147, 148, 118, 100, 69, 33,
      30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0
  };
  for (Int_t bin = 0; bin < 242; bin++)
      if (h1__1_vect0[bin])
        h1__1->SetBinContent(bin, h1__1_vect0[bin]);
  h1__1->SetEntries(227000);

  h1__1->SetStats(0);
  h1__1->SetBit(TH1::kNoTitle);

  h1__1->SetLineColor(2);
  h1__1->SetLineWidth(2);

  h1__1->GetXaxis()->SetRangeUser(0,12);
  h1__1->GetXaxis()->SetTitle("Neutron Energy (MeV)");
  h1__1->GetXaxis()->SetTitleSize(0.045);
  h1__1->GetXaxis()->SetTitleOffset(1);
  h1__1->GetXaxis()->SetTitleFont(42);
  h1__1->GetXaxis()->SetLabelSize(0.045);
  h1__1->GetXaxis()->SetLabelFont(42);

  h1__1->GetYaxis()->SetTitle("Arbitrary Units/50 keV");///1 MeV");
  h1__1->GetYaxis()->SetTitleSize(0.045);
  h1__1->GetYaxis()->SetTitleOffset(1.1);
  h1__1->GetYaxis()->SetTitleFont(42);
  h1__1->GetYaxis()->SetLabelSize(0.045);
  h1__1->GetYaxis()->SetLabelFont(42);

  h1__1->GetZaxis()->SetLabelFont(42);
  h1__1->GetZaxis()->SetTitleOffset(1);
  h1__1->GetZaxis()->SetTitleFont(42);
  h1__1->Draw("HIST");

  c1->Modified();
  c1->SetSelected(c1);
  c1->SaveAs("AmBeInitialNeutrons100s_anisotropic.pdf");
}
