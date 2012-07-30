/*
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA */

#include "mysql_inc.h"
#include "hot_patch.h"
#include <stdlib.h>
#include <ctype.h>

#include "audit_handler.h"
#include <string.h>

/*
  Disable __attribute__() on non-gcc compilers.

  #if !defined(__attribute__) && !defined(__GNUC__)
  #define __attribute__(A)
  #endif
*/



//see offset-extract/readme.txt for explanation on how this was generated
#ifdef __x86_64__
//64 bit offsets
static const ThdOffsets thd_offsets_arr[] =
  {
    //DISTRIBUTION: rpm
    //offsets for: mysqlrpm/5.1.30/usr/sbin/mysqld (5.1.30-community)
    {"5.1.30-community","8e43bda3644a883d46a1d064304b4f1d", 6184, 6248, 3656, 3928, 88, 2048},
    //offsets for: mysqlrpm/5.1.31/usr/sbin/mysqld (5.1.31-community)
    {"5.1.31-community","540d4cf28ea559a0edea0ee971c9a107", 6192, 6256, 3664, 3936, 88, 2040},
    //offsets for: mysqlrpm/5.1.32/usr/sbin/mysqld (5.1.32-community)
    {"5.1.32-community","b75c7d571e9d12b8c37ceafb9042c987", 6192, 6256, 3664, 3936, 88, 2040},
    //offsets for: mysqlrpm/5.1.33/usr/sbin/mysqld (5.1.33-community)
    {"5.1.33-community","56e820a385ff22f732e0638aa262b447", 6192, 6256, 3664, 3936, 88, 2048},
    //offsets for: mysqlrpm/5.1.34/usr/sbin/mysqld (5.1.34-community)
    {"5.1.34-community","da3c0f88578725356b04e7631591bef3", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.35/usr/sbin/mysqld (5.1.35-community)
    {"5.1.35-community","c2676c2496fea6741ebd5df7cf7ce444", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.36/usr/sbin/mysqld (5.1.36-community)
    {"5.1.36-community","3de797ee36be61a8221a6093eb9c649e", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.37/usr/sbin/mysqld (5.1.37-community)
    {"5.1.37-community","508ffea25280c9454dcef065e5fd4af2", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.38/usr/sbin/mysqld (5.1.38-community)
    {"5.1.38-community","3bf0d4cc9fded79b76e5467c1b5dac82", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.39/usr/sbin/mysqld (5.1.39-community)
    {"5.1.39-community","deca5ca3813a9d4157f37f5280be8a26", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.40/usr/sbin/mysqld (5.1.40-community)
    {"5.1.40-community","6ce779a6883b69a1ba28ca5640e60a55", 6200, 6264, 3672, 3944, 88, 2048},
    {"5.1.40-community","2fa8842d7685c8c7d4a1cdd8533d7f62", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.41/usr/sbin/mysqld (5.1.41-community)
    {"5.1.41-community","6ccf4357688d8e46bfcb4443966970b0", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.42/usr/sbin/mysqld (5.1.42-community)
    {"5.1.42-community","8dd9f47e0998958d8826aa2a2487114e", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.43/usr/sbin/mysqld (5.1.43-community)
    {"5.1.43-community","bcd73a2b710327861608fc3d3464f8df", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: mysqlrpm/5.1.44/usr/sbin/mysqld (5.1.44-community)
    {"5.1.44-community","e059b94720daa145d9807a33e9c450b9", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: mysqlrpm/5.1.45/usr/sbin/mysqld (5.1.45-community)
    {"5.1.45-community","7f681b9441bf05f20c4b1b5e7f580269", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: mysqlrpm/5.1.46/usr/sbin/mysqld (5.1.46-community)
    {"5.1.46-community","7e16a80f8593ce5dc65042101c572b9c", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: mysqlrpm/5.1.47/usr/sbin/mysqld (5.1.47-community)
    {"5.1.47-community","8a4de4573d4037cc27adf45ab7275544", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.48/usr/sbin/mysqld (5.1.48-community)
    {"5.1.48-community","10ac2c73ff9476752f15c5658bc3d5ce", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.49/usr/sbin/mysqld (5.1.49-community)
    {"5.1.49-community","85c8cd6984de26580ddf49d87ea76c43", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.50/usr/sbin/mysqld (5.1.50-community)
    {"5.1.50-community","174ce50cfc926bfb04701acdd1d7489d", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.51/usr/sbin/mysqld (5.1.51-community)
    {"5.1.51-community","4ebe71217f34c38fc80c8aa2c4ddcca8", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.52/usr/sbin/mysqld (5.1.52-community)
    {"5.1.52-community","bbb6ca9baf04a4c596e53c49a1e34589", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.53/usr/sbin/mysqld (5.1.53-community)
    {"5.1.53-community","90d9cd7d6c2793e31e42aaa378dbe044", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.54/usr/sbin/mysqld (5.1.54-community)
    {"5.1.54-community","c23b86ac2f64e9de6731fef97e79c98e", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.55/usr/sbin/mysqld (5.1.55-community)
    {"5.1.55-community","e5d0694364a5e14dd227cb3c28ea0928", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.56/usr/sbin/mysqld (5.1.56-community)
    {"5.1.56-community","fd16157ab06cc0cfb3eba40e9936792c", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.57/usr/sbin/mysqld (5.1.57-community)
    {"5.1.57-community","4c6d32f80c20657983f7ac316c6a6e10", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: mysqlrpm/5.1.58/usr/sbin/mysqld (5.1.58-community)
    {"5.1.58-community","e42752084a90c708a94779d26589b748", 6336, 6400, 3688, 3960, 88, 2048},
    {"5.1.58-community","032d4f14464851e724281f8b692578a2", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: /usr/sbin/mysqld (5.1.58-community)
    {"5.1.58-community","7c51a8f1aabece893982e0cafac8dcee", 6336, 6400, 3688, 3960, 88, 2048},
    //offsets for: /mysqlrpm/5.1.59/usr/sbin/mysqld (5.1.59-community)
    {"5.1.59-community","9463387bf70c07376a52a93bf44c51f0", 6328, 6392, 3688, 3960, 88, 2048},
    //offsets for: /mysqlrpm/5.1.60/usr/sbin/mysqld (5.1.60-community)
    {"5.1.60-community","d9497964e8983a348538c0d05eaee7f0", 6328, 6392, 3688, 3960, 88, 2048},
    //offsets for: /mysqlrpm/5.1.61/usr/sbin/mysqld (5.1.61-community)
    {"5.1.61-community","bda6030d35e7fafa5b1e57154a53b804", 6328, 6392, 3688, 3960, 88, 2048},
    //offsets for: 
    {"5.1.63","2a6d7c81179baf6bc6bbb807b8b54967", 6336, 6400, 3696, 3968, 88, 2048},
    //offsets for: mysqlrpm/5.5.8/usr/sbin/mysqld (5.5.8)
    {"5.5.8","70a882693d54df8ab7c7d9f256e317bb", 6032, 6080, 3776, 4200, 88, 2560},
    //offsets for: mysqlrpm/5.5.9/usr/sbin/mysqld (5.5.9)
    {"5.5.9","262554c75df0b890e08c5c2500391342", 6056, 6104, 3800, 4224, 88, 2560},
    //offsets for: mysqlrpm/5.5.10/usr/sbin/mysqld (5.5.10)
    {"5.5.10","f9d15e7ff70ad177923b9d2a14b9bc19", 6056, 6104, 3800, 4224, 88, 2560},
    //offsets for: mysqlrpm/5.5.11/usr/sbin/mysqld (5.5.11)
    {"5.5.11","04a7049ba1c099e00dcdc6f1d98078aa", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysqlrpm/5.5.12/usr/sbin/mysqld (5.5.12)
    {"5.5.12","91df7918803df78b164f46706003e22d", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysqlrpm/5.5.13/usr/sbin/mysqld (5.5.13)
    {"5.5.13","f13cbe2c1a5247c52d592ac199b8d9af", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysqlrpm/5.5.14/usr/sbin/mysqld (5.5.14)
    {"5.5.14","4fb94eac7eaa2dc9bbf3ee773a54197e", 6048, 6096, 3792, 4216, 88, 2560},
    {"5.5.15-debug", "", 6256, 6304, 3992, 4424, 88, 2560},
    //offsets for: mysqlrpm/5.5.15/usr/sbin/mysqld (5.5.15)
    {"5.5.15","d3c2a51a84cbec77c2fb92f1ea414ec3", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysqlrpm/5.5.16/usr/sbin/mysqld (5.5.16)
    {"5.5.16","289c64d14b132c67fd22cd6404817bc3", 6040, 6088, 3792, 4216, 88, 2560},
    //offsets for: mysqlrpm/5.5.17/usr/sbin/mysqld (5.5.17)
    {"5.5.17","9c6b2f65b1015f924fb74408d2968339", 6040, 6088, 3792, 4216, 88, 2560},
    //offsets for: mysqlrpm/5.5.18/usr/sbin/mysqld (5.5.18)
    {"5.5.18","60d191bfeea1232e86fa4ad54ae46b10", 6040, 6088, 3792, 4216, 88, 2560},
    {"5.5.18","099d31c0cd0754934b84c17f683d019e", 6040, 6088, 3792, 4216, 88, 2560},
    //offsets for: mysqlrpm/5.5.19/usr/sbin/mysqld (5.5.19)
    {"5.5.19","0765dadb23315bb076bc6e21cfb2de40", 6048, 6096, 3800, 4224, 88, 2560},
    //offsets for: /mysqlrpm/5.5.20/usr/sbin/mysqld (5.5.20)
    {"5.5.20","9f6122576930c5d09ca9244094c83f24", 6048, 6096, 3800, 4224, 88, 2560},
    //offsets for: mysqlrpm/5.5.21/usr/sbin/mysqld (5.5.21)
    {"5.5.21","4a03ad064ed393dabdde175f3ea05ff2", 6048, 6096, 3800, 4224, 88, 2560},

    //DISTRIBUTION: tar.gz
    //offsets for: /mysql/5.1.30/bin/mysqld (5.1.30)
    {"5.1.30","b301b32be659367c1a1900b47534fd59", 6192, 6256, 3664, 3936, 88, 2048},
    //offsets for: /mysql/5.1.31/bin/mysqld (5.1.31)
    {"5.1.31","2d8be9bf479678b3f2bd3214f1f04c7e", 6200, 6264, 3672, 3944, 88, 2040},
    //offsets for: /mysql/5.1.32/bin/mysqld (5.1.32)
    {"5.1.32","c585253cf70944471c936962a318a81a", 6200, 6264, 3672, 3944, 88, 2040},
    //offsets for: /mysql/5.1.33/bin/mysqld (5.1.33)
    {"5.1.33","99d8cbc22dc2919abe530ed61a52c89d", 6200, 6264, 3672, 3944, 88, 2048},
    //offsets for: /mysql/5.1.34/bin/mysqld (5.1.34)
    {"5.1.34","47b8eb2e619dd953e4ce6cf468a19c6e", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.35/bin/mysqld (5.1.35)
    {"5.1.35","950a25d0a4e4e100b72d60ffd451e93a", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.36/bin/mysqld (5.1.36)
    {"5.1.36","758c2ac0375425a43cd815d3a2c10132", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.37/bin/mysqld (5.1.37)
    {"5.1.37","4e7bfc2705eea482a19b710944dc5ff5", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.38/bin/mysqld (5.1.38)
    {"5.1.38","09e8ac98651439fd4f22b508178cd0ef", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.39/bin/mysqld (5.1.39)
    {"5.1.39","b6c4acb0a9a4ff71ab5e26ed010d20c9", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.40/bin/mysqld (5.1.40)
    {"5.1.40","bc663cdf0a8411526dc9eb44dff5773f", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.41/bin/mysqld (5.1.41)
    {"5.1.41","ebf47135d6fe9099cd62db1dea2c4ca6", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.42/bin/mysqld (5.1.42)
    {"5.1.42","a7b55239789304978d8250697a3c73fc", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.43/bin/mysqld (5.1.43)
    {"5.1.43","96e95d0b1461f4484e571af01c01bc4a", 6208, 6272, 3680, 3952, 88, 2048},
    //offsets for: /mysql/5.1.44/bin/mysqld (5.1.44)
    {"5.1.44","ecf6919ce6d4e74d108644ab122ff1fb", 6216, 6280, 3688, 3960, 88, 2048},
    //offsets for: /mysql/5.1.45/bin/mysqld (5.1.45)
    {"5.1.45","657c7e712a894ebe3b3db9b26cc3ebd7", 6216, 6280, 3688, 3960, 88, 2048},
    //offsets for: /mysql/5.1.46/bin/mysqld (5.1.46)
    {"5.1.46","990b3bafe5d55dc1a9084791623191ca", 6216, 6280, 3688, 3960, 88, 2048},
    //offsets for: /mysql/5.1.47/bin/mysqld (5.1.47)
    {"5.1.47","9868b07a44f8d5de8bc5716e3f680139", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.48/bin/mysqld (5.1.48)
    {"5.1.48","e812133194ff8e0cd25945c327e07f6c", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.49/bin/mysqld (5.1.49)
    {"5.1.49","4869d51b5bfc38f7698059e2696a95ca", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.50/bin/mysqld (5.1.50)
    {"5.1.50","316a6b674d66cb151bac384cb0508357", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.51/bin/mysqld (5.1.51)
    {"5.1.51","b9f831f698cd7fa85abe112bb99c8861", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.52/bin/mysqld (5.1.52)
    {"5.1.52","c31f9c5d042e8793b3f192fa04f0e628", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.53/bin/mysqld (5.1.53)
    {"5.1.53","07a3ae20e262306e708760889ff2705b", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.54/bin/mysqld (5.1.54)
    {"5.1.54","9fca5d956c33e646920e68c541aabcae", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.55/bin/mysqld (5.1.55)
    {"5.1.55","54457f3bc49d7ac7497f4212538c8ddc", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.56/bin/mysqld (5.1.56)
    {"5.1.56","1a901cb4c1ff55aeab04ba4ba9e5f4ec", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.57/bin/mysqld (5.1.57)
    {"5.1.57","c3c4f7c4403e501b11c532fb4eccf68b", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.58/bin/mysqld (5.1.58)
    {"5.1.58","3e93f9d332fb8e3b9481f4620361f481", 6344, 6408, 3696, 3968, 88, 2048},
    {"5.1.58","5620fefe93dbc46cb2d488a054d2e81a", 6344, 6408, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.59/bin/mysqld (5.1.59)
    {"5.1.59","61fe56a6bcd71a9ea6026322f459555b", 6336, 6400, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.60/bin/mysqld (5.1.60)
    {"5.1.60","5407e492f802cca03eccb2211205632d", 6336, 6400, 3696, 3968, 88, 2048},
    //offsets for: /mysql/5.1.61/bin/mysqld (5.1.61)
    {"5.1.61","c2ce56446b33ee22c16160b3f8206541", 6336, 6400, 3696, 3968, 88, 2048},
    //offsets for: mysql/5.5.8/bin/mysqld (5.5.8)
    {"5.5.8","a32b163f08ca8bfd7486cd77200d9df3", 6032, 6080, 3776, 4200, 88, 2560},
    //offsets for: mysql/5.5.9/bin/mysqld (5.5.9)
    {"5.5.9","7b01c8b42a47f3541ee62b1e3f1b7816", 6056, 6104, 3800, 4224, 88, 2560},
    //offsets for: mysql/5.5.10/bin/mysqld (5.5.10)
    {"5.5.10","de2bb7a3fa3cea8c3aae9e0c544ab8f4", 6056, 6104, 3800, 4224, 88, 2560},
    //offsets for: mysql/5.5.11/bin/mysqld (5.5.11)
    {"5.5.11","cc565bd5de75d86ccf9371789afa3a15", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysql/5.5.12/bin/mysqld (5.5.12)
    {"5.5.12","a37a096e0c6afa81d023368434432a70", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysql/5.5.13/bin/mysqld (5.5.13)
    {"5.5.13","299abd40c9b5cf9421083aeddc8cfb66", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysql/5.5.14/bin/mysqld (5.5.14)
    {"5.5.14","98c716bb1ad38cf018d881dbf578fade", 6048, 6096, 3792, 4216, 88, 2560},
    //offsets for: mysql/5.5.15/bin/mysqld (5.5.15)
    {"5.5.15","73a45e429c63542efbb70bcf56d869be", 6048, 6096, 3792, 4216, 88, 2560},
    {"5.5.15-debug","",  6256, 6304, 3992, 4424, 88, 2560},
    //offsets for: mysql/5.5.16/bin/mysqld (5.5.16)
    {"5.5.16","9f4b0b7f721a0d57822c3e7417dec532", 6040, 6088, 3792, 4216, 88, 2560},
    //offsets for: mysql/5.5.17/bin/mysqld (5.5.17)
    {"5.5.17","1998ce51314f86b587891dd80db067d6", 6040, 6088, 3792, 4216, 88, 2560},
    //offsets for: mysql/5.5.18/bin/mysqld (5.5.18)
    {"5.5.18","d0a874863943e837a685e7fc4af02a87", 6040, 6088, 3792, 4216, 88, 2560},
    //offsets for: mysql/5.5.19/bin/mysqld (5.5.19)
    //offsets for: /usr/sbin/mysqld (5.5.18)
    {"5.5.18","099d31c0cd0754934b84c17f683d019e", 6040, 6088, 3792, 4216, 88, 2560},
    {"5.5.19","f000f941c4e4f7b84e66d7b8c115ca8f", 6048, 6096, 3800, 4224, 88, 2560},
    //offsets for: /mysql/5.5.20/bin/mysqld (5.5.20)
    {"5.5.20","8b68e84332b442d58a46ae4299380a99", 6048, 6096, 3800, 4224, 88, 2560},
    //offsets for: mysql/5.5.21/bin/mysqld (5.5.21)
    {"5.5.21","66d23cb577e2bcfe29da08833f5e7d8b", 6048, 6096, 3800, 4224, 88, 2560}

  };

#else
//32 bit offsets
static const ThdOffsets thd_offsets_arr[] =
  {
    //DISTRIBUTION: rpm
    //offsets for: mysqlrpm/5.1.30/usr/sbin/mysqld (5.1.30-community)
    {"5.1.30-community","fdfe108d05c262c185a7c28b2e493c10", 4024, 4064, 2224, 2404, 44, 1180},
    //offsets for: mysqlrpm/5.1.31/usr/sbin/mysqld (5.1.31-community)
    {"5.1.31-community","79e595a948564164886471fce7b90414", 4028, 4068, 2228, 2408, 44, 1172},
    //offsets for: mysqlrpm/5.1.32/usr/sbin/mysqld (5.1.32-community)
    {"5.1.32-community","08bbc180f9aed54f3b8fb596360766cd", 4028, 4068, 2228, 2408, 44, 1172},
    //offsets for: mysqlrpm/5.1.33/usr/sbin/mysqld (5.1.33-community)
    {"5.1.33-community","c9c3d4de320bbf721a13b0f2d7469a0d", 4032, 4072, 2228, 2408, 44, 1176},
    //offsets for: mysqlrpm/5.1.34/usr/sbin/mysqld (5.1.34-community)
    {"5.1.34-community","806598500d6b9264dcd78eb6f0ed037b", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.35/usr/sbin/mysqld (5.1.35-community)
    {"5.1.35-community","b4202f285a39dc8875fb718e1310c2cd", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.36/usr/sbin/mysqld (5.1.36-community)
    {"5.1.36-community","76dd39a6a4bd61313745b984c186caa2", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.37/usr/sbin/mysqld (5.1.37-community)
    {"5.1.37-community","615173a7021b143a65c31d0e58d01172", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.38/usr/sbin/mysqld (5.1.38-community)
    {"5.1.38-community","f818189713bb56ccce507a4db4fcbfed", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.39/usr/sbin/mysqld (5.1.39-community)
    {"5.1.39-community","9951b3c9c050a9a5e0a2994295e0aa0c", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.40/usr/sbin/mysqld (5.1.40-community)
    {"5.1.40-community","3f44d47492e746e57883fb44e7f92195", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.41/usr/sbin/mysqld (5.1.41-community)
    {"5.1.41-community","b03f583f769bf2638170a157835baffb", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.42/usr/sbin/mysqld (5.1.42-community)
    {"5.1.42-community","ec01163698da7c64e9267e2e4b87133d", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.43/usr/sbin/mysqld (5.1.43-community)
    {"5.1.43-community","dc93f6b2f35e4b7c6814dc39e6bdf7f4", 4036, 4076, 2232, 2412, 44, 1176},
    //offsets for: mysqlrpm/5.1.44/usr/sbin/mysqld (5.1.44-community)
    {"5.1.44-community","cd6f166239d377423533400bf7b00ea3", 4040, 4080, 2236, 2416, 44, 1176},
    //offsets for: mysqlrpm/5.1.45/usr/sbin/mysqld (5.1.45-community)
    {"5.1.45-community","8dcfe0e4adfad351d33f0939442480f6", 4040, 4080, 2236, 2416, 44, 1176},
    //offsets for: mysqlrpm/5.1.46/usr/sbin/mysqld (5.1.46-community)
    {"5.1.46-community","5e2689bea4fbccceed1e32cd96cc3c34", 4040, 4080, 2236, 2416, 44, 1176},
    //offsets for: mysqlrpm/5.1.47/usr/sbin/mysqld (5.1.47-community)
    {"5.1.47-community","d24830298658630ff57c28e886f7867a", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.48/usr/sbin/mysqld (5.1.48-community)
    {"5.1.48-community","0fb5da11cb2af69c9c8ccb4e7e09c2ba", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.49/usr/sbin/mysqld (5.1.49-community)
    {"5.1.49-community","44c5f411e0ca0251afed127c2eab099a", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.50/usr/sbin/mysqld (5.1.50-community)
    {"5.1.50-community","ba318e3ea6c628e771c061bc8f8fd747", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.51/usr/sbin/mysqld (5.1.51-community)
    {"5.1.51-community","9e3294ed95b2f1197466f3b4100074b4", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.52/usr/sbin/mysqld (5.1.52-community)
    {"5.1.52-community","6bef5cbe540f8a5d445b9ae243a0d228", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.53/usr/sbin/mysqld (5.1.53-community)
    {"5.1.53-community","cd34abf1b7cc20928a30b23c9270bae9", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.54/usr/sbin/mysqld (5.1.54-community)
    {"5.1.54-community","af4e3ed1f31aba894714bb9dd572b920", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.55/usr/sbin/mysqld (5.1.55-community)
    {"5.1.55-community","3b201091f1f87ec89c0f69b5e5712cd5", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.56/usr/sbin/mysqld (5.1.56-community)
    {"5.1.56-community","43fb22017f5fb7ba436dbf53fe45ac5d", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.57/usr/sbin/mysqld (5.1.57-community)
    {"5.1.57-community","b3b137aaa9550b070185e7fb1b788a97", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.1.58/usr/sbin/mysqld (5.1.58-community)
    {"5.1.58-community","728f80ea4a231f85b2dc8661bf6828fc", 4104, 4144, 2240, 2420, 44, 1176},
    {"5.1.58-community","a4199c1595d0ef3f0b1a2ffbc4e74976", 4104, 4144, 2240, 2420, 44, 1176},
    {"5.1.58-community","5d9be93190a88860d0d4f4033c2d3d09", 4104, 4144, 2240, 2420, 44, 1176},
    {"5.1.58-community","5b7a9bca308184339999f42db6224467", 4104, 4144, 2240, 2420, 44, 1176},
    //offsets for: /mysqlrpm/5.1.59/usr/sbin/mysqld (5.1.59-community)
    {"5.1.59-community","2405f0bf32c0a1439a157e54431443de", 4096, 4136, 2240, 2420, 44, 1176},
    //offsets for: /mysqlrpm/5.1.60/usr/sbin/mysqld (5.1.60-community)
    {"5.1.60-community","bc2d74ea58d22d998f8f8c88139fc5f7", 4096, 4136, 2240, 2420, 44, 1176},
    //offsets for: /mysqlrpm/5.1.61/usr/sbin/mysqld (5.1.61-community)
    {"5.1.61-community","f73013eb2001a02c84ddd0ac42a307ac", 4096, 4136, 2240, 2420, 44, 1176},
    //offsets for: mysqlrpm/5.5.8/usr/sbin/mysqld (5.5.8)
    {"5.5.8","3132e8c883f72caf4c8eddb24fd005b4", 3792, 3820, 2336, 2668, 44, 1640},
    //offsets for: mysqlrpm/5.5.9/usr/sbin/mysqld (5.5.9)
    {"5.5.9","1f9f8f5109687db75c15bc04d4396842", 3816, 3844, 2360, 2692, 44, 1640},
    //offsets for: mysqlrpm/5.5.10/usr/sbin/mysqld (5.5.10)
    {"5.5.10","f9e6ef8075fe370842c0fce571eac6e1", 3816, 3844, 2360, 2692, 44, 1640},
    //offsets for: mysqlrpm/5.5.11/usr/sbin/mysqld (5.5.11)
    {"5.5.11","37c160fac1cc844fc4aa09bb23a60022", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.12/usr/sbin/mysqld (5.5.12)
    {"5.5.12","565093ea45815edd8fa8bd444825aa6d", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.13/usr/sbin/mysqld (5.5.13)
    {"5.5.13","0592c10129e360623a70bbcc1618c7ad", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.14/usr/sbin/mysqld (5.5.14)
    {"5.5.14","53eca2f96ec9185c1b733c2b254fa416", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.15/usr/sbin/mysqld (5.5.15)
    {"5.5.15","01fa6e9c9eafb638c801cc3d261dca70", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.16/usr/sbin/mysqld (5.5.16)
    {"5.5.16","0959bb8b5a0fa940c900873ff743bd59", 3804, 3832, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.17/usr/sbin/mysqld (5.5.17)
    {"5.5.17","c99b809e13c52ac0e173baff0df24f75", 3804, 3832, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.18/usr/sbin/mysqld (5.5.18)
    {"5.5.18","bbeb7e7ad983ea1db87665d8e530f6b6", 3804, 3832, 2356, 2688, 44, 1640},
    //offsets for: mysqlrpm/5.5.19/usr/sbin/mysqld (5.5.19)
    {"5.5.19","f3c31e2a5d95d3511b7106441f38929e", 3808, 3836, 2360, 2692, 44, 1640},
    //offsets for: /mysqlrpm/5.5.20/usr/sbin/mysqld (5.5.20)
    {"5.5.20","c73100bcb0d967b627cad72e66503194", 3808, 3836, 2360, 2692, 44, 1640},
    //offsets for: mysqlrpm/5.5.21/usr/sbin/mysqld (5.5.21)
    {"5.5.21","18d78ced97227b83e62e9b43ba5b3883", 3808, 3836, 2360, 2692, 44, 1640},

    //DISTRIBUTION: tar.gz
    //offsets for: mysql/5.1.30/bin/mysqld (5.1.30)
    {"5.1.30","f02d15a37e8e7513e7570023b48ccb4d", 4028, 4068, 2228, 2408, 44, 1180},
    //offsets for: mysql/5.1.31/bin/mysqld (5.1.31)
    {"5.1.31","a3a240c57429f67c4fcb5c960d30f5cc", 4036, 4076, 2236, 2416, 44, 1172},
    //offsets for: mysql/5.1.32/bin/mysqld (5.1.32)
    {"5.1.32","b8d4491363c8b4e4fb61fce807cb849c", 4036, 4076, 2236, 2416, 44, 1172},
    //offsets for: mysql/5.1.33/bin/mysqld (5.1.33)
    {"5.1.33","1b8c93710fe908565cf434b8a4a472c6", 4040, 4080, 2236, 2416, 44, 1176},
    //offsets for: mysql/5.1.34/bin/mysqld (5.1.34)
    {"5.1.34","dcbd60d1c75bcb75b75bf0428b64bcfa", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.35/bin/mysqld (5.1.35)
    {"5.1.35","ffd1fa84e00daace393e5450298fcbeb", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.36/bin/mysqld (5.1.36)
    {"5.1.36","3a45ab0b7d8bcac42933b8635b7898ef", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.37/bin/mysqld (5.1.37)
    {"5.1.37","fb51c158439a1a2524048822f803b900", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.38/bin/mysqld (5.1.38)
    {"5.1.38","3325969a0feffd660968ff489d59e648", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.39/bin/mysqld (5.1.39)
    {"5.1.39","e3c3f1ab7d6f11d4db161f76e01ae229", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.40/bin/mysqld (5.1.40)
    {"5.1.40","f068b9eef84e76556e90889148011911", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.41/bin/mysqld (5.1.41)
    {"5.1.41","dcfa2d28d2bb193d8883bf0f465582db", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.42/bin/mysqld (5.1.42)
    {"5.1.42","f384b97929c2cef7cfe292cc2d1ed018", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.43/bin/mysqld (5.1.43)
    {"5.1.43","10035c4e3877da190d6f2b00c3f28eea", 4044, 4084, 2240, 2420, 44, 1176},
    //offsets for: mysql/5.1.44/bin/mysqld (5.1.44)
    {"5.1.44","5119573ff0a4ad1688a5ac6412b5b51a", 4048, 4088, 2244, 2424, 44, 1176},
    //offsets for: mysql/5.1.45/bin/mysqld (5.1.45)
    {"5.1.45","8a57e78f7b0bf6818ba032c05a4b5c6b", 4048, 4088, 2244, 2424, 44, 1176},
    //offsets for: mysql/5.1.46/bin/mysqld (5.1.46)
    {"5.1.46","090c3c45fbe7a37fa83b1567604d9598", 4048, 4088, 2244, 2424, 44, 1176},
    //offsets for: mysql/5.1.47/bin/mysqld (5.1.47)
    {"5.1.47","1864a85030c04e85dc9c9c37db449e11", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.48/bin/mysqld (5.1.48)
    {"5.1.48","73a8915a1549012fcfeefe285f9dda3b", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.49/bin/mysqld (5.1.49)
    {"5.1.49","cc318106e6d7670c2e0d787c61c64e3e", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.50/bin/mysqld (5.1.50)
    {"5.1.50","d651dd6ba898bb6fe4b94a820f6bc670", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.51/bin/mysqld (5.1.51)
    {"5.1.51","bc5b02298ab8f928c57055a1ddf9f9eb", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.52/bin/mysqld (5.1.52)
    {"5.1.52","1553d70d4a1e50cbc3372cfc19c781d1", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.53/bin/mysqld (5.1.53)
    {"5.1.53","c9e447344659169b6a94c24b30872539", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.54/bin/mysqld (5.1.54)
    {"5.1.54","bf71b8a6a3ba8d1dccae9173d1b24f1c", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.55/bin/mysqld (5.1.55)
    {"5.1.55","9fad028c88f5236d6d573b49d228cfbd", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.56/bin/mysqld (5.1.56)
    {"5.1.56","01ed5d208a836a81770a9b4cf7e3c950", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.57/bin/mysqld (5.1.57)
    {"5.1.57","e180e87ea25ddf3834a6f397e56e6df6", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: mysql/5.1.58/bin/mysqld (5.1.58)
    {"5.1.58","46795902e2a8a54976e3c4fd81cb567f", 4112, 4152, 2248, 2428, 44, 1176},
    {"5.1.58","3200476a63ce76810171d6791fdfb1fe", 4112, 4152, 2248, 2428, 44, 1176},
    //offsets for: /mysql/5.1.59/bin/mysqld (5.1.59)
    {"5.1.59","3122bfbeea3e4b420be996eb64244fb4", 4104, 4144, 2248, 2428, 44, 1176},
    //offsets for: /mysql/5.1.60/bin/mysqld (5.1.60)
    {"5.1.60","520270041d8c490d49233e88741c025c", 4104, 4144, 2248, 2428, 44, 1176},
    //offsets for: /mysql/5.1.61/bin/mysqld (5.1.61)
    {"5.1.61","1a7a0981d77f4d212e899efaa581bd42", 4104, 4144, 2248, 2428, 44, 1176},
    //offsets for: /mysqlrpm/5.5.8/usr/sbin/mysqld (5.5.8)
    {"5.5.8","3132e8c883f72caf4c8eddb24fd005b4", 3792, 3820, 2336, 2668, 44, 1640},
    {"5.5.8","ad8a16d9bbfb783dab53f38cef757900", 3792, 3820, 2336, 2668, 44, 1640},
    //offsets for: /mysql/5.5.8/bin/mysqld (5.5.8)
    {"5.5.8","9fad75a10170625712be354ec5b52f2d", 3792, 3820, 2336, 2668, 44, 1640},
    //offsets for: /mysql/5.5.9/bin/mysqld (5.5.9)
    {"5.5.9","6ff8ac441ea0e5ff90dc95a47443ea8c", 3816, 3844, 2360, 2692, 44, 1640},
    //offsets for: /mysql/5.5.10/bin/mysqld (5.5.10)
    {"5.5.10","f27715ede95269b83527338739184f49", 3816, 3844, 2360, 2692, 44, 1640},
    //offsets for: /mysql/5.5.11/bin/mysqld (5.5.11)
    {"5.5.11","896bf69c3b42fb77e9efdd5fd3661800", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.12/bin/mysqld (5.5.12)
    {"5.5.12","c95e1181fadd0a04fe2c7a153058b6f3", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.13/bin/mysqld (5.5.13)
    {"5.5.13","d22b9d5bccd9f8bdb3158a87edd0992e", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.14/bin/mysqld (5.5.14)
    {"5.5.14","e77fa342d52bd3a7cbd551b8a9649e40", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.15/bin/mysqld (5.5.15)
    {"5.5.15","f070920da92c8fdf920f516bfbf7cbb4", 3812, 3840, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.16/bin/mysqld (5.5.16)
    {"5.5.16","291c0f871da9691a2271d48e79d7cf2b", 3804, 3832, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.17/bin/mysqld (5.5.17)
    {"5.5.17","64fde4494dbdd3e05457df5ac93c7760", 3804, 3832, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.18/bin/mysqld (5.5.18)
    {"5.5.18","5f6f2516ff4728f3b04613ed66233aa5", 3804, 3832, 2356, 2688, 44, 1640},
    //offsets for: /mysql/5.5.19/bin/mysqld (5.5.19)
    {"5.5.19","b407d678b9b855bfd29ba3c9f014d4b0", 3808, 3836, 2360, 2692, 44, 1640},
    //offsets for: /mysql/5.5.20/bin/mysqld (5.5.20)
    {"5.5.20","cb9b6887ea525fe9965121d357163fe4", 3808, 3836, 2360, 2692, 44, 1640},
    //offsets for: mysql/5.5.21/bin/mysqld (5.5.21)
    {"5.5.21","a0762cee3ad5d4e77480956144900213", 3808, 3836, 2360, 2692, 44, 1640}
  };

#endif

static const char * log_prefix = AUDIT_LOG_PREFIX;

//possible audit handlers
static Audit_file_handler json_file_handler;
static Audit_socket_handler json_socket_handler;

//formatters
static Audit_json_formatter json_formatter;

//flags to hold if audit handlers are enabled
static my_bool json_file_handler_enable = FALSE;
static my_bool json_socket_handler_enable = FALSE;
static my_bool uninstall_plugin_enable = FALSE;
static my_bool validate_checksum_enable = FALSE;
static char * offsets_string = NULL;
static char * checksum_string = NULL;
static int delay_ms_val =0;
static char *delay_cmds_string = NULL;
static char *record_cmds_string = NULL;
static char *record_objs_string = NULL;

static char delay_cmds_array [SQLCOM_END + 2][MAX_COMMAND_CHAR_NUMBERS];
static char record_cmds_array [SQLCOM_END + 2][MAX_COMMAND_CHAR_NUMBERS];
static char record_objs_array [MAX_NUM_OBJECT_ELEM + 2][MAX_OBJECT_CHAR_NUMBERS];
static int num_delay_cmds = 0;
static int num_record_cmds = 0;
static int num_record_objs = 0;

static SHOW_VAR com_status_vars_array [MAX_COM_STATUS_VARS_RECORDS] = {0};
/**
 * The trampoline function we use. Define it via a macro which simply fills it with nops.
 */
static int trampoline_mysql_execute_command(THD *thd)
{
  TRAMPOLINE_NOP_DEF;
  return 0; //dummy return as this does a jump.
}
static unsigned int trampoline_mysql_execute_size =0;

static void trampoline_log_slow_statement(THD *thd)
{
  TRAMPOLINE_NOP_DEF
    }
static unsigned int trampoline_log_slow_statement_size =0;

static int trampoline_check_user(THD *thd, enum enum_server_command command, const char *passwd, uint passwd_len, const char *db, bool check_count)
{
  TRAMPOLINE_NOP_DEF;
  return 0; //dummy return as this does a jump.
}
static unsigned int trampoline_check_user_size =0;

static bool trampoline_acl_authenticate(THD *thd, uint connect_errors, uint com_change_user_pkt_len){
  TRAMPOLINE_NOP_DEF;
  return 0; //dummy return as this does a jump.
}
static unsigned int trampoline_acl_authenticate_size =0;

static MYSQL_THDVAR_ULONG(is_thd_printed_list,
			  PLUGIN_VAR_READONLY | PLUGIN_VAR_NOSYSVAR | PLUGIN_VAR_NOCMDOPT, 	"avoid duplicate printing",
			  NULL, NULL,0,0,
#ifdef __x86_64__
			  0xffffffffffffff,
#else
			  0xffffffff,
#endif 
			  1);
THDPRINTED * GetThdPrintedList (THD *thd)
{
  THDPRINTED * pThdPrintedList= (THDPRINTED*)THDVAR(thd,is_thd_printed_list);
  if (pThdPrintedList)
    {
      return pThdPrintedList;
    }
  THDVAR(thd,is_thd_printed_list) =0;
  return NULL;
}

static int check_array(const char *cmd, char *array, int length) {
  for (int k=0; array[k * length + 0] !='\0';k++) {   
    int j=0;
    while (array[k * length + j] !='\0' && cmd[j] !='\0'
	   && array[k * length + j] == tolower (cmd[j])) {
      j++;
    }
    if (array[k * length + j] == '\0' && j !=0) {
      return 1;
    }
  }
  return 0;
}

static void audit(ThdSesData *pThdData)
{
  THDPRINTED *pThdPrintedList = GetThdPrintedList (pThdData->getTHD());
  if (num_record_cmds > 0) {
      const char * cmd = pThdData->getCmdName();
      if (!check_array(cmd, (char *) record_cmds_array, MAX_COMMAND_CHAR_NUMBERS)) {
	return;
      }
  }

  if (num_record_objs > 0) {
    LEX *pLex = Audit_formatter::thd_lex(pThdData->getTHD());
    TABLE_LIST * table = pLex->query_tables;
    int matched = 0;
    while (table && !matched)  {
      char *name = table->get_table_name();
      char *db = table->get_db_name();
      char obj[MAX_OBJECT_CHAR_NUMBERS];
      strcpy(obj, db);
      strcat(obj, ":");
      strcat(obj, name);
      matched = check_array(obj, (char *) record_objs_array, MAX_OBJECT_CHAR_NUMBERS);
      table = table->next_global;
    }
    if (!matched) {
      return;
    }
  }

  if (pThdPrintedList && pThdPrintedList->cur_index  < MAX_NUM_QUEUE_ELEM)
    {
      if (pThdPrintedList->is_thd_printed_queue[pThdPrintedList->cur_index] == 0)
        {
	  Audit_handler::log_audit_all(pThdData);
	  pThdPrintedList->is_thd_printed_queue[pThdPrintedList->cur_index] = 1;
        }
      else //duplicate no need to audit then simply return
	{
	  return;
	}
    }
  else 
    {
      Audit_handler::log_audit_all(pThdData);    
    }
  if (delay_ms_val > 0) 
    {
      const char * cmd = pThdData->getCmdName();
      int delay = check_array(cmd, (char *) delay_cmds_array, MAX_COMMAND_CHAR_NUMBERS);
      if (delay)
	{
	  //Audit_file_handler::print_sleep(thd,delay_ms_val);
	  my_sleep (delay_ms_val *1000);
	}
    }	
}


static int  trampoline_send_result_to_client(Query_cache *pthis, THD *thd, char *sql, uint query_length)
{
  TRAMPOLINE_NOP_DEF;
  return 0 ; //dummy return as this does a jump.
}

#if MYSQL_VERSION_ID > 50505
static bool trampoline_open_tables(THD *thd, TABLE_LIST **start, uint *counter, uint flags,
				   Prelocking_strategy *prelocking_strategy)
{
  TRAMPOLINE_NOP_DEF;
  TRAMPOLINE_NOP_DEF;
  return true ; //dummy return as this does a jump.
}
#else
static int trampoline_open_tables(THD *thd, TABLE_LIST **start, uint *counter, uint flags)
{
  TRAMPOLINE_NOP_DEF;
  TRAMPOLINE_NOP_DEF;
  return true ; //dummy return as this does a jump.
}
#endif

static MYSQL_THDVAR_ULONG(query_cache_table_list,
			  PLUGIN_VAR_READONLY | PLUGIN_VAR_NOSYSVAR | PLUGIN_VAR_NOCMDOPT, 	"Pointer to query cache table list.",
			  NULL, NULL,0,0,
#ifdef __x86_64__
			  0xffffffffffffff,
#else
			  0xffffffff,
#endif 
			  1);
 


QueryTableInf * Audit_formatter::getQueryCacheTableList1 (THD *thd)
{

  return (QueryTableInf*)	THDVAR(thd, query_cache_table_list);
}

static bool trampoline_check_table_access(THD *thd, ulong want_access,TABLE_LIST *tables,  uint number, bool no_errors)
{
  TRAMPOLINE_NOP_DEF
    return true;
}
static bool audit_check_table_access(THD *thd, ulong want_access,TABLE_LIST *tables,
				     uint number, bool no_errors)
{
  TABLE_LIST *pTables;
  bool res = trampoline_check_table_access (thd, want_access, tables, number, no_errors);
  if (!res &&  tables)
    {
      pTables = tables;
      QueryTableInf * pQueryTableInf =(QueryTableInf*) THDVAR (thd,query_cache_table_list);
      if (pQueryTableInf)
	{
	  while (pTables)
	    {
	      if (pQueryTableInf->num_of_elem < MAX_NUM_QUERY_TABLE_ELEM && pQueryTableInf->num_of_elem>=0)
		{
		  pQueryTableInf->db[pQueryTableInf->num_of_elem] = (char*) thd_alloc (thd, strlen (pTables->get_db_name())+1);
		  strcpy (pQueryTableInf->db[pQueryTableInf->num_of_elem],pTables->get_db_name());
		  pQueryTableInf->table_name[pQueryTableInf->num_of_elem] = (char*) thd_alloc (thd, strlen (pTables->get_table_name()) +1);
		  strcpy (pQueryTableInf->table_name[pQueryTableInf->num_of_elem],pTables->get_table_name());
		  pQueryTableInf->object_type[pQueryTableInf->num_of_elem] = Audit_formatter::retrive_object_type ( pTables);					
		  pQueryTableInf->num_of_elem ++;
		}
	      pTables = pTables->next_global;
	    }

	}	
    }
  return res;
}

static unsigned int trampoline_check_table_access_size = 0;

static int  audit_send_result_to_client(Query_cache *pthis, THD *thd, char *sql, uint query_length)
{
  int res;
  void *pList = thd_alloc (thd, sizeof (QueryTableInf));
	 

  if (pList)
    {
      memset (pList,0,sizeof (QueryTableInf));
      THDVAR(thd, query_cache_table_list) =(ulong)pList;
    }	 
  res = trampoline_send_result_to_client (pthis,thd, sql, query_length);
  if (res)
    {
      ThdSesData thd_data (thd);
      audit (&thd_data);
    }
  THDVAR(thd, query_cache_table_list) = 0;
  return res;
}
static unsigned int trampoline_send_result_to_client_size =0;

#if MYSQL_VERSION_ID > 50505
static bool audit_open_tables(THD *thd, TABLE_LIST **start, uint *counter, uint flags,
			      Prelocking_strategy *prelocking_strategy)
{

  bool res;
  res = trampoline_open_tables (thd, start, counter, flags, prelocking_strategy);
  ThdSesData thd_data (thd);
  audit(&thd_data);
  return res;

}

static unsigned int trampoline_open_tables_size =0;
#else
static int audit_open_tables(THD *thd, TABLE_LIST **start, uint *counter, uint flags)
{
  bool res;
  res = trampoline_open_tables (thd, start, counter, flags);
  ThdSesData thd_data (thd);
  audit(&thd_data);
  return res;
}
static unsigned int trampoline_open_tables_size =0;
#endif

static void audit_notify(THD *thd , const struct mysql_event * event)
{
  sql_print_information(
			"%s audit_notify called",
			log_prefix, MYSQL_AUDIT_PLUGIN_VERSION);
}

/*
  Plugin descriptor
*/
//in 5.5 we use the AUDIT plugin interface. In 5.1 we just use the general DAEMON plugin



static int plugin_type = MYSQL_DAEMON_PLUGIN;
static struct st_mysql_daemon audit_plugin =
  { MYSQL_DAEMON_INTERFACE_VERSION };




//some extern definitions which are not in include files
extern void log_slow_statement(THD *thd);
extern int mysql_execute_command(THD *thd);
#if MYSQL_VERSION_ID >= 50505
//in 5.5 builtins is named differently
#define mysqld_builtins mysql_mandatory_plugins
#endif
extern struct st_mysql_plugin *mysqld_builtins[];


void remove_hot_functions ()
{
  static bool patches_removed =false;
  if (patches_removed) return;

  void * target_function = (void *) log_slow_statement;
  remove_hot_patch_function(target_function,
			    (void*) trampoline_log_slow_statement, trampoline_log_slow_statement_size, true, log_prefix);
#if MYSQL_VERSION_ID < 50505
  target_function = (void *) check_user;
  remove_hot_patch_function(target_function,
			    (void*) trampoline_check_user, trampoline_check_user_size, true, log_prefix);
#else
  target_function = (void *) acl_authenticate;
  remove_hot_patch_function(target_function,
			    (void*) trampoline_acl_authenticate, trampoline_acl_authenticate_size, true, log_prefix);
#endif	

#if MYSQL_VERSION_ID > 50505
  target_function = (void *)*(bool (*)(THD *thd, TABLE_LIST **start, uint *counter, uint flags,
				       Prelocking_strategy *prelocking_strategy)) &open_tables;
  remove_hot_patch_function(target_function,
			    (void*) trampoline_open_tables, trampoline_open_tables_size, true, log_prefix);
#else
  target_function = (void *)*(int (*)(THD *thd, TABLE_LIST **start, uint *counter, uint flags)) &open_tables;
  remove_hot_patch_function(target_function,
			    (void*) trampoline_open_tables, trampoline_open_tables_size, true, log_prefix);

#endif

  int (Query_cache::*pf_send_result_to_client)(THD *,char *, uint) = &Query_cache::send_result_to_client;		
  target_function = *(void **) &pf_send_result_to_client;
  remove_hot_patch_function(target_function,
			    (void*) trampoline_send_result_to_client, trampoline_send_result_to_client_size, true, log_prefix);		


  remove_hot_patch_function((void*) check_table_access,
			    (void*) trampoline_check_table_access,
			    trampoline_check_table_access_size, true, log_prefix);	
  remove_hot_patch_function((void*)mysql_execute_command,
			    (void*) trampoline_mysql_execute_command, 
			    trampoline_mysql_execute_size, true, log_prefix);



}

int is_remove_patches (ThdSesData *pThdData)
{	


  const char *cmd = pThdData->getCmdName();
  const char *sUninstallPlugin = "uninstall_plugin";
  LEX *pLex = Audit_formatter::thd_lex(pThdData->getTHD());
  if (pThdData->getTHD() && pLex!=NULL && strncasecmp (cmd,sUninstallPlugin ,strlen (sUninstallPlugin))==0  ) 
    {
      LEX_STRING Lex_comment = *(LEX_STRING*)(((unsigned char *) pLex) + Audit_formatter::thd_offsets.lex_comment);
      if (strncasecmp(Lex_comment.str, "AUDIT", 5) == 0)
	{
	  if (!uninstall_plugin_enable)
	    {
		
	      my_message (ER_NOT_ALLOWED_COMMAND,"Uninstall AUDIT plugin disabled",MYF(0));
	      return 2;
	    }
	  Audit_handler::stop_all();
	  remove_hot_functions ();
	  return 1;
	}
    }
  return 0;
}

/*
 * Over ride functions for hot patch + audit. We call our audit function
 * after the execute command so all tables are resolved.
 */
static int audit_mysql_execute_command(THD *thd) 
{
  bool firstTime = false;
  THDPRINTED *pThdPrintedList = GetThdPrintedList (thd);
  if (pThdPrintedList)
    {
      if (pThdPrintedList->cur_index < (MAX_NUM_QUEUE_ELEM -1)  )
        {
	  pThdPrintedList->cur_index ++;
	  pThdPrintedList->is_thd_printed_queue[pThdPrintedList->cur_index] =0;
        }
    }
  else
    {
      firstTime = true;
      pThdPrintedList = (THDPRINTED *) thd_alloc (thd, sizeof (THDPRINTED));
      if (pThdPrintedList) 
	{
	  memset (pThdPrintedList, 0, sizeof (THDPRINTED));
	  //pThdPrintedList->cur_index = 0;
	  THDVAR(thd,is_thd_printed_list) = (ulong) pThdPrintedList;
	}
    }
  ThdSesData thd_data (thd);
  const char *cmd = thd_data.getCmdName();
  if (strcasestr (cmd,"alter") !=NULL ||  strcasestr (cmd,"drop") !=NULL || strcasestr (cmd, "create") !=NULL ||  strcasestr (cmd, "truncate") !=NULL ||  strcasestr (cmd, "rename") !=NULL)
    {
      audit(&thd_data);
    }
  int res;
  if(thd_killed(thd))
    {
      res = 1;
    }
  else
    {
      switch (is_remove_patches(&thd_data))
        {
        case 1:
	  //hot patch function were removed and we call the real execute (restored)
	  res = mysql_execute_command(thd);
	  break;
        case 2:
	  //denied uninstall  plugin
	  res = 1;
	  break;
        default:
	  //everything else
	  res = trampoline_mysql_execute_command(thd);
        }
    }
  audit(&thd_data);
  if (pThdPrintedList && pThdPrintedList->cur_index >0)
    {
      pThdPrintedList->cur_index --;
    }
  if(firstTime)
    {
      THDVAR(thd,is_thd_printed_list) = 0;
    }
  return res;

}



static void audit_log_slow_statement(THD * thd)
{
  trampoline_log_slow_statement(thd);
  //only audit non query events
  //query events are audited by mysql execute command
  if (Audit_formatter::thd_inst_command(thd) != COM_QUERY)
    {
      ThdSesData ThdData (thd);
      if (strcasestr (ThdData.getCmdName(), "show_fields")==NULL)
        {
	  audit(&ThdData);
        }
    }
}

static int audit_check_user(THD *thd, enum enum_server_command command,
			    const char *passwd, uint passwd_len, const char *db,
			    bool check_count)
{
  int res = trampoline_check_user (thd, command, passwd, passwd_len, db, check_count);
  ThdSesData ThdData (thd);
  audit (&ThdData);

  return (res);
}

static bool audit_acl_authenticate(THD *thd, uint connect_errors, uint com_change_user_pkt_len)
{
  bool res = trampoline_acl_authenticate (thd, connect_errors, com_change_user_pkt_len);
  ThdSesData ThdData (thd);
  audit (&ThdData);
  return (res);
}


static bool parse_thd_offsets_string (char *poffsets_string)
{
  
  char  offset_str [2048] = {0};
  char *poffset_str = offset_str;
  strncpy (poffset_str,poffsets_string,2048);
  char * comma_delimiter = strchr (poffset_str,',');
  int i =0;
  OFFSET *pOffset;
  size_t len = strlen (poffset_str);
  
  for (int j=0;j<len;j++)
    {
      if (!((poffset_str[j] >= '0' && poffset_str[j] <='9') || poffset_str[j] == ' ' || poffset_str[j] == ','))
	return false;
    }
  while (comma_delimiter !=NULL)
    {
      *comma_delimiter = '\0';
      pOffset = (OFFSET*)&Audit_formatter::thd_offsets.query_id + i;
      if ((size_t)pOffset- (size_t)&Audit_formatter::thd_offsets < sizeof (Audit_formatter::thd_offsets))
	{
	  sscanf (poffset_str, "%d", pOffset);
	}
      else 
	{
	  return false;
	}
      i++;
      poffset_str = comma_delimiter + 1;
      comma_delimiter = strchr (poffset_str,',');
    }
  if (poffset_str !=NULL)
    {
      pOffset = &Audit_formatter::thd_offsets.query_id + i;
      if ((size_t)pOffset- (size_t)&Audit_formatter::thd_offsets < sizeof (Audit_formatter::thd_offsets))
	{
	  sscanf (poffset_str, "%d", pOffset);
	}
      else
	{
	  return false;
	}
    }
  return true;
}

/**
 * Setup the offsets needs to extract data from THD.
 *
 * return 0 on success otherwise 1
 */
static int setup_offsets()
{
  DBUG_ENTER("setup_offsets");
  sql_print_information ("%s setup_offsets offsets_string %s",log_prefix, offsets_string);
	
  unsigned char digest[16] = {0};
  char digest_str [128] = {0};
  const ThdOffsets * offset;
  //if present the offset_string specified in my.cnf 
  //[mysqld]
  //audit_offsets=6200, 6264, 3672, 3944, 88, 2048

  if (validate_checksum_enable)
    {
      sql_print_information ("%s Audit validate checksum enabled. Mysqld %s ",log_prefix, my_progname);
      my_MD5Context context;
      my_MD5Init (&context);
      unsigned char * file_buff;
      MY_STAT stat_arg;
      File fd;
      if (my_stat(my_progname,&stat_arg,MYF(MY_WME)))
	{
	  if ((fd = my_open(my_progname,O_RDONLY, MYF(MY_WME))) > 0)
	    {
	      file_buff = (unsigned char*) my_malloc ((uint) stat_arg.st_size, MYF (MY_WME));
	      if (read(fd,(char*) file_buff,(uint) stat_arg.st_size) >= 0L)
		{
		  my_MD5Update (&context, file_buff, stat_arg.st_size);
		  my_MD5Final (digest, &context);
		}
	      (void) my_close(fd,MYF(0));
	      free (file_buff);
	    }
	}

      for (int j = 0; j < 16; j++) {
	sprintf(&(digest_str[j*2]), "%02x", digest[j]);
      }

    }

  if (offsets_string !=NULL) 
    {
      if (checksum_string != NULL && strlen(checksum_string) > 0) {
	if (strncasecmp(checksum_string, digest_str, 32)) {
	  // Checksum failed
	  sql_print_information("%s checksum check failed for %s, but found %s", log_prefix, checksum_string, digest_str);
	  DBUG_RETURN(1);
	}
      }
      
      char buf[32*1024] = {0};
      THD * thd = (THD *)buf;
      const my_thread_id test_val = 123456;

      if (parse_thd_offsets_string (offsets_string)) 
	{
	  sql_print_information ("%s setup_offsets Audit_formatter::thd_offsets values: %d %d %d %d %d %d ", log_prefix,
				 Audit_formatter::thd_offsets.query_id,
				 Audit_formatter::thd_offsets.thread_id,
				 Audit_formatter::thd_offsets.main_security_ctx, 
				 Audit_formatter::thd_offsets.command,
				 Audit_formatter::thd_offsets.lex,
				 Audit_formatter::thd_offsets.lex_comment);

	  (*(my_thread_id *) (((char *) thd)+ Audit_formatter::thd_offsets.thread_id)) = test_val;
	  my_thread_id res= thd_get_thread_id(thd);
	  if (res != test_val)
	    {

	      sql_print_error("%s thread id check fails with value: %lu. Skipping offest.", log_prefix,  res);
	      DBUG_RETURN(1);
	    }
	}
      else
	{
	  sql_print_error("%s Audit offsets parser error. Skipping offest.", log_prefix);
	  DBUG_RETURN(1);
	}
      DBUG_RETURN(0);
      //exit from function 
    }
	
  size_t arr_size = (sizeof(thd_offsets_arr) / sizeof(thd_offsets_arr[0]));
  //iterate and search for the first offset which matches the version

  //if present in my.cnf
  //[mysqld]
  //audit_validate_checksum=1
  //plugin-load=AUDIT=libaudit_plugin.so

  bool bCheckSumValidation = false;
  for(int i=0; i < arr_size; i++)
    {
        
      offset = thd_offsets_arr + i;
      //if present in my.cnf
      //[mysqld]
      //audit_validate_checksum=1
      //plugin-load=AUDIT=libaudit_plugin.so
      if (validate_checksum_enable && strlen (offset->md5digest) >0)
	{
	  bCheckSumValidation = true;
	  int kd=0;
	  if (!strncasecmp(digest_str, offset->md5digest, 32)) {
	      sql_print_information ("%s Checksum is %s verified", log_prefix, digest_str);
	      sql_print_information("%s Using offsets from offset version: %s", log_prefix, offset->version);
	      Audit_formatter::thd_offsets = *offset;
	      DBUG_RETURN(0);
	      //return 
	    }

	}

      //if present in my.cnf
      //[mysqld]
      //audit_validate_checksum=0
      //plugin-load=AUDIT=libaudit_plugin.so
      if(!validate_checksum_enable  && (strstr(server_version, offset->version)))
        {
	  //check that offsets are actually correct. We use a buff of memory as a dummy THD (32K is high enough)
	  char buf[32*1024] = {0};
	  THD * thd = (THD *)buf;
	  //sanity check that offsets match
	  //we can also consider using secutiry context function to do some sanity checks
	  //  char buffer[2048];
	  //  thd_security_context(thd, buffer, 2048, 2000);
	  //  fprintf(log_file, "info from security context: %s\n", buffer);
	  //we set the thread id to a value using the offset and then check that the value matches what thd_get_thread_id returns

	  unsigned long inst_thread_id = Audit_formatter::thd_inst_thread_id(thd);
	  const my_thread_id test_val = 123456;
	  (*(my_thread_id *) (((char *) thd)+ offset->thread_id)) = test_val;
	  my_thread_id res= thd_get_thread_id(thd);
	  if (res != test_val)
            {
	      sql_print_error(
			      "%s Offsets version: %s match server version: %s but thread id check fails with value: %lu. Skipping offest.",
			      log_prefix, offset->version, server_version, res);
            }
	  else
            {
	      sql_print_information("%s Using offsets from offset version: %s", log_prefix, offset->version);
	      Audit_formatter::thd_offsets = *offset;

	      DBUG_RETURN(0);
            }

        }
    }
	
  sql_print_information("%s Couldn't find proper THD offsets for: %s", log_prefix, server_version);
  DBUG_RETURN(1);
}


const char * retrieve_command (THD * thd)
{
  const char *cmd = NULL;
  
  int command = Audit_formatter::thd_inst_command(thd);
  if (command < 0 || command > COM_END)
    {
      command = COM_END;
    }
  const int sql_command = thd_sql_command(thd);
  if (sql_command >=0 && sql_command <= (MAX_COM_STATUS_VARS_RECORDS -1) )
    {
      cmd = com_status_vars_array[sql_command + 1].name;
    }
  if(!cmd)
    {
      cmd = command_name[command].str;
    }
  Security_context * sctx = Audit_formatter::thd_inst_main_security_ctx(thd);
  if (strcmp (cmd, "Connect") ==0 && (sctx->priv_user == NULL || *sctx->priv_user == 0x0))
    {
      cmd = "Failed Login";				
    }
  return cmd;
}

static int set_com_status_vars_array ()
{
  DBUG_ENTER("set_com_status_vars_array");
  SHOW_VAR *com_status_vars;
  int sv_idx =0;
  while (strcmp (status_vars[sv_idx].name,"Com") !=0 && status_vars[sv_idx].name != NullS)
    {
      sv_idx ++;
    }
  if (strcmp (status_vars[sv_idx].name,"Com")==0)
    {
      int status_vars_index =0;
      com_status_vars = (SHOW_VAR*)status_vars[sv_idx].value;
      size_t initial_offset = (size_t) com_status_vars[0].value;
      while  (com_status_vars[status_vars_index].name != NullS)
        {
	  int sql_command_idx = (com_status_vars[status_vars_index].value - (char*) (initial_offset)) / sizeof (ulong);
	  if (sql_command_idx >=0 && sql_command_idx < MAX_COM_STATUS_VARS_RECORDS)
            {
	      com_status_vars_array [sql_command_idx].name = com_status_vars[status_vars_index].name;
	      com_status_vars_array [sql_command_idx].type = com_status_vars[status_vars_index].type;
	      com_status_vars_array [sql_command_idx].value = com_status_vars[status_vars_index].value;
            }
	  else
            {
	      sql_print_error("%s Failed sql_command_idx [%d] is out of bounds. Plugin Init failed.",
			      log_prefix, sql_command_idx);
	      DBUG_RETURN (1);
            }
	  status_vars_index ++;
        }
      
    }
  else
    {
      sql_print_error("%s Failed looking up 'Com' entry in status_vars. Plugin Init failed.",
		      log_prefix);
      DBUG_RETURN (1);
    }
  DBUG_RETURN (0);
}

static int string_to_array (const void *save, void *array, int rows, int length)
{

  const char* save_string;
  save_string = *static_cast<const char*const*>(save);
  char* string_array;
  string_array = (char *) array;

  int r =0;
  if (save_string !=NULL) {
    int p = 0;
    for (int i = 0; save_string[i] != '\0'; i++) {
      // consider space and tab and comma to be separators
      // strings of multiple of them will be only a single separator
      if (save_string[i] == ' ' || save_string[i] == '\t' || save_string[i] == ',') {
	if (p > 0) {
	  string_array[r * length + p ] = '\0';
	  p = 0;
	  r++;
	  if (r == (rows - 1)) {
	    break;
	  }
	}
      }
      // otherwise copy the character over
      else {
	string_array[r * length + p] = tolower(save_string[i]);
	p++;
      }
    }
    // if we have copied chars to the current row, then terminate the string and
    // go to the next row.
    if (p > 0) {
      string_array[r * length + p] = '\0';
      r++;
    }
    // now terminate the list
    string_array[r * length + 0] = '\0';
  }

  return r;
}

/*
  Initialize the daemon plugin installation.

  SYNOPSIS
  audit_plugin_init()

  RETURN VALUE
  0                    success
  1                    failure
*/

static int audit_plugin_init(void *p)
{

  DBUG_ENTER("audit_plugin_init");

  sql_print_information(
			"%s starting up. Version: %s, Revision: %s. AUDIT plugin interface version: %d. MySQL Server version: %s.",
			log_prefix, MYSQL_AUDIT_PLUGIN_VERSION,
			MYSQL_AUDIT_PLUGIN_REVISION, audit_plugin.interface_version >> 8,
			server_version);
  //setup our offsets.
  if(setup_offsets() != 0)
    {
      DBUG_RETURN(1);
    }

  // setup any values from my.cnf
  if (delay_cmds_string != NULL) {
    num_delay_cmds = string_to_array(&delay_cmds_string, delay_cmds_array, SQLCOM_END + 2, MAX_COMMAND_CHAR_NUMBERS);
    sql_print_information("%s Set num_delay_cmds: %d", log_prefix, num_delay_cmds);
  }
  if (record_cmds_string != NULL) {
    num_record_cmds = string_to_array(&record_cmds_string, record_cmds_array, SQLCOM_END + 2, MAX_COMMAND_CHAR_NUMBERS);
    sql_print_information("%s Set num_record_cmds: %d", log_prefix, num_record_cmds);
  }
  if (record_objs_string != NULL) {
    num_record_objs = string_to_array(&record_objs_string, record_objs_array, MAX_NUM_OBJECT_ELEM + 2, MAX_OBJECT_CHAR_NUMBERS);
    sql_print_information("%s Set num_record_objs: %d", log_prefix, num_record_objs);
  }
   
  //setup audit handlers (initially disabled)
  int res = json_file_handler.init(&json_formatter);
  if (res != 0)
    {
      sql_print_error(
		      "%s unable to init json file handler. res: %d. Aborting.",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  res = json_socket_handler.init(&json_formatter);
  if (res != 0)
    {
      sql_print_error(
		      "%s unable to init json socket handler. res: %d. Aborting.",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  //enable according to what we have in *file_handler_enable (this is set accordingly by sysvar functionality)
  json_file_handler.set_enable(json_file_handler_enable);
  json_socket_handler.set_enable(json_socket_handler_enable);
  Audit_handler::m_audit_handler_list[Audit_handler::BSON_FILE_HANDLER]
    = &json_file_handler;
  Audit_handler::m_audit_handler_list[Audit_handler::BSON_SOCKET_HANDLER]
    = &json_socket_handler;

  //hot patch functions 
  void * target_function = (void *) log_slow_statement;
  res = hot_patch_function(target_function, (void*) audit_log_slow_statement,
			   (void*) trampoline_log_slow_statement, &trampoline_log_slow_statement_size, true, log_prefix);
  if (res != 0)
    {
      //hot patch failed.
      sql_print_error("%s unable to patch log slow. res: %d. Aborting.",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  sql_print_information(
			"%s hot patch log slow complete. Trampoline size: %u.",
			log_prefix, trampoline_log_slow_statement_size);
  target_function = (void *) mysql_execute_command;
  res = hot_patch_function(target_function,
			   (void*) audit_mysql_execute_command,
			   (void*) trampoline_mysql_execute_command, &trampoline_mysql_execute_size, true, log_prefix);
  if (res != 0)
    {
      //hot patch failed.
      sql_print_error(
		      "%s unable to patch mysql execute. res: %d. Aborting.\n",
		      log_prefix, res);
      DBUG_RETURN(1);
    }

  sql_print_information(
			"%s hot patch mysql execute. Trampoline size: %u.",
			log_prefix, trampoline_mysql_execute_size);

 
#if MYSQL_VERSION_ID < 50505				
  target_function = (void *) check_user;
  res = hot_patch_function(target_function,
			   (void*) audit_check_user,
			   (void*) trampoline_check_user, &trampoline_check_user_size, true, log_prefix);
  if (res != 0)
    {
      //hot patch failed.
      sql_print_error(
		      "%s unable to patch check_user. res: %d. Aborting.\n",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  sql_print_information(
			"%s hot patch check_user. Trampoline size: %u.",
			log_prefix, trampoline_check_user_size);	
#else
  target_function = (void *) acl_authenticate;
  res = hot_patch_function(target_function,
			   (void*) audit_acl_authenticate,
			   (void*) trampoline_acl_authenticate, &trampoline_acl_authenticate_size, true, log_prefix);
  if (res != 0)
    {
      //hot patch failed.
      sql_print_error(
		      "%s unable to patch acl_authenticate. res: %d. Aborting.\n",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  sql_print_information(
			"%s hot patch acl_authenticate. Trampoline size: %u.",
			log_prefix, trampoline_acl_authenticate_size);	

	
#endif	
  int (Query_cache::*pf_send_result_to_client)(THD *,char *, uint) = &Query_cache::send_result_to_client;
  target_function = *(void **)  &pf_send_result_to_client;
	
  res = hot_patch_function(target_function,
			   (void*)audit_send_result_to_client,
			   (void*)trampoline_send_result_to_client, &trampoline_send_result_to_client_size, true, log_prefix);
  if (res != 0)
    {
      //hot patch failed.
      sql_print_error(
		      "%s unable to patch send_result_to_client. res: %d. Aborting.\n",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  sql_print_information(
			"%s hot patch send_result_to_client. Trampoline size: %u.",
			log_prefix, trampoline_send_result_to_client_size);	
  target_function = (void*) check_table_access;
  res = hot_patch_function (target_function, (void*) audit_check_table_access, (void *) trampoline_check_table_access, &trampoline_check_table_access_size,true, log_prefix); 
  if (res !=0)
    {
      //hot patch failed.
      sql_print_error(
		      "%s unable to patch check_table_access. res: %d. Aborting.\n",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  sql_print_information(
			"%s hot patch check_table_access. Trampoline size: %u.",
			log_prefix, trampoline_check_table_access_size);	
 
#if MYSQL_VERSION_ID > 50505				
  target_function = (void *)*(bool (*)(THD *thd, TABLE_LIST **start, uint *counter, uint flags,
				       Prelocking_strategy *prelocking_strategy)) &open_tables;
  res = hot_patch_function(target_function,
			   (void*) audit_open_tables,
			   (void*) trampoline_open_tables, &trampoline_open_tables_size, true, log_prefix);
  if (res != 0)
    {
      //hot patch failed.
      sql_print_error(
		      "%s unable to patch open_tables. res: %d. Aborting.\n",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  sql_print_information(
			"%s hot patch open_tables address %p. Trampoline size: %ud.",
			log_prefix, *(bool (*)(THD *thd, TABLE_LIST **start, uint *counter, uint flags,
					       Prelocking_strategy *prelocking_strategy)) &open_tables, 
			trampoline_open_tables_size);	
#else
  target_function = (void *)*(int (*)(THD *thd, TABLE_LIST **start, uint *counter, uint flags)) &open_tables;
  res = hot_patch_function(target_function,
			   (void*) audit_open_tables,
			   (void*) trampoline_open_tables, &trampoline_open_tables_size, true, log_prefix);
  if (res != 0)
    {
      //hot patch failed.
      sql_print_error(
		      "%s unable to patch open_tables. res: %d. Aborting.\n",
		      log_prefix, res);
      DBUG_RETURN(1);
    }
  sql_print_information(
			"%s hot patch open_tables address %p. Trampoline size: %ud.",
			log_prefix, *(bool (*)(THD *thd, TABLE_LIST **start, uint *counter, uint flags)) &open_tables, 
			trampoline_open_tables_size);	
#endif
  if (set_com_status_vars_array () !=0)
    {
      DBUG_RETURN(1);
    }
  DBUG_RETURN(0);
}

/*
  Terminate the daemon example at server shutdown or plugin deinstallation.

  SYNOPSIS
  audit_plugin_deinit()
  Does nothing.

  RETURN VALUE
  0                    success
  1                    failure (cannot happen)

*/

static int audit_plugin_deinit(void *p)
{
  DBUG_ENTER("audit_plugin_deinit");
  remove_hot_functions();
  //disable handlers
  DBUG_RETURN(0);
}

/*
  Plugin status variables for SHOW STATUS
*/

static struct st_mysql_show_var audit_status[] =
  {
    { "AUDIT_version",
      (char *) MYSQL_AUDIT_PLUGIN_VERSION "-" MYSQL_AUDIT_PLUGIN_REVISION,
      SHOW_CHAR },
    { "AUDIT_protocol_version",
      (char *) "1.0",
      SHOW_CHAR },
    //{"called",     (char *)&number_of_calls, SHOW_LONG},
    { 0, 0, (enum_mysql_show_type) 0 } };



static void json_log_file_enable(THD *thd, struct st_mysql_sys_var *var,
				 void *tgt, const void *save)
{
  json_file_handler_enable = *(my_bool *) save ? TRUE : FALSE;
  if(json_file_handler.is_init())
    {
      json_file_handler.set_enable(json_file_handler_enable);
    }
}


static void json_log_socket_enable(THD *thd, struct st_mysql_sys_var *var,
				   void *tgt, const void *save)
{
  json_socket_handler_enable = *(my_bool *) save ? TRUE : FALSE;
  if(json_socket_handler.is_init())
    {
      json_socket_handler.set_enable(json_socket_handler_enable);
    }
}


static void delay_cmds_string_update (THD *thd, struct st_mysql_sys_var *var,
				       void *tgt, const void *save)
{
  // FIXME: This might leak memory for each update, but prevents a crash when original settings were in my.cnf
  *(char **)tgt= my_strdup(*(char **) save, MYF(0));
  num_delay_cmds = string_to_array(save, delay_cmds_array, SQLCOM_END + 2, MAX_COMMAND_CHAR_NUMBERS);
  sql_print_information("%s Set num_delay_cmds: %d", log_prefix, num_delay_cmds);
}

static void record_cmds_string_update (THD *thd, struct st_mysql_sys_var *var,
				       void *tgt, const void *save)
{
  // FIXME: This might leak memory for each update, but prevents a crash when original settings were in my.cnf
  *(char **)tgt= my_strdup(*(char **) save, MYF(0));
  num_record_cmds = string_to_array(save, record_cmds_array, SQLCOM_END + 2, MAX_COMMAND_CHAR_NUMBERS);
  sql_print_information("%s Set num_record_cmds: %d", log_prefix, num_record_cmds);
}

static void record_objs_string_update (THD *thd, struct st_mysql_sys_var *var,
				       void *tgt, const void *save)
{
  // FIXME: This might leak memory for each update, but prevents a crash when original settings were in my.cnf
  *(char **)tgt= my_strdup(*(char **) save, MYF(0));
  num_record_objs = string_to_array(save, record_objs_array, MAX_NUM_OBJECT_ELEM + 2, MAX_OBJECT_CHAR_NUMBERS);
  sql_print_information("%s Set num_record_objs: %d", log_prefix, num_record_objs);
}

//setup sysvars which update directly the relevant plugins


static MYSQL_SYSVAR_STR(json_log_file, json_file_handler.m_filename,
			PLUGIN_VAR_RQCMDARG | PLUGIN_VAR_MEMALLOC,
			"AUDIT plugin json log file name",
			NULL, NULL, "mysql-audit.json");

static MYSQL_SYSVAR_UINT(json_file_sync, json_file_handler.m_sync_period,
			 PLUGIN_VAR_RQCMDARG,
			 "AUDIT plugin json log file sync period. If the value of this variable is greater than 0, audit log will sync to disk after every audit_json_file_sync writes.",
			 NULL, NULL, 0, 0, UINT_MAX32, 0);

static MYSQL_SYSVAR_BOOL(json_file, json_file_handler_enable,
			 PLUGIN_VAR_RQCMDARG,
			 "AUDIT plugin json log file Enable|Disable", NULL, json_log_file_enable, 0);


static MYSQL_SYSVAR_STR(json_socket_name, json_socket_handler.m_sockname,
			PLUGIN_VAR_RQCMDARG | PLUGIN_VAR_MEMALLOC,
			"AUDIT plugin json log unix socket name",
			NULL, NULL, "/tmp/mysql-audit.json.sock");

static MYSQL_SYSVAR_STR(offsets, offsets_string,
			PLUGIN_VAR_RQCMDARG | PLUGIN_VAR_READONLY  | PLUGIN_VAR_MEMALLOC,
			"AUDIT plugin offsets. Comma separated list of offsets to use for extracting data",
			NULL, NULL, NULL);

static MYSQL_SYSVAR_STR(checksum, checksum_string,
			PLUGIN_VAR_RQCMDARG | PLUGIN_VAR_READONLY  | PLUGIN_VAR_MEMALLOC,
			"AUDIT plugin checksum. Checksum for mysqld corresponding to offsets",
			NULL, NULL, "");

static MYSQL_SYSVAR_BOOL(uninstall_plugin, uninstall_plugin_enable,
			 PLUGIN_VAR_RQCMDARG | PLUGIN_VAR_READONLY ,
			 "AUDIT uninstall plugin Enable|Disable. Default disabled. If disabled attempts to uninstall the AUDIT plugin via the sql UNINSTALL command will fail.", NULL, NULL, 0);


static MYSQL_SYSVAR_BOOL(validate_checksum, validate_checksum_enable,
			 PLUGIN_VAR_RQCMDARG | PLUGIN_VAR_READONLY ,
			 "AUDIT plugin binary checksum validation Enable|Disable", NULL, NULL, 1);

static MYSQL_SYSVAR_BOOL(json_socket, json_socket_handler_enable,
			 PLUGIN_VAR_RQCMDARG,
			 "AUDIT plugin json log unix socket Enable|Disable", NULL, json_log_socket_enable, 0);

static MYSQL_SYSVAR_INT(delay_ms, delay_ms_val,
			PLUGIN_VAR_RQCMDARG,
			"AUDIT plugin delay in miliseconds. Delay amount injection. If 0 or negative then delay is disabled.",
			NULL, NULL, 0, 0, INT_MAX32, 0);

static MYSQL_SYSVAR_STR(delay_cmds, delay_cmds_string,
			PLUGIN_VAR_RQCMDARG,
			"AUDIT plugin delay commands to match against comma separated. If empty then delay is disabled.",
			NULL, delay_cmds_string_update, NULL);

static MYSQL_SYSVAR_STR(record_cmds, record_cmds_string,
			PLUGIN_VAR_RQCMDARG,
			"AUDIT plugin commands to record, comma separated",
			NULL, record_cmds_string_update, NULL);

static MYSQL_SYSVAR_STR(record_objs, record_objs_string,
			PLUGIN_VAR_RQCMDARG,
			"AUDIT plugin objects to record, comma separated",
			NULL, record_objs_string_update, NULL);

/*
 * Plugin system vars
 */
static struct st_mysql_sys_var* audit_system_variables[] =
  {
    MYSQL_SYSVAR(json_log_file),
    MYSQL_SYSVAR(json_file_sync),
    MYSQL_SYSVAR(json_file),
    MYSQL_SYSVAR(uninstall_plugin),
    MYSQL_SYSVAR(validate_checksum),
    MYSQL_SYSVAR(json_socket_name),
    MYSQL_SYSVAR(offsets),
    MYSQL_SYSVAR(json_socket),
    MYSQL_SYSVAR(query_cache_table_list),
    MYSQL_SYSVAR(is_thd_printed_list),
    MYSQL_SYSVAR(delay_ms),
    MYSQL_SYSVAR(delay_cmds),
    MYSQL_SYSVAR(record_cmds),
    MYSQL_SYSVAR(record_objs),
    MYSQL_SYSVAR(checksum),
    NULL };

//declare our plugin
mysql_declare_plugin(audit_plugin)
{
  plugin_type,
    &audit_plugin,
    "AUDIT",
    "McAfee Inc",
    "AUDIT plugin, creates a file mysql-audit.log to log activity",
    PLUGIN_LICENSE_GPL,
    audit_plugin_init, /* Plugin Init */
    audit_plugin_deinit, /* Plugin Deinit */
    0x0100 /* 1.0 */,
    audit_status, /* status variables                */
    audit_system_variables, /* system variables                */
    NULL /* config options                  */
    }
mysql_declare_plugin_end;

#if MYSQL_VERSION_ID < 50505
/**
 * DLL constructor method.
 * We set here the audit plugin version to the same as the first built in plugin.
 * This is so we can have a single lib for all versions (needed in 5.1)
 */
extern "C" void __attribute__ ((constructor)) audit_plugin_so_init(void)
{
  if (mysqld_builtins && mysqld_builtins[0])
    {
      audit_plugin.interface_version = *(int *) mysqld_builtins[0]->info;
      sql_print_information("%s Set interface version to: %d (%d)",
			    log_prefix, audit_plugin.interface_version,
			    audit_plugin.interface_version >> 8);
    }
  else
    {
      sql_print_error(
		      "%s mysqld_builtins are null. Plugin will not load unless the mysql version is: %d. \n",
		      log_prefix, audit_plugin.interface_version >> 8);
    }
}
#else
extern struct st_mysql_plugin *mysql_mandatory_plugins[];
extern "C"  void __attribute__ ((constructor)) audit_plugin_so_init(void)
{
  
  
  audit_plugin.interface_version = *(int *) mysql_mandatory_plugins[0]->info;
  sql_print_information("%s Set interface version to: %d (%d)",
			log_prefix, audit_plugin.interface_version,
			audit_plugin.interface_version >> 8);

}
#endif
