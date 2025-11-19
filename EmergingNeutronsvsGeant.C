#ifdef __CLING__
#pragma cling optimize(0)
#endif
void EmergingNeutronsvsGeant()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Apr  3 15:13:30 2025) by ROOT version 6.34.06
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,2560,1440);
   c1->Range(-1.5,-1226301,13.5,1.103671e+07);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
     TH1D *Geant4__1 = new TH1D("Geant4__1", "histTitle", 480, 0, 24);
   std::vector<Double_t> Geant4__1_vect1{
      0, 1033718, 1057532, 1245035, 1197800, 1290289, 1306246, 1453920, 1434260, 1469222,
      1466516, 1447532, 1429398, 1178900, 1405403, 1470899, 1394565, 1332688, 1357489, 1327616,
      1274443, 1256501, 1215862, 1226463, 1200937, 1199226, 1160145, 1186078, 1159868, 1190534,
      1127871, 1127813, 1103728, 1101903, 1087959, 1119981, 1180328, 1292477, 1312817, 1356184,
      1365800, 1403392, 1413430, 1458872, 1457211, 1483431, 1452877, 1456231, 1420340, 1413277,
      1386621, 1409692, 1399788, 1440301, 1447113, 1427932, 1477731, 1542647, 1604663, 1709681,
      1786244, 1893290, 2016095, 2109171, 2164231, 2235315, 2226113, 2212036, 2111900, 2037193,
      1941866, 1898764, 1845057, 1810486, 1773565, 1756782, 1724406, 1715053, 1694483, 1684638,
      1677291, 1678330, 1664867, 1663475, 1656602, 1665370, 1635739, 1633171, 1632856, 1658531,
      1651675, 1665341, 1672858, 1692294, 1706684, 1727039, 1750752, 1775590, 1810707, 1861573,
      1873480, 1836724, 1796886, 1777070, 1744537, 1722479, 1687262, 1642654, 1610239, 1587580,
      1572454, 1575441, 1600993, 1611404, 1620614, 1604596, 1574751, 1532826, 1466157, 1375928,
      1290738, 1228168, 1166418, 1113442, 1053886, 995743, 926099, 841188, 765738, 762857,
      758452, 763580, 848977, 889300, 888746, 855323, 822825, 786941, 755715, 736227,
      720708, 711558, 703865, 696281, 679834, 667378, 663025, 664499, 676112, 691866,
      711505, 734621, 755229, 759050, 746273, 724699, 707770, 692805, 680619, 675752,
      663250, 651845, 637185, 622061, 604834, 584635, 565730, 543891, 527076, 509926,
      491945, 477185, 460614, 444718, 427788, 413674, 399804, 389676, 380302, 376209,
      375899, 378392, 382309, 385122, 392882, 405430, 411852, 412603, 411620, 411650,
      404379, 396896, 387578, 372550, 362613, 352702, 342751, 331347, 320875, 310909,
      302043, 295008, 288521, 281127, 274178, 280879, 290958, 289157, 272782, 244537,
      215468, 190561, 167281, 148385, 132296, 116585, 99946, 81358, 61579, 41508,
      21843, 6250, 48, 26, 22, 20, 19, 20, 20, 11,
      14, 24, 19, 9, 15, 14, 17, 13, 8, 12,
      8, 7, 14, 13, 9, 12, 10, 8, 5, 6,
      8, 5, 9, 8, 6, 9, 5, 3, 2, 3,
      8, 4, 1, 5, 4, 2, 2, 2, 8, 0,
      4, 2, 1, 3, 4, 4, 3, 1, 3, 2,
      2, 3, 1, 3, 3, 0, 2, 4, 3, 2,
      2, 3, 2, 0, 1, 2, 1, 2, 0, 1,
      1, 1, 3, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 1, 0, 0, 0, 1, 0, 2, 1,
      1, 1, 1, 0, 1, 0, 1, 0, 0, 0,
      0, 2, 0, 1, 0, 1, 0, 0, 0, 0,
      0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
      1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0
   };
   for (Int_t bin = 0; bin < 482; bin++)
      if (Geant4__1_vect1[bin])
         Geant4__1->SetBinContent(bin, Geant4__1_vect1[bin]);
   Geant4__1->SetEntries(237822059);
   Geant4__1->SetDirectory(nullptr);


   Geant4__1->SetStats(0);
   Geant4__1->SetBit(TH1::kNoTitle);

   Geant4__1->SetLineColor(2);
   Geant4__1->SetLineWidth(3);

   Geant4__1->GetXaxis()->SetTitle("Neutron Energy (MeV)");
   Geant4__1->GetXaxis()->SetTitleSize(0.045);
   Geant4__1->GetXaxis()->SetRangeUser(0,12);
   Geant4__1->GetXaxis()->SetLabelFont(42);
   Geant4__1->GetXaxis()->SetTitleOffset(1);
   Geant4__1->GetXaxis()->SetTitleFont(42);

   Geant4__1->GetYaxis()->SetTitle("Arbitrary Units");///1 MeV");
   Geant4__1->GetYaxis()->SetTitleSize(0.045);
   Geant4__1->GetYaxis()->SetTitleOffset(1);
   Geant4__1->GetYaxis()->SetLabelFont(42);
   Geant4__1->GetYaxis()->SetTitleFont(42);

   Geant4__1->GetZaxis()->SetLabelFont(42);
   Geant4__1->GetZaxis()->SetTitleOffset(1);
   Geant4__1->GetZaxis()->SetTitleFont(42);
   Geant4__1->Draw("HIST");

   TH1D *_6__1 = new TH1D("Emerging Neutrons","Geant4 NeutronSource example",60,0,12);
   _6__1->SetBinContent(1,1252);
   _6__1->SetBinContent(2,1189);
   _6__1->SetBinContent(3,669);
   _6__1->SetBinContent(4,505);
   _6__1->SetBinContent(5,496);
   _6__1->SetBinContent(6,447);
   _6__1->SetBinContent(7,363);
   _6__1->SetBinContent(8,318);
   _6__1->SetBinContent(9,297);
   _6__1->SetBinContent(10,438);
   _6__1->SetBinContent(11,448);
   _6__1->SetBinContent(12,453);
   _6__1->SetBinContent(13,569);
   _6__1->SetBinContent(14,616);
   _6__1->SetBinContent(15,702);
   _6__1->SetBinContent(16,760);
   _6__1->SetBinContent(17,640);
   _6__1->SetBinContent(18,609);
   _6__1->SetBinContent(19,640);
   _6__1->SetBinContent(20,606);
   _6__1->SetBinContent(21,573);
   _6__1->SetBinContent(22,604);
   _6__1->SetBinContent(23,574);
   _6__1->SetBinContent(24,423);
   _6__1->SetBinContent(25,332);
   _6__1->SetBinContent(26,292);
   _6__1->SetBinContent(27,396);
   _6__1->SetBinContent(28,468);
   _6__1->SetBinContent(29,595);
   _6__1->SetBinContent(30,661);
   _6__1->SetBinContent(31,648);
   _6__1->SetBinContent(32,793);
   _6__1->SetBinContent(33,805);
   _6__1->SetBinContent(34,873);
   _6__1->SetBinContent(35,833);
   _6__1->SetBinContent(36,816);
   _6__1->SetBinContent(37,754);
   _6__1->SetBinContent(38,770);
   _6__1->SetBinContent(39,655);
   _6__1->SetBinContent(40,638);
   _6__1->SetBinContent(41,551);
   _6__1->SetBinContent(42,415);
   _6__1->SetBinContent(43,350);
   _6__1->SetBinContent(44,322);
   _6__1->SetBinContent(45,318);
   _6__1->SetBinContent(46,249);
   _6__1->SetBinContent(47,211);
   _6__1->SetBinContent(48,217);
   _6__1->SetBinContent(49,175);
   _6__1->SetBinContent(50,111);
   _6__1->SetBinContent(51,80);
   _6__1->SetBinContent(52,63);
   _6__1->SetBinContent(53,45);
   _6__1->SetBinContent(54,23);
   _6__1->SetBinContent(55,5);
   _6__1->SetEntries(27655);

   _6__1->SetStats(0);
   _6__1->SetBit(TH1::kNoTitle);

   _6__1->Scale(Geant4__1->Integral()/_6__1->Integral()/4);

   _6__1->SetLineColor(4);
   _6__1->SetLineWidth(3);

   _6__1->GetXaxis()->SetTitle("Neutron Energy (MeV)");
   _6__1->GetXaxis()->SetTitleSize(0.045);
   _6__1->GetXaxis()->SetLabelSize(0.04);
   _6__1->GetXaxis()->SetTitleSize(0.04);
   _6__1->GetXaxis()->SetTitleOffset(0.9);

   _6__1->GetYaxis()->SetTitle("Arbitrary Units/200 keV");
   _6__1->GetYaxis()->SetTitleSize(0.05);
   _6__1->GetYaxis()->SetLabelSize(0.04);
   _6__1->GetYaxis()->SetTitleSize(0.04);
   _6__1->GetYaxis()->SetTitleOffset(1);

   _6__1->GetZaxis()->SetLabelSize(0.04);
   _6__1->GetZaxis()->SetTitleSize(0.04);
   _6__1->GetZaxis()->SetTitleOffset(1);
   _6__1->Draw("HIST SAME");

   //Add Legend
   //TLegend *legend = new TLegend(0.9,0.75,0.68,0.9);
   TLegend *legend = new TLegend(0.9,0.75,0.66,0.9);
   legend->AddEntry(Geant4__1, "This work","l");
   legend->AddEntry(_6__1, "NeutronSource Example","l");
   //legend->SetTextSize(0.0165);
   legend->SetTextSize(0.03);
   legend->Draw();

   c1->Modified();
   c1->SetSelected(c1);
   c1->SaveAs("EmergingNeutronsvsGeant.pdf");
}
