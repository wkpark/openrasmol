
/***************************************************************************
 *                               RasMol 2.7.3                              *
 *                                                                         *
 *                                 RasMol                                  *
 *                 Molecular Graphics Visualisation Tool                   *
 *                             6 February 2005                             *
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
 *Bernstein          RasMol 2.7.1   Jun 99         1998-2001               *
 *                   RasMol 2.7.1.1 Jan 01                                 *
 *                   RasMol 2.7.2   Aug 00                                 *
 *                   RasMol 2.7.2.1 Apr 01                                 *
 *                   RasMol 2.7.2.1.1 Jan 04                               *
 *                   RasMol 2.7.3   Feb 05                                 *
 *                                                                         *
 *with RasMol 2.7.3 incorporating changes by Clarice Chigbo, Ricky Chachra,*
 *and Mamoru Yamanishi.  Work on RasMol 2.7.3 supported in part by         *
 *grants DBI-0203064, DBI-0315281 and EF-0312612 from the U.S. National    *
 *Science Foundation and grant DE-FG02-03ER63601 from the U.S. Department  *
 *of Energy.                                                               *
 *                                                                         *
 *                    and Incorporating Translations by                    *
 *  Author                               Item                      Language*
 *  Isabel Servan Martinez,                                                *
 *  Jose Miguel Fernandez Fernandez      2.6   Manual              Spanish *
 *  Jose Miguel Fernandez Fernandez      2.7.1 Manual              Spanish *
 *  Fernando Gabriel Ranea               2.7.1 menus and messages  Spanish *
 *  Jean-Pierre Demailly                 2.7.1 menus and messages  French  *
 *  Giuseppe Martini, Giovanni Paolella, 2.7.1 menus and messages          *
 *  A. Davassi, M. Masullo, C. Liotto    2.7.1 help file           Italian *
 *                                                                         *
 *                             This Release by                             *
 * Herbert J. Bernstein, Bernstein + Sons, P.O. Box 177, Bellport, NY, USA *
 *                       yaya@bernstein-plus-sons.com                      *
 *               Copyright(C) Herbert J. Bernstein 1998-2005               *
 *                                                                         *
 *                READ THE FILE NOTICE FOR RASMOL LICENSES                 *
 *Please read the file NOTICE for important notices which apply to this    *
 *package and for license terms (GPL or RASLIC).                           *
 ***************************************************************************/
/* wbrotate.h
 $Log$
 Revision 1.1  2006/06/19 22:05:14  todorovg
 Initial revision

 Revision 1.1  2004/05/07 19:46:16  yaya
 Initial revision

 Revision 1.2  2004/02/15 00:24:00  yaya
 *** empty log message ***

 Revision 1.1  2003/12/12 21:10:38  yaya
 Initial revision

 Revision 1.1  2001/01/31 02:13:45  yaya
 Initial revision

 Revision 1.7  2000/08/27 00:55:05  yaya
 create rotation bond database

 Revision 1.6  2000/08/26 18:13:03  yaya
 Updates to header comments in all files

 Revision 1.5  2000/08/26 17:31:26  yaya
 Fix for world rot, remove refs to toolbar

 Revision 1.4  2000/08/26 03:14:31  yaya
 Mods for mac compilations

 Revision 1.2  2000/08/21 21:08:10  yaya
 semi-final ucb mods

 Revision 1.1  2000/08/09 01:18:45  yaya
 Rough cut with ucb

 */

/* Original header for this routine:
 */
/**********************************************************************
  Copyright (c) 1995 UC Regents, ModularCHEM Consortium

  wbrotate.h
  World Rotate/Bond Rotate
  
  Author:      Gary Grossman (garyg@cory.EECS.Berkeley.EDU)
  Last Update: November 14, 1995
 **********************************************************************/

#ifndef WBROTATE_H
#define WBROTATE_H

/*========================*/
/* Bond Rotation Database */
/*========================*/

typedef struct _BondRot {
        struct _BondRot __far *brnext;     /* Next bond for rotation */
        RAtom __far *BSrcAtom;             /* First atom in the bond */
        RAtom __far *BDstAtom;             /* Last atom in the bond  */
        Real BRotValue;                    /* Angle of rotation      */    
    } BondRot;

void InitialiseWBRotate( void );
void WorldRotate( void );
void BondRotate( void );
void CreateBondAxis( Long, Long );
void SetBondAxis( RAtom __far *, RAtom __far * );
int RemoveBond(  Long , Long );
void ResetBondsSel( void );

#ifdef WBROTATE
Real WLastRX, WLastRY, WLastRZ;
Real WTransX, WTransY, WTransZ;
Real WLastTX, WLastTY, WLastTZ;
BondRot *BondSelected;
BondRot *BondsSelected;
RAtom __far *BSrcAtom;
RAtom __far *BDstAtom;
Real BAxis[3];
Real BRotValue, BLastRot;
Real WRotValue[3];
Real WLRotX[3],WLRotY[3],WLRotZ[3];
Real WIRotX[3],WIRotY[3],WIRotZ[3];
#else
extern Real WLastRX, WLastRY, WLastRZ;
extern Real WTransX, WTransY, WTransZ;
extern Real WLastTX, WLastTY, WLastTZ;
extern BondRot *BondSelected;
extern BondRot *BondsSelected;
#ifndef GRAPHICS
extern RAtom __far *BSrcAtom;
extern RAtom __far *BDstAtom;
#endif
extern Real BAxis[3];
extern Real BRotValue, BLastRot;
extern Real WRotValue[3];
extern Real WLRotX[3],WLRotY[3],WLRotZ[3];
extern Real WIRotX[3],WIRotY[3],WIRotZ[3];
#endif

#endif

