#ifdef __CLING__
#pragma cling optimize(0)
#endif
void AmBeInitialNeutrons100s_isotropic()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Nov 19 11:55:16 2025) by ROOT version 6.36.04
  TCanvas *c1 = new TCanvas("c1", "c1", 0, 0, 2016, 1440);
  gStyle->SetOptFit(0);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(1);
  TColor::SetPalette(57, nullptr);
  c1->Range(-1.5,-344.6625,13.5,3101.963);
  c1->SetFillColor(0);
  c1->SetBorderMode(0);
  c1->SetBorderSize(2);
  c1->SetFrameBorderMode(0);
  c1->SetFrameBorderMode(0);

  TH1D *h1__1 = new TH1D("h1__1", "h1", 240, 0, 12);
  std::vector<Double_t> h1__1_vect0{
      0, 5, 6, 10, 10, 19, 36, 113, 236, 319,
      399, 450, 555, 568, 666, 715, 708, 766, 828, 858,
      892, 822, 838, 865, 759, 827, 780, 780, 751, 743,
      685, 661, 608, 528, 557, 598, 703, 810, 818, 836,
      907, 909, 885, 968, 969, 1097, 1028, 1064, 1060, 1056,
      1075, 1180, 1142, 1281, 1372, 1444, 1522, 1736, 1890, 1892,
      2036, 2229, 2226, 2300, 2472, 2572, 2533, 2519, 2603, 2626,
      2523, 2486, 2452, 2530, 2415, 2383, 2344, 2349, 2333, 2342,
      2268, 2275, 2302, 2181, 2163, 2176, 2226, 2182, 2109, 2109,
      2061, 2111, 2131, 2118, 2062, 2006, 2021, 1958, 1936, 1946,
      1807, 1819, 1837, 1686, 1657, 1533, 1542, 1530, 1461, 1391,
      1352, 1362, 1313, 1260, 1300, 1180, 1207, 1246, 1205, 1057,
      999, 914, 884, 789, 761, 799, 783, 711, 745, 831,
      828, 799, 828, 840, 912, 966, 965, 898, 964, 969,
      993, 967, 959, 955, 933, 964, 967, 998, 984, 920,
      910, 932, 975, 949, 931, 920, 874, 814, 795, 838,
      809, 886, 806, 813, 740, 701, 718, 660, 672, 674,
      653, 621, 624, 604, 602, 627, 630, 593, 587, 559,
      628, 561, 589, 560, 536, 526, 530, 507, 501, 466,
      481, 480, 440, 405, 365, 314, 340, 318, 303, 278,
      266, 231, 204, 218, 201, 152, 198, 152, 146, 119,
      114, 94, 96, 96, 62, 67, 50, 44, 26, 21,
      9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
  c1->SaveAs("AmBeInitialNeutrons100s_isotropic.pdf");
}
