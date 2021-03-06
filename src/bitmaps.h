/***************************************************************************
 *                              RasMol 2.7.5                               *
 *                                                                         *
 *                                 RasMol                                  *
 *                 Molecular Graphics Visualisation Tool                   *
 *                              13 June 2009                               *
 *                                                                         *
 *                   Based on RasMol 2.6 by Roger Sayle                    *
 * Biomolecular Structures Group, Glaxo Wellcome Research & Development,   *
 *                      Stevenage, Hertfordshire, UK                       *
 *         Version 2.6, August 1995, Version 2.6.4, December 1998          *
 *                   Copyright (C) Roger Sayle 1992-1999                   *
 *                                                                         *
 *                          and Based on Mods by                           *
 *Author             Version, Date             Copyright                   *
 *Arne Mueller       RasMol 2.6x1   May 98     (C) Arne Mueller 1998       *
 *Gary Grossman and  RasMol 2.5-ucb Nov 95     (C) UC Regents/ModularCHEM  *
 *Marco Molinaro     RasMol 2.6-ucb Nov 96         Consortium 1995, 1996   *
 *                                                                         *
 *Philippe Valadon   RasTop 1.3     Aug 00     (C) Philippe Valadon 2000   *
 *                                                                         *
 *Herbert J.         RasMol 2.7.0   Mar 99     (C) Herbert J. Bernstein    * 
 *Bernstein          RasMol 2.7.1   Jun 99         1998-2008               *
 *                   RasMol 2.7.1.1 Jan 01                                 *
 *                   RasMol 2.7.2   Aug 00                                 *
 *                   RasMol 2.7.2.1 Apr 01                                 *
 *                   RasMol 2.7.2.1.1 Jan 04                               *
 *                   RasMol 2.7.3   Feb 05                                 *
 *                   RasMol 2.7.3.1 Apr 06                                 *
 *                   RasMol 2.7.4   Nov 07                                 *
 *                   RasMol 2.7.4.1 Jan 08                                 *
 *                   RasMol 2.7.4.2 Mar 08                                 *
 *                   RasMol 2.7.5   May 09                                 *
 *                                                                         *
 * RasMol 2.7.5 incorporates changes by T. Ikonen, G. McQuillan, N. Darakev*
 * and L. Andrews (via the neartree package).  Work on RasMol 2.7.5        *
 * supported in part by grant 1R15GM078077-01 from the National Institute  *
 * of General Medical Sciences (NIGMS), U.S. National Institutes of Health *
 * and by grant ER63601-1021466-0009501 from the Office of Biological &    *
 * Environmental Research (BER), Office of Science, U. S. Department of    *
 * Energy.  RasMol 2.7.4 incorporated  changes by G. Todorov, Nan Jia,     *
 * N. Darakev, P. Kamburov, G. McQuillan, and J. Jemilawon. Work on RasMol *
 * 2.7.4 supported in part by grant 1R15GM078077-01 from the NIGMS/NIH and *
 * grant ER63601-1021466-0009501 from BER/DOE.  RasMol 2.7.3 incorporates  *
 * changes by Clarice Chigbo, Ricky Chachra, and Mamoru Yamanishi.  Work   *
 * on RasMol 2.7.3 supported in part by grants DBI-0203064, DBI-0315281    *
 * and EF-0312612 from the U.S. National Science Foundation and grant      *
 * DE-FG02-03ER63601 from BER/DOE. The content is solely the responsibility*
 * of the authors and does not necessarily represent the official views of *
 * the funding organizations.                                              *
 *                                                                         *
 * The code for use of RasMol under GTK in RasMol 2.7.4.2 and 2.7.5 was    *
 * written by Teemu Ikonen.                                                *
 *                                                                         *
 *                    and Incorporating Translations by                    *
 *  Author                               Item                     Language *
 *  Isabel Servan Martinez,                                                *
 *  Jose Miguel Fernandez Fernandez      2.6   Manual             Spanish  *
 *  Jose Miguel Fernandez Fernandez      2.7.1 Manual             Spanish  *
 *  Fernando Gabriel Ranea               2.7.1 menus and messages Spanish  *
 *  Jean-Pierre Demailly                 2.7.1 menus and messages French   *
 *  Giuseppe Martini, Giovanni Paolella, 2.7.1 menus and messages          *
 *  A. Davassi, M. Masullo, C. Liotto    2.7.1 help file          Italian  *
 *  G. Pozhvanov                         2.7.3 menus and messages Russian  *
 *  G. Todorov                           2.7.3 menus and messages Bulgarian*
 *  Nan Jia, G. Todorov                  2.7.3 menus and messages Chinese  *
 *  Mamoru Yamanishi, Katajima Hajime    2.7.3 menus and messages Japanese *
 *                                                                         *
 *                             This Release by                             *
 * Herbert J. Bernstein, Bernstein + Sons, 5 Brewster Ln, Bellport, NY, USA*
 *                       yaya@bernstein-plus-sons.com                      *
 *               Copyright(C) Herbert J. Bernstein 1998-2008               *
 *                                                                         *
 *                READ THE FILE NOTICE FOR RASMOL LICENSES                 *
 *Please read the file NOTICE for important notices which apply to this    *
 *package and for license terms (GPL or RASLIC).                           *
 ***************************************************************************/
#define icon_width 48
#define icon_height 48
static unsigned char icon_bits[] = {
 0x00,0x00,0xf0,0x03,0x00,0x00,0x00,0x00,0x08,0x1c,0x00,0x00,0x00,0x00,0x26,
 0x21,0x00,0x00,0x00,0x00,0x13,0x10,0x00,0x00,0x00,0x80,0x0a,0xc0,0x00,0x00,
 0x00,0xc0,0x00,0x00,0x01,0x00,0x00,0xc0,0x0a,0x00,0x01,0x00,0x00,0x80,0x09,
 0x00,0x01,0x00,0x00,0xe0,0x0d,0x40,0x02,0x00,0x00,0xa0,0x02,0x00,0x04,0x00,
 0x00,0x60,0x0d,0x80,0x03,0x00,0x00,0xb0,0x00,0x00,0x04,0x00,0x00,0xe0,0x09,
 0x80,0x04,0x00,0x00,0xe0,0x02,0x00,0x02,0x00,0x00,0xe0,0x8a,0x40,0x01,0x00,
 0x00,0xe0,0x5e,0x45,0x03,0x00,0x00,0xc0,0x25,0x50,0x01,0x00,0x00,0x80,0xa7,
 0x92,0x02,0x00,0x00,0xc0,0xa7,0xa8,0x00,0x00,0x00,0x80,0xe3,0x8a,0x01,0x00,
 0x00,0x80,0x11,0xf3,0x00,0x00,0x00,0x00,0xa9,0x29,0x00,0x00,0x00,0x80,0x79,
 0xbf,0x00,0x00,0x00,0xed,0xfc,0x3f,0xaa,0x00,0x80,0xf6,0x47,0x30,0x4e,0x01,
 0x60,0xc1,0x03,0x60,0x6c,0x07,0x50,0x00,0x02,0x40,0x28,0x08,0xb8,0x80,0x00,
 0xe0,0x04,0x15,0x3c,0x00,0x06,0xf0,0x08,0x20,0x26,0x00,0x08,0xf0,0x09,0x68,
 0x56,0x00,0x14,0xf0,0x05,0x60,0x2e,0x00,0x04,0x78,0x07,0x40,0x4a,0x00,0x90,
 0x78,0x00,0x80,0x17,0xc0,0xff,0x3d,0x01,0x80,0x5f,0x80,0x00,0x7a,0x00,0xa0,
 0x3f,0x41,0x00,0x68,0x01,0xc0,0xaf,0xc5,0xbf,0x3d,0x01,0x80,0x37,0x80,0xff,
 0x5f,0x04,0xa0,0xd7,0x12,0x1e,0xb8,0x01,0x88,0x7e,0x80,0x10,0x70,0x28,0x61,
 0x76,0x03,0x0c,0xf0,0x27,0x69,0x6c,0xef,0x0e,0xf0,0xaa,0x12,0xfc,0xb6,0x05,
 0xe0,0xbb,0x2b,0x78,0x6b,0x05,0xe0,0xcb,0x2c,0xe8,0x6a,0x03,0xc0,0xdb,0x0e,
 0xe0,0xd7,0x01,0x00,0xaf,0x0e,0xc0,0x7f,0x00,0x00,0xfe,0x03,0x00,0x1f,0x00,
 0x00,0xfc,0x00};

static unsigned char UpArrow[] = { 
                          0xff, 0xff, 0x01, 0x80, 0x81, 0x80, 0xc1, 0x81,
                          0xe1, 0x83, 0xf1, 0x87, 0xf9, 0x8f, 0xfd, 0x9f,
                          0xff, 0xbf, 0xf1, 0x87, 0xf1, 0x87, 0xf1, 0x87,
                          0xf1, 0x87, 0x01, 0x80, 0x01, 0x80, 0xff, 0xff };

static unsigned char DnArrow[] = { 
                          0xff, 0xff, 0x01, 0x80, 0x01, 0x80, 0xf1, 0x87,
                          0xf1, 0x87, 0xf1, 0x87, 0xf1, 0x87, 0xff, 0xbf,
                          0xfd, 0x9f, 0xf9, 0x8f, 0xf1, 0x87, 0xe1, 0x83,
                          0xc1, 0x81, 0x81, 0x80, 0x01, 0x80, 0xff, 0xff };

static unsigned char LfArrow[] = { 
                          0xff, 0xff, 0x01, 0x81, 0x81, 0x81, 0xc1, 0x81,
                          0xe1, 0x9f, 0xf1, 0x9f, 0xf9, 0x9f, 0xfd, 0x9f,
                          0xf9, 0x9f, 0xf1, 0x9f, 0xe1, 0x9f, 0xc1, 0x81,
                          0x81, 0x81, 0x01, 0x81, 0x01, 0x80, 0xff, 0xff };

static unsigned char RgArrow[] = { 
                          0xff, 0xff, 0x81, 0x80, 0x81, 0x81, 0x81, 0x83,
                          0xf9, 0x87, 0xf9, 0x8f, 0xf9, 0x9f, 0xf9, 0xbf,
                          0xf9, 0x9f, 0xf9, 0x8f, 0xf9, 0x87, 0x81, 0x83,
                          0x81, 0x81, 0x81, 0x80, 0x01, 0x80, 0xff, 0xff };

static unsigned char ScrlTile[] = { 0x11, 0x00, 0x44, 0x00, 
                                    0x11, 0x00, 0x44, 0x00 };

static unsigned char HGlassData[] = {
   0x00, 0x00, 0xfc, 0x3f, 0x04, 0x20, 0x04, 0x20, 0x88, 0x18, 0xf0, 0x0b,
   0xe0, 0x07, 0xc0, 0x03, 0x40, 0x02, 0xa0, 0x04, 0x10, 0x08, 0x88, 0x11,
   0xc4, 0x23, 0xf4, 0x2f, 0xfc, 0x3f, 0x00, 0x00 };

static unsigned char HGlassMask[] = {
   0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfc, 0x3f,
   0xf8, 0x1f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf8, 0x1f, 0xfc, 0x3f, 0xfe, 0x7f,
   0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f };

