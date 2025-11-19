#ifdef __CLING__
#pragma cling optimize(0)
#endif
void OverlapLine()
{
  Bool_t GeantOld = false;

  //SetUp scalings: use TMath::MaxElement(tg1->GetN(),tg1->GetY())
  Double_t ISO_Max = 0.038760000;
  Double_t Kluge_Max = 0.18818200;
  Double_t Marsh_Max = 0.20674400;
  Double_t GVDZ_Max = 16.820400;
  Double_t Sources_Max = 0.041285800;
  Double_t Geant4_max = 2237466;
  Double_t Geant4OLD_max = 9343248;
  Double_t NedisSerpent_Max = 39.55220031738281;
  Double_t MaxScaling = Geant4_max;

  Double_t ISO85291_SCALING = MaxScaling/ISO_Max;
  Double_t Kluge_Scaling = MaxScaling/Kluge_Max;
  Double_t Marsh_Scaling = MaxScaling/Marsh_Max;
  Double_t GVDZ_Scaling = MaxScaling/GVDZ_Max;
  Double_t Sources_Scaling = MaxScaling/Sources_Max;
  Double_t NedisSerpent_Scaling = MaxScaling/NedisSerpent_Max;

//=========Macro generated from canvas: c1/c1
//=========  (Tue Feb 25 16:22:02 2025) by ROOT version 6.34.04
  TCanvas *c1 = new TCanvas("c1", "c1",2560,0,2560,1440);
  c1->Range(-1.5,-1191198,13.5,1.072078e+07);
  c1->SetFillColor(0);
  c1->SetBorderMode(0);
  c1->SetBorderSize(2);
  c1->SetFrameBorderMode(0);
  c1->SetFrameBorderMode(0);

  //Geant4 OLD
  TH1F *Geant4__1 = new TH1F("Geant4__1","EmergingNeutrons",60,0,12);
  Geant4__1->SetBinContent(1,4872840);
  Geant4__1->SetBinContent(2,6054048);
  Geant4__1->SetBinContent(3,6484969);
  Geant4__1->SetBinContent(4,5778137);
  Geant4__1->SetBinContent(5,5750339);
  Geant4__1->SetBinContent(6,5318943);
  Geant4__1->SetBinContent(7,4937403);
  Geant4__1->SetBinContent(8,4537834);
  Geant4__1->SetBinContent(9,4644642);
  Geant4__1->SetBinContent(10,5422888);
  Geant4__1->SetBinContent(11,5646453);
  Geant4__1->SetBinContent(12,5617068);
  Geant4__1->SetBinContent(13,5852094);
  Geant4__1->SetBinContent(14,6379968);
  Geant4__1->SetBinContent(15,7254160);
  Geant4__1->SetBinContent(16,9030192);
  Geant4__1->SetBinContent(17,9343248);
  Geant4__1->SetBinContent(18,8236520);
  Geant4__1->SetBinContent(19,7551074);
  Geant4__1->SetBinContent(20,7096523);
  Geant4__1->SetBinContent(21,6828121);
  Geant4__1->SetBinContent(22,6627269);
  Geant4__1->SetBinContent(23,6692549);
  Geant4__1->SetBinContent(24,6776226);
  Geant4__1->SetBinContent(25,6718151);
  Geant4__1->SetBinContent(26,6033105);
  Geant4__1->SetBinContent(27,5631474);
  Geant4__1->SetBinContent(28,5402410);
  Geant4__1->SetBinContent(29,5543419);
  Geant4__1->SetBinContent(30,4876392);
  Geant4__1->SetBinContent(31,3754215);
  Geant4__1->SetBinContent(32,3092759);
  Geant4__1->SetBinContent(33,3460423);
  Geant4__1->SetBinContent(34,3464097);
  Geant4__1->SetBinContent(35,2887106);
  Geant4__1->SetBinContent(36,2693621);
  Geant4__1->SetBinContent(37,2746897);
  Geant4__1->SetBinContent(38,2920514);
  Geant4__1->SetBinContent(39,3019520);
  Geant4__1->SetBinContent(40,3008574);
  Geant4__1->SetBinContent(41,2855433);
  Geant4__1->SetBinContent(42,2514043);
  Geant4__1->SetBinContent(43,2073389);
  Geant4__1->SetBinContent(44,1738206);
  Geant4__1->SetBinContent(45,1472427);
  Geant4__1->SetBinContent(46,1291701);
  Geant4__1->SetBinContent(47,1218386);
  Geant4__1->SetBinContent(48,1222062);
  Geant4__1->SetBinContent(49,1286921);
  Geant4__1->SetBinContent(50,1294154);
  Geant4__1->SetBinContent(51,1172508);
  Geant4__1->SetBinContent(52,1004479);
  Geant4__1->SetBinContent(53,753059);
  Geant4__1->SetBinContent(54,448059);
  Geant4__1->SetBinContent(55,123214);
  Geant4__1->SetBinContent(56,105);
  Geant4__1->SetBinContent(57,90);
  Geant4__1->SetBinContent(58,81);
  Geant4__1->SetBinContent(59,64);
  Geant4__1->SetBinContent(60,61);
  Geant4__1->SetBinContent(61,288);
  Geant4__1->SetEntries(2.384549e+08);
  //Geant4__1->Rebin(2);
  Geant4__1->Scale(MaxScaling/Geant4OLD_max);

  Geant4__1->SetStats(0);
  //Geant4__1->SetFillColor(2);
  //Geant4__1->SetFillStyle(3003);
  Geant4__1->SetBit(TH1::kNoTitle);

  Geant4__1->SetLineColor(kViolet-3);
  Geant4__1->SetLineWidth(4);
  Geant4__1->SetLineStyle(1);

  Geant4__1->GetXaxis()->SetTitle("Neutron Energy (MeV)");
  Geant4__1->GetXaxis()->SetLabelFont(42);
  Geant4__1->GetXaxis()->SetLabelSize(0.045);
  Geant4__1->GetXaxis()->SetTitleOffset(1);
  Geant4__1->GetXaxis()->SetTitleFont(42);
  Geant4__1->GetXaxis()->SetTitleSize(0.045);

  Geant4__1->GetYaxis()->SetTitle("Relative Yield");
  Geant4__1->GetYaxis()->SetLabelFont(42);
  Geant4__1->GetYaxis()->SetLabelSize(0.045);
  Geant4__1->GetYaxis()->SetTitleOffset(1);
  Geant4__1->GetYaxis()->SetTitleFont(42);
  Geant4__1->GetYaxis()->SetTitleSize(0.045);

  Geant4__1->GetZaxis()->SetLabelFont(42);
  Geant4__1->GetZaxis()->SetTitleOffset(1);
  Geant4__1->GetZaxis()->SetTitleFont(42);
  if (GeantOld) Geant4__1->Draw("HIST");

  //Geant4 AmBe with Legendre 2025.10.14
  TH1D *Geant4 = new TH1D("Geant4", "histTitle", 480, 0, 24);
  std::vector<Double_t> Geant4_vect0{
    0, 1038906, 1064555, 1252137, 1204509, 1295217, 1310897, 1458103, 1438994, 1472326,
    1467391, 1450549, 1431722, 1179210, 1407758, 1472956, 1392543, 1336050, 1360292, 1330256,
    1278597, 1260458, 1213433, 1230590, 1200366, 1200011, 1160622, 1188054, 1162282, 1190685,
    1129521, 1129735, 1103634, 1104329, 1090013, 1122797, 1181281, 1295486, 1313252, 1356872,
    1367043, 1404351, 1415031, 1459634, 1457962, 1484855, 1453312, 1455131, 1420427, 1411814,
    1390620, 1409773, 1400045, 1439149, 1449593, 1430124, 1477180, 1541265, 1606138, 1710330,
    1784967, 1897106, 2014468, 2110752, 2164355, 2237466, 2225809, 2210699, 2112408, 2035792,
    1940468, 1898509, 1842567, 1810560, 1770985, 1752253, 1725908, 1715319, 1689975, 1685676,
    1677343, 1678697, 1665906, 1660112, 1659820, 1662139, 1634998, 1629982, 1631072, 1657008,
    1652101, 1662859, 1671634, 1692224, 1704986, 1724905, 1747846, 1775207, 1813232, 1859012,
    1873408, 1835707, 1794906, 1776025, 1745357, 1723026, 1686304, 1645585, 1609314, 1587433,
    1571534, 1576612, 1601452, 1610723, 1618090, 1602623, 1572790, 1531617, 1464611, 1374968,
    1289487, 1226732, 1164078, 1111060, 1054533, 993985, 924842, 841004, 765157, 763093,
    760883, 763732, 847646, 889490, 887055, 859154, 819467, 786080, 755995, 735237,
    720166, 713146, 704742, 694758, 681011, 668615, 661508, 665350, 674652, 691624,
    710332, 733295, 755049, 759568, 745446, 723245, 705439, 691549, 681669, 674942,
    663889, 652487, 638000, 623420, 605156, 583932, 566979, 545816, 526942, 509464,
    493022, 474728, 460297, 444522, 427079, 413235, 400067, 390036, 380148, 375412,
    375824, 379061, 380578, 384606, 393310, 404339, 412169, 412830, 412859, 411938,
    404462, 395998, 385470, 372065, 361569, 352744, 343399, 331602, 321475, 311393,
    301843, 294144, 288618, 280835, 274066, 280535, 290302, 289046, 273264, 244795,
    215135, 189095, 166841, 148130, 132433, 117283, 100261, 81889, 61576, 41509,
    21719, 6142, 58, 19, 18, 20, 19, 19, 16, 20,
    20, 19, 20, 14, 16, 8, 22, 10, 10, 13,
    8, 10, 11, 9, 9, 14, 8, 4, 7, 3,
    8, 9, 6, 4, 8, 5, 10, 6, 7, 5,
    3, 9, 3, 6, 3, 4, 3, 1, 3, 3,
    0, 5, 3, 2, 3, 4, 0, 2, 2, 4,
    3, 1, 2, 4, 1, 1, 2, 1, 1, 3,
    2, 4, 3, 2, 1, 0, 1, 4, 1, 2,
    0, 1, 0, 1, 1, 1, 0, 1, 2, 1,
    0, 0, 2, 1, 0, 0, 1, 0, 1, 0,
    0, 1, 0, 0, 0, 1, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 1, 2, 0,
    0, 0, 1, 0, 1, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0
  };
  for (Int_t bin = 0; bin < 482; bin++)
    if (Geant4_vect0[bin])
        Geant4->SetBinContent(bin, Geant4_vect0[bin]);
  Geant4->SetEntries(237866593);
  Geant4->SetDirectory(nullptr);

  Geant4->SetStats(0);
  //Geant4->SetFillColor(2);
  //Geant4->SetFillStyle(3003);
  Geant4->SetBit(TH1::kNoTitle);

  Geant4->SetLineColor(2);
  Geant4->SetLineWidth(4);
  Geant4->SetLineStyle(1);

  if (!GeantOld)
  {
    Geant4->GetXaxis()->SetTitle("Neutron Energy (MeV)");
    Geant4->GetXaxis()->SetLabelFont(42);
    Geant4->GetXaxis()->SetLabelSize(0.045);
    Geant4->GetXaxis()->SetTitleOffset(1);
    Geant4->GetXaxis()->SetTitleFont(42);
    Geant4->GetXaxis()->SetTitleSize(0.045);
    Geant4->GetXaxis()->SetRangeUser(0,12);

    Geant4->GetYaxis()->SetTitle("Relative Yield");
    Geant4->GetYaxis()->SetLabelFont(42);
    Geant4->GetYaxis()->SetLabelSize(0.045);
    Geant4->GetYaxis()->SetTitleOffset(1);
    Geant4->GetYaxis()->SetTitleFont(42);
    Geant4->GetYaxis()->SetTitleSize(0.045);

    Geant4->GetZaxis()->SetLabelFont(42);
    Geant4->GetZaxis()->SetTitleOffset(1);
    Geant4->GetZaxis()->SetTitleFont(42);

    Geant4->Draw("HIST");
  }
  else
  {
    Geant4->Draw("SAME");
  }


  //ISO8529-1:2021 TH1
  TH1F *ISO8529mI1__2 = new TH1F("ISO8529mI1__2","AmBe Neutrons",59,0,12);
  ISO8529mI1__2->SetBinContent(1,9605814);
  ISO8529mI1__2->SetBinContent(2,6671406);
  ISO8529mI1__2->SetBinContent(3,5997457);
  ISO8529mI1__2->SetBinContent(4,5459660);
  ISO8529mI1__2->SetBinContent(5,4411297);
  ISO8529mI1__2->SetBinContent(6,4186647);
  ISO8529mI1__2->SetBinContent(7,4266068);
  ISO8529mI1__2->SetBinContent(8,4041420);
  ISO8529mI1__2->SetBinContent(9,3755502);
  ISO8529mI1__2->SetBinContent(10,4738060);
  ISO8529mI1__2->SetBinContent(11,5402930);
  ISO8529mI1__2->SetBinContent(12,4944555);
  ISO8529mI1__2->SetBinContent(13,5303086);
  ISO8529mI1__2->SetBinContent(14,7009514);
  ISO8529mI1__2->SetBinContent(15,8795363);
  ISO8529mI1__2->SetBinContent(16,8509446);
  ISO8529mI1__2->SetBinContent(17,7324931);
  ISO8529mI1__2->SetBinContent(18,6798480);
  ISO8529mI1__2->SetBinContent(19,6426333);
  ISO8529mI1__2->SetBinContent(20,6346912);
  ISO8529mI1__2->SetBinContent(21,6469448);
  ISO8529mI1__2->SetBinContent(22,5725155);
  ISO8529mI1__2->SetBinContent(23,6680482);
  ISO8529mI1__2->SetBinContent(24,7163818);
  ISO8529mI1__2->SetBinContent(25,6966400);
  ISO8529mI1__2->SetBinContent(26,5872652);
  ISO8529mI1__2->SetBinContent(27,5609426);
  ISO8529mI1__2->SetBinContent(28,4822019);
  ISO8529mI1__2->SetBinContent(29,3825847);
  ISO8529mI1__2->SetBinContent(30,3546737);
  ISO8529mI1__2->SetBinContent(31,4327336);
  ISO8529mI1__2->SetBinContent(32,4132187);
  ISO8529mI1__2->SetBinContent(33,3719195);
  ISO8529mI1__2->SetBinContent(34,3224512);
  ISO8529mI1__2->SetBinContent(35,3201821);
  ISO8529mI1__2->SetBinContent(36,3766848);
  ISO8529mI1__2->SetBinContent(37,3830385);
  ISO8529mI1__2->SetBinContent(38,4204800);
  ISO8529mI1__2->SetBinContent(39,3585313);
  ISO8529mI1__2->SetBinContent(40,2548296);
  ISO8529mI1__2->SetBinContent(41,2350876);
  ISO8529mI1__2->SetBinContent(42,1405080);
  ISO8529mI1__2->SetBinContent(43,1104640);
  ISO8529mI1__2->SetBinContent(44,736577.6);
  ISO8529mI1__2->SetBinContent(45,791491.9);
  ISO8529mI1__2->SetBinContent(46,840506.3);
  ISO8529mI1__2->SetBinContent(47,1100782);
  ISO8529mI1__2->SetBinContent(48,1559384);
  ISO8529mI1__2->SetBinContent(49,1385792);
  ISO8529mI1__2->SetBinContent(50,1142762);
  ISO8529mI1__2->SetBinContent(51,717516.5);
  ISO8529mI1__2->SetBinContent(52,437272.1);
  ISO8529mI1__2->SetBinContent(53,127278.6);
  ISO8529mI1__2->SetEntries(71);
  //ISO8529mI1__2->SetFillColor(4);
  //ISO8529mI1__2->SetFillStyle(3003);

  ISO8529mI1__2->SetLineColor(1);
  ISO8529mI1__2->SetLineWidth(4);
  ISO8529mI1__2->SetLineStyle(1);
  ISO8529mI1__2->GetXaxis()->SetLabelFont(42);
  ISO8529mI1__2->GetXaxis()->SetLabelSize(0.04);
  ISO8529mI1__2->GetXaxis()->SetTitleSize(0.04);
  ISO8529mI1__2->GetXaxis()->SetTitleOffset(1);
  ISO8529mI1__2->GetXaxis()->SetTitleFont(42);
  ISO8529mI1__2->GetYaxis()->SetLabelFont(42);
  ISO8529mI1__2->GetYaxis()->SetLabelSize(0.04);
  ISO8529mI1__2->GetYaxis()->SetTitleSize(0.04);
  ISO8529mI1__2->GetYaxis()->SetTitleOffset(1.1);
  ISO8529mI1__2->GetYaxis()->SetTitleFont(42);
  ISO8529mI1__2->GetZaxis()->SetLabelFont(42);
  ISO8529mI1__2->GetZaxis()->SetLabelSize(0.04);
  ISO8529mI1__2->GetZaxis()->SetTitleSize(0.04);
  ISO8529mI1__2->GetZaxis()->SetTitleOffset(1);
  ISO8529mI1__2->GetZaxis()->SetTitleFont(42);
  //ISO8529mI1__2->Draw("SAMEHIST");

  //ISO8529-1:2021 Tgraph
  std::vector<Double_t> ISO85291_X{
    0, 4.223e-09, 1.334e-08, 4.212e-08, 1.33e-07, 4.201e-07, 1.327e-06, 4.19e-06, 1.323e-05, 4.179e-05,
    0.000132, 0.0004168, 0.001316, 0.004158, 0.01313, 0.04147, 0.1171, 0.3204, 0.5236, 0.7269,
    0.9302, 1.133, 1.337, 1.54, 1.743, 1.947, 2.15, 2.353, 2.556, 2.76,
    2.963, 3.166, 3.37, 3.573, 3.776, 3.979, 4.183, 4.386, 4.589, 4.793,
    4.996, 5.199, 5.402, 5.606, 5.809, 6.012, 6.215, 6.419, 6.622, 6.825,
    7.029, 7.232, 7.435, 7.638, 7.842, 8.045, 8.247999999999999, 8.452, 8.654999999999999, 8.858000000000001,
    9.061, 9.265000000000001, 9.468, 9.670999999999999, 9.875, 10.08, 10.28, 10.48, 10.69, 10.89,
    11
  };
  std::vector<Double_t> ISO85291_Y{
    0, 2.509e-07, 8.739e-07, 2.275e-06, 5.057e-06, 9.374999999999999e-06, 1.742e-05, 3.253e-05, 6.107e-05, 0.0001148,
    0.0002168, 0.0004128, 0.0008113, 0.001752, 0.004645, 0.01012, 0.02413, 0.0294, 0.02643, 0.02406,
    0.01944, 0.01845, 0.0188, 0.01781, 0.01655, 0.02088, 0.02381, 0.02179, 0.02337, 0.03089,
    0.03876, 0.0375, 0.03228, 0.02996, 0.02832, 0.02797, 0.02851, 0.02523, 0.02944, 0.03157,
    0.0307, 0.02588, 0.02472, 0.02125, 0.01686, 0.01563, 0.01907, 0.01821, 0.01639, 0.01421,
    0.01411, 0.0166, 0.01688, 0.01853, 0.0158, 0.01123, 0.01036, 0.006192, 0.004868, 0.003246,
    0.003488, 0.003704, 0.004851, 0.006872, 0.006107, 0.005036, 0.003162, 0.001927, 0.0005609, 0,
    0
  };
  for (int i=0;i<ISO85291_Y.size();i++) ISO85291_Y[i] *= ISO85291_SCALING;
  TGraph *ISO85291 = new TGraph(71, ISO85291_X.data(), ISO85291_Y.data());
  //ISO85291->SetName("Graph");
  //ISO85291->SetTitle("Sampling/AmBeISO85291.dat");
  ISO85291->SetFillStyle(1000);
  ISO85291->SetLineColor(1);
  ISO85291->SetLineWidth(4);
  ISO85291->SetLineStyle(1);


  TH1F *ISO85291_histogram = new TH1F("ISO8529-1", "ISO8529-1", 100, 0, 12.1);
  ISO85291_histogram->SetMinimum(0);
  ISO85291_histogram->SetMaximum(0.042636);
  ISO85291_histogram->SetDirectory(nullptr);
  ISO85291_histogram->SetStats(0);
  ISO85291_histogram->SetLineColor(TColor::GetColor("#000099"));
  ISO85291_histogram->GetXaxis()->SetLabelFont(42);
  ISO85291_histogram->GetXaxis()->SetTitleOffset(1);
  ISO85291_histogram->GetXaxis()->SetTitleFont(42);
  ISO85291_histogram->GetYaxis()->SetLabelFont(42);
  ISO85291_histogram->GetYaxis()->SetTitleFont(42);
  ISO85291_histogram->GetZaxis()->SetLabelFont(42);
  ISO85291_histogram->GetZaxis()->SetTitleOffset(1);
  ISO85291_histogram->GetZaxis()->SetTitleFont(42);
  ISO85291->SetHistogram(ISO85291_histogram);
  ISO85291->Draw("SAME LP");

  //Lorch
  TH1F *Lorch__3 = new TH1F("Lorch__3","AmBe Neutrons",60,0,12);
  Lorch__3->SetBinContent(13,7857440);
  Lorch__3->SetBinContent(14,8134125);
  Lorch__3->SetBinContent(15,8410779);
  Lorch__3->SetBinContent(16,8795363);
  Lorch__3->SetBinContent(17,8537185);
  Lorch__3->SetBinContent(18,8279007);
  Lorch__3->SetBinContent(19,7213828);
  Lorch__3->SetBinContent(20,6837192);
  Lorch__3->SetBinContent(21,6642343);
  Lorch__3->SetBinContent(22,6815804);
  Lorch__3->SetBinContent(23,6054412);
  Lorch__3->SetBinContent(24,6431960);
  Lorch__3->SetBinContent(25,6696906);
  Lorch__3->SetBinContent(26,6442238);
  Lorch__3->SetBinContent(27,6288448);
  Lorch__3->SetBinContent(28,5775727);
  Lorch__3->SetBinContent(29,4954546);
  Lorch__3->SetBinContent(30,4371462);
  Lorch__3->SetBinContent(31,4195388);
  Lorch__3->SetBinContent(32,4015789);
  Lorch__3->SetBinContent(33,4042622);
  Lorch__3->SetBinContent(34,4247732);
  Lorch__3->SetBinContent(35,4287486);
  Lorch__3->SetBinContent(36,4186465);
  Lorch__3->SetBinContent(37,4478384);
  Lorch__3->SetBinContent(38,4743330);
  Lorch__3->SetBinContent(39,4956655);
  Lorch__3->SetBinContent(40,4677357);
  Lorch__3->SetBinContent(41,3438607);
  Lorch__3->SetBinContent(42,2057933);
  Lorch__3->SetBinContent(43,1563987);
  Lorch__3->SetBinContent(44,1192041);
  Lorch__3->SetBinContent(45,1132064);
  Lorch__3->SetBinContent(46,1077974);
  Lorch__3->SetBinContent(47,1026228);
  Lorch__3->SetBinContent(48,949836.9);
  Lorch__3->SetBinContent(49,745607.9);
  Lorch__3->SetBinContent(50,550758.7);
  Lorch__3->SetBinContent(51,301960.4);
  Lorch__3->SetBinContent(52,80136.68);
  Lorch__3->SetEntries(80);
  //Lorch__3->SetFillColor(3);
  //Lorch__3->SetFillStyle(3003);

  Lorch__3->SetLineColor(6);
  Lorch__3->SetLineWidth(4);
  Lorch__3->SetLineStyle(1);
  Lorch__3->GetXaxis()->SetRange(1,61);
  Lorch__3->GetXaxis()->SetLabelFont(42);
  Lorch__3->GetXaxis()->SetTitleOffset(1);
  Lorch__3->GetXaxis()->SetTitleFont(42);
  Lorch__3->GetYaxis()->SetLabelFont(42);
  Lorch__3->GetYaxis()->SetTitleFont(42);
  Lorch__3->GetZaxis()->SetLabelFont(42);
  Lorch__3->GetZaxis()->SetTitleOffset(1);
  Lorch__3->GetZaxis()->SetTitleFont(42);
  //Lorch__3->Draw("SAMEHIST");

  //GVDZ TH1
  TH1F *GmIVDZ__4 = new TH1F("GmIVDZ__4","AmBe Neutrons",60,0,12);
  GmIVDZ__4->SetBinContent(0,1850788);
  GmIVDZ__4->SetBinContent(1,6679380);
  GmIVDZ__4->SetBinContent(2,6843202);
  GmIVDZ__4->SetBinContent(3,5292491);
  GmIVDZ__4->SetBinContent(4,4303874);
  GmIVDZ__4->SetBinContent(5,3832827);
  GmIVDZ__4->SetBinContent(6,3359950);
  GmIVDZ__4->SetBinContent(7,3138281);
  GmIVDZ__4->SetBinContent(8,2713387);
  GmIVDZ__4->SetBinContent(9,2351716);
  GmIVDZ__4->SetBinContent(10,3092672);
  GmIVDZ__4->SetBinContent(11,3684190);
  GmIVDZ__4->SetBinContent(12,3869085);
  GmIVDZ__4->SetBinContent(13,3743267);
  GmIVDZ__4->SetBinContent(14,4804602);
  GmIVDZ__4->SetBinContent(15,6832307);
  GmIVDZ__4->SetBinContent(16,9027751);
  GmIVDZ__4->SetBinContent(17,9075791);
  GmIVDZ__4->SetBinContent(18,8016144);
  GmIVDZ__4->SetBinContent(19,7460712);
  GmIVDZ__4->SetBinContent(20,7148940);
  GmIVDZ__4->SetBinContent(21,6956009);
  GmIVDZ__4->SetBinContent(22,6889726);
  GmIVDZ__4->SetBinContent(23,7040079);
  GmIVDZ__4->SetBinContent(24,7450304);
  GmIVDZ__4->SetBinContent(25,7999558);
  GmIVDZ__4->SetBinContent(26,7822040);
  GmIVDZ__4->SetBinContent(27,7139390);
  GmIVDZ__4->SetBinContent(28,6472638);
  GmIVDZ__4->SetBinContent(29,6091495);
  GmIVDZ__4->SetBinContent(30,5221032);
  GmIVDZ__4->SetBinContent(31,4153635);
  GmIVDZ__4->SetBinContent(32,4115604);
  GmIVDZ__4->SetBinContent(33,4189836);
  GmIVDZ__4->SetBinContent(34,3812296);
  GmIVDZ__4->SetBinContent(35,3195528);
  GmIVDZ__4->SetBinContent(36,3210598);
  GmIVDZ__4->SetBinContent(37,3577244);
  GmIVDZ__4->SetBinContent(38,4098475);
  GmIVDZ__4->SetBinContent(39,4312910);
  GmIVDZ__4->SetBinContent(40,4167332);
  GmIVDZ__4->SetBinContent(41,3717274);
  GmIVDZ__4->SetBinContent(42,2960391);
  GmIVDZ__4->SetBinContent(43,2144259);
  GmIVDZ__4->SetBinContent(44,1429725);
  GmIVDZ__4->SetBinContent(45,1000227);
  GmIVDZ__4->SetBinContent(46,929482.9);
  GmIVDZ__4->SetBinContent(47,1204310);
  GmIVDZ__4->SetBinContent(48,1678445);
  GmIVDZ__4->SetBinContent(49,1897741);
  GmIVDZ__4->SetBinContent(50,1765431);
  GmIVDZ__4->SetBinContent(51,1526748);
  GmIVDZ__4->SetBinContent(52,1291782);
  GmIVDZ__4->SetBinContent(53,905777.6);
  GmIVDZ__4->SetBinContent(54,519744.1);
  GmIVDZ__4->SetBinContent(55,223156);
  GmIVDZ__4->SetBinContent(56,18014.9);
  GmIVDZ__4->SetEntries(111);
  //GmIVDZ__4->SetFillColor(6);
  //GmIVDZ__4->SetFillStyle(3002);

  GmIVDZ__4->SetLineColor(kOrange-3);
  GmIVDZ__4->SetLineWidth(4);
  GmIVDZ__4->SetLineStyle(1);
  GmIVDZ__4->GetXaxis()->SetRange(1,61);
  GmIVDZ__4->GetXaxis()->SetLabelFont(42);
  GmIVDZ__4->GetXaxis()->SetTitleOffset(1);
  GmIVDZ__4->GetXaxis()->SetTitleFont(42);
  GmIVDZ__4->GetYaxis()->SetLabelFont(42);
  GmIVDZ__4->GetYaxis()->SetTitleFont(42);
  GmIVDZ__4->GetZaxis()->SetLabelFont(42);
  GmIVDZ__4->GetZaxis()->SetTitleOffset(1);
  GmIVDZ__4->GetZaxis()->SetTitleFont(42);
  //GmIVDZ__4->Draw("SAMEHIST");

  //GVDZ Tgraph
  std::vector<Double_t> GVDZ_X{
    0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9,
    1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9,
    2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9,
    3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9,
    4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
    5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9,
    6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9,
    7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9,
    8, 8.1, 8.199999999999999, 8.300000000000001, 8.4, 8.5, 8.6, 8.699999999999999, 8.800000000000001, 8.9,
    9, 9.1, 9.199999999999999, 9.300000000000001, 9.4, 9.5, 9.6, 9.699999999999999, 9.800000000000001, 9.9,
    10, 10.1, 10.2, 10.3, 10.4, 10.5, 10.6, 10.7, 10.8, 10.9,
    11
  };
  std::vector<Double_t> GVDZ_Y{
    6.4724, 11.9634, 12.461, 12.0857, 11.1995, 9.0357, 8.085599999999999, 7.4975, 7.0902, 6.747,
    6.2226, 5.8578, 5.6529, 5.4906, 5.2007, 4.6869, 4.1945, 3.9149, 4.7538, 5.4853,
    5.9084, 6.4595, 6.7973, 6.7629, 6.5898, 6.4806, 6.84, 8.6152, 9.666399999999999, 11.8143,
    13.3341, 16.8204, 15.8811, 14.718, 14.0233, 13.4139, 13.0279, 12.6952, 12.469, 12.3387,
    12.1658, 12.0778, 12.0323, 12.0937, 12.3359, 12.6208, 12.98, 13.5097, 14.1669, 14.1431,
    13.7253, 13.1479, 12.538, 11.7796, 11.3406, 10.9442, 10.6858, 10.1829, 9.211399999999999, 7.8568,
    7.1621, 7.021, 7.178, 7.2924, 7.3536, 7.1594, 6.5924, 5.9829, 5.5865, 5.4559,
    5.6131, 5.7914, 6.1721, 6.7335, 7.1461, 7.4095, 7.5241, 7.4895, 7.2738, 7.0049,
    6.5232, 5.9031, 5.1979, 4.482, 3.7979, 3.1033, 2.4194, 1.9695, 1.7219, 1.5916,
    1.5569, 1.6714, 2.084, 2.5496, 2.973, 3.2044, 3.3083, 3.2417, 3.0474, 2.8533,
    2.6695, 2.5071, 2.3022, 1.9163, 1.6155, 1.219, 0.8863, 0.6176, 0.4339, 0.1757,
    0.0027
  };
  for (int i=0;i<GVDZ_Y.size();i++) GVDZ_Y[i] *= GVDZ_Scaling;

  TGraph *GVDZ = new TGraph(111, GVDZ_X.data(), GVDZ_Y.data());
  GVDZ->SetFillStyle(1000);
  GVDZ->SetLineColor(kOrange-3);
  GVDZ->SetLineWidth(4);
  GVDZ->SetLineStyle(1);

  TH1F *GVDZ_histogram = new TH1F("GVDZ", "GVDZ", 111, 0, 12.1);
  GVDZ_histogram->SetMinimum(0.00243);
  GVDZ_histogram->SetMaximum(18.50217);
  GVDZ_histogram->SetDirectory(nullptr);
  GVDZ_histogram->SetStats(0);
  GVDZ_histogram->SetLineColor(TColor::GetColor("#000099"));
  GVDZ_histogram->GetXaxis()->SetLabelFont(42);
  GVDZ_histogram->GetXaxis()->SetTitleOffset(1);
  GVDZ_histogram->GetXaxis()->SetTitleFont(42);
  GVDZ_histogram->GetYaxis()->SetLabelFont(42);
  GVDZ_histogram->GetYaxis()->SetTitleFont(42);
  GVDZ_histogram->GetZaxis()->SetLabelFont(42);
  GVDZ_histogram->GetZaxis()->SetTitleOffset(1);
  GVDZ_histogram->GetZaxis()->SetTitleFont(42);
  GVDZ->SetHistogram(GVDZ_histogram);

  GVDZ->Draw("SAME LP");


  //Kluge
  std::vector<Double_t> Kluge_X{
    0.10321, 0.15792, 0.21177, 0.27297, 0.32213, 0.37093, 0.42538, 0.48192, 0.53331, 0.58744,
    0.64132, 0.69443, 0.74418, 0.8043, 0.85742, 0.9079199999999999, 0.96219, 1.01354, 1.07055, 1.12624,
    1.17751, 1.22569, 1.28499, 1.33756, 1.3924, 1.44251, 1.49892, 1.55384, 1.60233, 1.65996,
    1.71509, 1.76568, 1.8251, 1.8755, 1.92758, 1.98485, 2.03352, 2.08617, 2.14438, 2.19673,
    2.25076, 2.30386, 2.35926, 2.41182, 2.46772, 2.51887, 2.57571, 2.62965, 2.67937, 2.73572,
    2.79091, 2.84425, 2.89834, 2.96021, 3.00891, 3.06191, 3.1138, 3.16793, 3.224, 3.27445,
    3.32846, 3.38483, 3.43471, 3.48446, 3.53562, 3.59823, 3.64739, 3.698, 3.75697, 3.80764,
    3.86215, 3.9155, 3.96775, 4.02395, 4.07347, 4.13043, 4.1848, 4.24208, 4.2949, 4.34799,
    4.40341, 4.45765, 4.50628, 4.56235, 4.61581, 4.67036, 4.72246, 4.77522, 4.83233, 4.88277,
    4.93879, 4.98596, 5.04699, 5.09614, 5.15019, 5.20398, 5.26183, 5.31468, 5.36593, 5.41618,
    5.47297, 5.5254, 5.57915, 5.63771, 5.6893, 5.74022, 5.79782, 5.84684, 5.90279, 5.95165,
    6.00731, 6.06091, 6.11495, 6.16681, 6.22074, 6.27278, 6.32847, 6.38501, 6.44047, 6.4918,
    6.54452, 6.59629, 6.64973, 6.70504, 6.76237, 6.81494, 6.86922, 6.91924, 6.97482, 7.03173,
    7.08199, 7.13789, 7.18986, 7.24064, 7.29625, 7.34848, 7.4041, 7.45572, 7.50935, 7.56209,
    7.61727, 7.67159, 7.72273, 7.77725, 7.83466, 7.88047, 7.93715, 7.98987, 8.046279999999999, 8.10209,
    8.157389999999999, 8.21264, 8.267300000000001, 8.31579, 8.369630000000001, 8.427009999999999, 8.48232, 8.53731, 8.59243, 8.641030000000001,
    8.692, 8.748290000000001, 8.798389999999999, 8.85507, 8.90512, 8.96518, 9.018330000000001, 9.06559, 9.12416, 9.178280000000001,
    9.232480000000001, 9.28449, 9.340870000000001, 9.394259999999999, 9.43623, 9.5031, 9.554180000000001, 9.60773, 9.66245, 9.71299,
    9.766579999999999, 9.82652, 9.876749999999999, 9.931419999999999, 9.97856, 10.03222, 10.08733, 10.13585, 10.19662, 10.24589,
    10.30153, 10.35711, 10.41026, 10.46163, 10.51476, 10.5699, 10.6244, 10.67619, 10.73172, 10.7885,
    10.84333, 10.88928, 10.9493, 11.00149
  };
  std::vector<Double_t> Kluge_Y{
    0.149553, 0.147424, 0.15201, 0.153839, 0.158617, 0.16018, 0.147693, 0.14331, 0.136602, 0.132843,
    0.137237, 0.135324, 0.123171, 0.121187, 0.113112, 0.107314, 0.102404, 0.102194, 0.100234, 0.102637,
    0.09684, 0.09099400000000001, 0.08937, 0.085658, 0.08856600000000001, 0.085837, 0.082486, 0.08479399999999999, 0.08254499999999999, 0.08187999999999999,
    0.088648, 0.094504, 0.098108, 0.09923999999999999, 0.105528, 0.107717, 0.104125, 0.099718, 0.09444900000000001, 0.098603,
    0.107961, 0.100005, 0.0985, 0.101072, 0.101701, 0.10926, 0.114854, 0.112557, 0.11297, 0.128587,
    0.122526, 0.143562, 0.146278, 0.155085, 0.188182, 0.181042, 0.182702, 0.185129, 0.172114, 0.160538,
    0.157762, 0.167072, 0.153792, 0.153942, 0.155218, 0.152059, 0.144511, 0.144013, 0.138863, 0.144,
    0.131081, 0.12737, 0.126129, 0.130595, 0.132614, 0.131014, 0.125336, 0.139754, 0.134053, 0.138543,
    0.136846, 0.138362, 0.147384, 0.146719, 0.148283, 0.141191, 0.147383, 0.154439, 0.145572, 0.146393,
    0.146159, 0.154341, 0.1637, 0.143922, 0.14081, 0.139761, 0.131134, 0.131356, 0.125798, 0.128129,
    0.115546, 0.106799, 0.112176, 0.104149, 0.101972, 0.105215, 0.098603, 0.09832, 0.092427, 0.081138,
    0.08371000000000001, 0.077984, 0.07496899999999999, 0.083055, 0.080807, 0.087503, 0.089811, 0.09775399999999999, 0.09576999999999999, 0.08953999999999999,
    0.09084100000000001, 0.087297, 0.088934, 0.088196, 0.077531, 0.079983, 0.074977, 0.079203, 0.076211, 0.075114,
    0.071187, 0.078003, 0.079064, 0.077223, 0.086317, 0.079176, 0.082036, 0.079667, 0.086076, 0.08713700000000001,
    0.087406, 0.08827500000000001, 0.089695, 0.08905399999999999, 0.090091, 0.078322, 0.07895099999999999, 0.074041, 0.070714, 0.07211099999999999,
    0.07137300000000001, 0.06488099999999999, 0.050762, 0.048537, 0.04708, 0.042243, 0.03527, 0.03084, 0.031517, 0.028429,
    0.018891, 0.022685, 0.020029, 0.020754, 0.018506, 0.017049, 0.014873, 0.016221, 0.014213, 0.016712,
    0.018564, 0.019241, 0.022293, 0.024409, 0.024557, 0.02466, 0.026512, 0.027333, 0.025085, 0.031301,
    0.031762, 0.025126, 0.027649, 0.025737, 0.021929, 0.021887, 0.022684, 0.020171, 0.019243, 0.017042,
    0.019781, 0.016862, 0.014685, 0.014331, 0.012298, 0.01288, 0.01231, 0.008623, 0.006111, 0.005997,
    0.002789, 0.002219, 0.001122, 0.000408
  };
  for (int i=0;i<Kluge_Y.size();i++) Kluge_Y[i] *= Kluge_Scaling;

  TGraph *Kluge = new TGraph(204, Kluge_X.data(), Kluge_Y.data());
  //Kluge->SetName("Graph");
  //Kluge->SetTitle("Kluge/Kluge1982-Fig3.dat");
  Kluge->SetFillStyle(1000);
  Kluge->SetLineColor(kViolet-3);
  Kluge->SetLineWidth(4);
  Kluge->SetLineStyle(1);

  TH1F *Kluge_histogram = new TH1F("Kluge1982", "Kluge1982", 204, 0, 12.091318);
  Kluge_histogram->SetMinimum(0.0003672);
  //Kluge->SetMaximum(0.2069594);
  Kluge_histogram->SetDirectory(nullptr);
  Kluge_histogram->SetStats(0);
  Kluge_histogram->GetXaxis()->SetLabelFont(42);
  Kluge_histogram->GetXaxis()->SetTitleOffset(1);
  Kluge_histogram->GetXaxis()->SetTitleFont(42);
  Kluge_histogram->GetYaxis()->SetLabelFont(42);
  Kluge_histogram->GetYaxis()->SetTitleFont(42);
  Kluge_histogram->GetZaxis()->SetLabelFont(42);
  Kluge_histogram->GetZaxis()->SetTitleOffset(1);
  Kluge_histogram->GetZaxis()->SetTitleFont(42);
  Kluge->SetHistogram(Kluge_histogram);
  Kluge->Draw("SAME LP");


  //Marsh
  std::vector<Double_t> Marsh_X{
    0.11431, 0.17089, 0.30191, 0.37301, 0.44616, 0.51139, 0.5751500000000001, 0.65847, 0.71744, 0.7886,
    0.8636200000000001, 0.92841, 0.99378, 1.06612, 1.12885, 1.1988, 1.26793, 1.33542, 1.40272, 1.47396,
    1.5513, 1.61928, 1.68287, 1.74969, 1.8161, 1.87837, 1.95035, 2.01695, 2.0784, 2.22618,
    2.36381, 2.43329, 2.51263, 2.57172, 2.64867, 2.76987, 2.83794, 2.90916, 2.96457, 3.03109,
    3.10283, 3.17339, 3.24791, 3.31583, 3.38751, 3.45358, 3.526, 3.60021, 3.65492, 3.73817,
    3.80832, 3.87707, 3.93473, 4.01293, 4.07634, 4.15296, 4.20154, 4.27927, 4.36147, 4.4275,
    4.4859, 4.56261, 4.6264, 4.68811, 4.76667, 4.8209, 4.88244, 4.96081, 5.02028, 5.05126,
    5.10958, 5.18091, 5.25044, 5.32582, 5.3752, 5.4614, 5.5393, 5.59981, 5.66833, 5.74514,
    5.81798, 5.8895, 5.96998, 6.03154, 6.09581, 6.15633, 6.22643, 6.29833, 6.35922, 6.4286,
    6.50455, 6.57333, 6.63705, 6.70083, 6.78403, 6.85666, 6.93479, 6.98812, 7.07553, 7.11751,
    7.1899, 7.26383, 7.32919, 7.39593, 7.46744, 7.52954, 7.60517, 7.6725, 7.73141, 7.82617,
    7.87826, 7.94958, 8.0421, 8.10872, 8.181950000000001, 8.248200000000001, 8.326689999999999, 8.390359999999999, 8.478389999999999, 8.54936,
    8.6244, 8.69018, 8.76093, 8.832090000000001, 8.91051, 8.9808, 9.05053, 9.11534, 9.182119999999999, 9.260719999999999,
    9.33653, 9.38611, 9.465920000000001, 9.52613, 9.601710000000001, 9.65743, 9.74028, 9.799480000000001, 9.87833, 9.94333,
    10.02055, 10.0886, 10.15704, 10.23721, 10.31048, 10.37071, 10.45993, 10.5345, 10.58978, 10.67021,
    10.74122, 10.80932
  };
  std::vector<Double_t> Marsh_Y{
    0.103209, 0.06518500000000001, 0.139128, 0.135213, 0.12331, 0.137817, 0.127342, 0.117081, 0.133942, 0.119563,
    0.116515, 0.082816, 0.103375, 0.098805, 0.09700499999999999, 0.09467, 0.085151, 0.099689, 0.086442, 0.097911,
    0.101034, 0.08581900000000001, 0.08699999999999999, 0.068179, 0.089394, 0.095494, 0.124642, 0.09470000000000001, 0.100889, 0.129045,
    0.104639, 0.12994, 0.09916700000000001, 0.136629, 0.110178, 0.160179, 0.157307, 0.181267, 0.193655, 0.206404,
    0.203682, 0.206744, 0.169083, 0.189256, 0.155469, 0.16157, 0.170386, 0.151834, 0.150628, 0.148774,
    0.13994, 0.151706, 0.152707, 0.155681, 0.12699, 0.13214, 0.150757, 0.159575, 0.118666, 0.133115,
    0.14452, 0.146421, 0.147334, 0.165627, 0.147345, 0.173804, 0.173643, 0.178466, 0.162444, 0.148054,
    0.133612, 0.144961, 0.138005, 0.118888, 0.158224, 0.117019, 0.102762, 0.116463, 0.114009, 0.108516,
    0.109491, 0.066582, 0.06955699999999999, 0.081828, 0.086229, 0.106161, 0.109848, 0.087182, 0.104521, 0.098817,
    0.09034300000000001, 0.0813, 0.094764, 0.08634500000000001, 0.07832, 0.07750700000000001, 0.071239, 0.081272, 0.049845, 0.098272,
    0.085325, 0.082723, 0.100182, 0.09185400000000001, 0.08323, 0.095799, 0.08982900000000001, 0.095244, 0.114252, 0.06547699999999999,
    0.09397, 0.08462, 0.061265, 0.053772, 0.054225, 0.060968, 0.0516, 0.050755, 0.033559, 0.026649,
    0.022671, 0.028738, 0.026054, 0.021492, 0.01419, 0.017366, 0.016072, 0.017593, 0.02165, 0.00755,
    0.016906, 0.032734, 0.022879, 0.026765, 0.02859, 0.043856, 0.023297, 0.042958, 0.02852, 0.032408,
    0.03459, 0.027098, 0.031494, 0.017555, 0.011703, 0.026314, 0.007974999999999999, 0.006059, 0.016554, 0.006099,
    0.001782, 0.004067
  };
  for (int i=0;i<Marsh_Y.size();i++) Marsh_Y[i] *= Marsh_Scaling;
  TGraph *Marsh = new TGraph(152, Marsh_X.data(), Marsh_Y.data());
  //Marsh->SetName("Graph");
  //Marsh->SetTitle("Marsh/Marsh1995-Fig5.dat");#
  Marsh->SetFillStyle(1000);
  Marsh->SetLineColor(kBlue-3);
  Marsh->SetLineWidth(4);
  Marsh->SetLineStyle(1);


  TH1F *Marsh_histogram = new TH1F("Marsh_histogram", "Marsh/Marsh1995-Fig5.dat", 152, 0, 11.878821);
  Marsh_histogram->SetMinimum(0.0016038);
  Marsh_histogram->SetMaximum(0.2272402);
  Marsh_histogram->SetDirectory(nullptr);
  Marsh_histogram->SetStats(0);
  Marsh_histogram->SetLineColor(TColor::GetColor("#000099"));
  Marsh_histogram->GetXaxis()->SetLabelFont(42);
  Marsh_histogram->GetXaxis()->SetTitleOffset(1);
  Marsh_histogram->GetXaxis()->SetTitleFont(42);
  Marsh_histogram->GetYaxis()->SetLabelFont(42);
  Marsh_histogram->GetYaxis()->SetTitleFont(42);
  Marsh_histogram->GetZaxis()->SetLabelFont(42);
  Marsh_histogram->GetZaxis()->SetTitleOffset(1);
  Marsh_histogram->GetZaxis()->SetTitleFont(42);
  Marsh->SetHistogram(Marsh_histogram);

  Marsh->Draw("SAME LP");


  //Sources 5A
  std::vector<Double_t> Sources_X{
    0.18271, 0.40831, 0.58041, 0.78498, 1.00497, 1.20868, 1.42177, 1.60814, 1.78613, 2.01414,
    2.19445, 2.37481, 2.60982, 2.79223, 3.01415, 3.19655, 3.38857, 3.60979, 3.80078, 3.98826,
    4.20715, 4.3981, 4.58323, 4.80446, 4.99198, 5.21916, 5.39744, 5.58609, 5.81083, 5.99842,
    6.18363, 6.40829, 6.59699, 6.77986, 7.00529, 7.1919, 7.42102, 7.60396, 7.79801, 8.016109999999999,
    8.20093, 8.38391, 8.60751, 8.796010000000001, 9.01591, 9.206250000000001, 9.38552, 9.61748, 9.79771, 9.990410000000001,
    10.20921, 10.39723, 10.58643, 10.80412, 10.9906, 11.21611
  };
  std::vector<Double_t> Sources_Y{
    0.0231325, 0.0272634, 0.030678, 0.0137571, 0.0139475, 0.013551, 0.0120341, 0.0095721, 0.0114164, 0.014023,
    0.0160503, 0.0173002, 0.0194723, 0.0260499, 0.0338622, 0.0404551, 0.0412858, 0.0400204, 0.0382596, 0.0365902,
    0.0355992, 0.0343415, 0.033381, 0.0319098, 0.0296764, 0.0257738, 0.0222143, 0.0204153, 0.0187002, 0.0150492,
    0.0125719, 0.0123736, 0.0143018, 0.015318, 0.0153179, 0.015342, 0.0153781, 0.0150634, 0.0143131, 0.0130426,
    0.012014, 0.0108645, 0.0104166, 0.009896200000000001, 0.009424200000000001, 0.0089643, 0.008192899999999999, 0.0066924, 0.0052404, 0.0038398,
    0.0028054, 0.0021003, 0.0010788, 0.0006137, 0, 0
  };
  for (int i=0;i<Sources_Y.size();i++) Sources_Y[i] *= Sources_Scaling;

  TGraph *Sources = new TGraph(56, Sources_X.data(), Sources_Y.data());
  Sources->SetFillStyle(1000);
  Sources->SetLineColor(kYellow-3);
  Sources->SetLineWidth(4);
  Sources->SetLineStyle(1);

  TH1F *Sources_histogram3 = new TH1F("Sources_histogram3", "Sources5A/Sources5A.dat", 100, 0, 12.31945);
  Sources_histogram3->SetMinimum(0);
  Sources_histogram3->SetMaximum(0.04541438);
  Sources_histogram3->SetDirectory(nullptr);
  Sources_histogram3->SetStats(0);
  Sources_histogram3->SetLineColor(TColor::GetColor("#000099"));
  Sources_histogram3->GetXaxis()->SetLabelFont(42);
  Sources_histogram3->GetXaxis()->SetTitleOffset(1);
  Sources_histogram3->GetXaxis()->SetTitleFont(42);
  Sources_histogram3->GetYaxis()->SetLabelFont(42);
  Sources_histogram3->GetYaxis()->SetTitleFont(42);
  Sources_histogram3->GetZaxis()->SetLabelFont(42);
  Sources_histogram3->GetZaxis()->SetTitleOffset(1);
  Sources_histogram3->GetZaxis()->SetTitleFont(42);
  Sources->SetHistogram(Sources_histogram3);

  Sources->Draw("SAME LP");


  //NedisSerpent
  TH1F *NedisSerpent = new TH1F("NedisSerpent", "NedisSeprent", 120, 0, 12);
  std::vector<Double_t> NedisSerpent_vect0{
    0, 0, 19.82500076293945, 19.81319999694824, 20.36669921875, 21.25209999084473, 22.80949974060059, 23.75679969787598, 22.69330024719238, 20.49930000305176,
    17.40270042419434, 15.76000022888184, 14.73209953308105, 13.86359977722168, 12.65139961242676, 11.32219982147217, 9.869099617004395, 9.216799736022949, 10.2012996673584, 13.08749961853027,
    14.72369956970215, 15.61750030517578, 16.49440002441406, 16.91580009460449, 17.04179954528809, 16.92040061950684, 16.92280006408691, 18.48789978027344, 20.25539970397949, 23.22050094604492,
    28.31139945983887, 33.81340026855469, 38.24530029296875, 39.55220031738281, 36.48690032958984, 33.9567985534668, 32.29109954833984, 31.27020072937012, 30.40139961242676, 29.72610092163086,
    29.28689956665039, 29.06139945983887, 28.77409934997559, 28.6161994934082, 28.63260078430176, 28.74460029602051, 29.05349922180176, 29.72229957580566, 30.72850036621094, 31.90920066833496,
    32.93239974975586, 32.17259979248047, 31.84029960632324, 31.2548999786377, 30.27020072937012, 28.82430076599121, 27.96330070495605, 28.62470054626465, 27.87319946289062, 25.53429985046387,
    22.56110000610352, 19.57740020751953, 17.90810012817383, 16.82699966430664, 15.60060024261475, 16.36190032958984, 16.51729965209961, 15.63459968566895, 13.95479965209961, 12.28190040588379,
    11.62600040435791, 11.50870037078857, 12.06799983978271, 12.86470031738281, 13.93080043792725, 15.26599979400635, 16.28240013122559, 16.90200042724609, 17.23870086669922, 17.23259925842285,
    16.91160011291504, 16.24740028381348, 14.80710029602051, 12.73130035400391, 10.71730041503906, 9.187100410461426, 7.780499935150146, 6.548299789428711, 5.344200134277344, 4.410099983215332,
    3.779700040817261, 3.407999992370605, 3.587599992752075, 4.003300189971924, 4.885900020599365, 5.740300178527832, 6.391300201416016, 6.518400192260742, 6.751800060272217, 6.772500038146973,
    6.609099864959717, 6.523600101470947, 6.190100193023682, 5.60860013961792, 4.956200122833252, 4.239999771118164, 3.559200048446655, 2.970700025558472, 2.226099967956543, 1.353999972343445,
    0.5174000263214111, 0.01379999984055758, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0
  };
  for (int i=0;i<NedisSerpent_vect0.size();i++) NedisSerpent_vect0[i] *= NedisSerpent_Scaling;
  for (Int_t bin = 0; bin < 122; bin++)
    if (NedisSerpent_vect0[bin])
      NedisSerpent->SetBinContent(bin, NedisSerpent_vect0[bin]);
  std::vector<Double_t> NedisSerpent_vect1{
    0, 0, 19.825, 19.8132, 20.3667, 21.2521, 22.8095, 23.7568, 22.6933, 20.4993,
    17.4027, 15.76, 14.7321, 13.8636, 12.6514, 11.3222, 9.8691, 9.216799999999999, 10.2013, 13.0875,
    14.7237, 15.6175, 16.4944, 16.9158, 17.0418, 16.9204, 16.9228, 18.4879, 20.2554, 23.2205,
    28.3114, 33.8134, 38.2453, 39.5522, 36.4869, 33.9568, 32.2911, 31.2702, 30.4014, 29.7261,
    29.2869, 29.0614, 28.7741, 28.6162, 28.6326, 28.7446, 29.0535, 29.7223, 30.7285, 31.9092,
    32.9324, 32.1726, 31.8403, 31.2549, 30.2702, 28.8243, 27.9633, 28.6247, 27.8732, 25.5343,
    22.5611, 19.5774, 17.9081, 16.827, 15.6006, 16.3619, 16.5173, 15.6346, 13.9548, 12.2819,
    11.626, 11.5087, 12.068, 12.8647, 13.9308, 15.266, 16.2824, 16.902, 17.2387, 17.2326,
    16.9116, 16.2474, 14.8071, 12.7313, 10.7173, 9.187099999999999, 7.7805, 6.5483, 5.3442, 4.4101,
    3.7797, 3.408, 3.5876, 4.0033, 4.8859, 5.7403, 6.3913, 6.5184, 6.7518, 6.7725,
    6.6091, 6.5236, 6.1901, 5.6086, 4.9562, 4.24, 3.5592, 2.9707, 2.2261, 1.354,
    0.5174, 0.0138, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0
  };
  /*
  for (Int_t bin = 0; bin < 122; bin++)
    if (NedisSerpent_vect1[bin])
        NedisSerpent->SetBinError(bin, NedisSerpent_vect1[bin]);
  //*/
  NedisSerpent->SetEntries(110);

  NedisSerpent->SetStats(0);
  NedisSerpent->SetBit(TH1::kNoTitle);

  NedisSerpent->SetLineColor(kTeal-1);
  NedisSerpent->SetLineWidth(4);
  NedisSerpent->SetLineStyle(1);

  NedisSerpent->Draw("HIST SAME");

  //Add Legend
  TLegend *legend = new TLegend(0.9,0.55,0.62,0.9);
  //legend->SetHeader("Header","C");// option "C" allows to center the header
  if (GeantOld) legend->AddEntry(Geant4__1,"Geant4 OLD (this work)","l");
  legend->AddEntry(Geant4,"Geant4 (this work - sim)","l");
  //legend->AddEntry(Lorch__3,"Lorch 1973","l");
  legend->AddEntry(Kluge,"Kluge 1982","l");
  legend->AddEntry(Marsh,"Marsh 1995","l");
  legend->AddEntry(Sources,"Sources 5A (sim)","l");
  legend->AddEntry(GmIVDZ__4,"G-VDZ 1975","l");
  legend->AddEntry(ISO85291,"ISO8529-1:2021","l");
  legend->AddEntry(NedisSerpent,"Nedis-Serpent (sim)","l");
  legend->SetTextSize(0.04);
  legend->Draw();

  c1->Modified();
  c1->SetSelected(c1);
  c1->SaveAs("OverlapLine.png");
}
