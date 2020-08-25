//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: ecd89904ea2154713a01c6c76193cb8b                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.625267592952);
    msg.setSource(3015U);
    msg.setSourceEntity(234U);
    msg.setDestination(52910U);
    msg.setDestinationEntity(164U);
    msg.state = 90U;
    msg.flags = 43U;
    msg.description.assign("ZLEZQWSBKSLKTGWLGYEHVSYFEFFLVZUXERNXOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.701873274371);
    msg.setSource(31654U);
    msg.setSourceEntity(141U);
    msg.setDestination(45410U);
    msg.setDestinationEntity(49U);
    msg.state = 148U;
    msg.flags = 40U;
    msg.description.assign("VXFPIALQFUZTWGNGEAHYDPPVCAZTYZQUWIDCEGKLQBEHISK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.333610573444);
    msg.setSource(64789U);
    msg.setSourceEntity(175U);
    msg.setDestination(8117U);
    msg.setDestinationEntity(95U);
    msg.state = 112U;
    msg.flags = 117U;
    msg.description.assign("KOIKOHESQYNHXEIFJZJPGYUBXKHWBCCAKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.578854453175);
    msg.setSource(5260U);
    msg.setSourceEntity(111U);
    msg.setDestination(34428U);
    msg.setDestinationEntity(31U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.936933899522);
    msg.setSource(29510U);
    msg.setSourceEntity(109U);
    msg.setDestination(49314U);
    msg.setDestinationEntity(205U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.704126213254);
    msg.setSource(11517U);
    msg.setSourceEntity(24U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.696315407943);
    msg.setSource(37793U);
    msg.setSourceEntity(49U);
    msg.setDestination(44373U);
    msg.setDestinationEntity(121U);
    msg.id = 176U;
    msg.label.assign("FGBSBWENYQPSVTSGJYSIUNKUEHAWSCENVIZLKPALDWOPJJWZDREKTQCLZTDGVDNCTXTWBZHWSCMHYNFVNRSUDAOUHEKJTB");
    msg.component.assign("ACYJQKBEHUDJTDEYLQQZQPNXJRBCGYSPEIHUWIRQMLYJRWOKTHBMATPUFQBRAAKIEFNEMVPBSKLMJYNGWJNCOBHSOBFUWWMCJEILXSWKIAZRFDGYYEZNXMYAOKGGZKGSYQCDEPITALXAVXSOBFXHSJRSTVKHMVDRZTCWDHDLMAGVUXAHLJQPNCUBFPQUPDJDKVNNVDORTWENSRNGMHMEOTRBFOIZYLW");
    msg.act_time = 23064U;
    msg.deact_time = 33641U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.694525986629);
    msg.setSource(10653U);
    msg.setSourceEntity(196U);
    msg.setDestination(3709U);
    msg.setDestinationEntity(20U);
    msg.id = 145U;
    msg.label.assign("GXSEQBSPWZXKTYXQGNVNKDBAVHEWDZIOXHGQURLJQPQPWPHWZFPTTRBUMRACCNYJNOZHJTARAKKFMIVLYSDNLUCGUMJWDIYTXUWYIQYXQMLHSZKBXCNIEVLSSFCJTHTSGJBQVMCRUDSHAFAEWUMHTJOLEKWWGCMNZBRBAQP");
    msg.component.assign("GQCJIWXZVWXFBHSNU");
    msg.act_time = 44765U;
    msg.deact_time = 60304U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.314973676257);
    msg.setSource(3437U);
    msg.setSourceEntity(39U);
    msg.setDestination(1104U);
    msg.setDestinationEntity(235U);
    msg.id = 119U;
    msg.label.assign("CKHBLDWGGXJJVDIGYSUYOOEJWGNZPKQPJYOCQNIACULJTDIUKIHONRXJMBHZSLKHZLPGSSCOGHSNXONNYUCFAGMXRVPSEXMOSWDHMWNSVEPPMBUDUHFAILMELYKWGKFEHOQIKFAZVPBMAURFDKTCFBWUBZEXOPEBVFDZCNQXVQUYQTYATEMRRDQCTXFAPBYLSGTVCNMGFLVYJXZZLDRABUIRLOYWJTTRQSBFEKI");
    msg.component.assign("IBXDKICEMCXVTLOHCRSOBIHTVBPDKATQVPZFKJUUZZLPEVWGMYJ");
    msg.act_time = 48973U;
    msg.deact_time = 1639U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.622353701789);
    msg.setSource(43898U);
    msg.setSourceEntity(184U);
    msg.setDestination(5587U);
    msg.setDestinationEntity(254U);
    msg.id = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.0519504089999);
    msg.setSource(35258U);
    msg.setSourceEntity(135U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(214U);
    msg.id = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.927316671223);
    msg.setSource(27675U);
    msg.setSourceEntity(239U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(235U);
    msg.id = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.893776691639);
    msg.setSource(53174U);
    msg.setSourceEntity(6U);
    msg.setDestination(2980U);
    msg.setDestinationEntity(131U);
    msg.op = 116U;
    msg.list.assign("CEGFUEBSLRIXQOQBSFXIHUJZYMCKXVYAIQMXRTUNTEXBOSEGTPELBZWKWJKONNZSDQLKJIFVOAPCNWFPROQUHGKRVZTIUPZNJUDGMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.269283312258);
    msg.setSource(24521U);
    msg.setSourceEntity(198U);
    msg.setDestination(63156U);
    msg.setDestinationEntity(220U);
    msg.op = 213U;
    msg.list.assign("EEULGDXTLGSLBVPHDVEAAUOIUIXHJNCCRAZFJILVBQBIYQOCKRAGASJDJVSIUTMNYPHLYCQSAMRCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.561609876198);
    msg.setSource(2661U);
    msg.setSourceEntity(179U);
    msg.setDestination(64288U);
    msg.setDestinationEntity(192U);
    msg.op = 171U;
    msg.list.assign("KEXYSHMEFRLYVTSGTTBDATZVWQTMRFVZUJBFPNBPLWWJYJXFLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.0434584405759);
    msg.setSource(56292U);
    msg.setSourceEntity(194U);
    msg.setDestination(57980U);
    msg.setDestinationEntity(120U);
    msg.value = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.904064865839);
    msg.setSource(56139U);
    msg.setSourceEntity(35U);
    msg.setDestination(51239U);
    msg.setDestinationEntity(84U);
    msg.value = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.0479187552518);
    msg.setSource(18188U);
    msg.setSourceEntity(0U);
    msg.setDestination(42861U);
    msg.setDestinationEntity(227U);
    msg.value = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.0195763561029);
    msg.setSource(13131U);
    msg.setSourceEntity(216U);
    msg.setDestination(43808U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("CTHEYNJRLRSNTOUKFBTDPHRUCUVLWVSVZVXZMXVWOZYBWQOJKAXPMLCIMXUSBHPTWJWPPAVVAYWHCXJOBNZFKEMEZIADUWBFNDRBWMAGFPAGFIUJJBLUHPQYXCAZYPREOFHHUJGEHDEQOWVRRDQFYRYVUEOKGCSMSBSQTEHCMLIPOKNSJTTZKDPHFEFQQGIIGKRXLQLNKITUDCZJLKYDKIFANXQMYTCBXSRMGOLCDBAV");
    msg.message_id = 59222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.663441797169);
    msg.setSource(37217U);
    msg.setSourceEntity(50U);
    msg.setDestination(23906U);
    msg.setDestinationEntity(13U);
    msg.consumer.assign("SWEJPCNUUHWAVMQUYXTLHQYKSHRJPLOQKYBNTPFVLSKMMBVJJWSDVUQCRWQSTGKACRSBVZDRLJWUXCPDOLEKNITVGOQZUQNNOUFOYHWCEPRZGIDKCEJZHXDCLCERKIMLFTVEXGHFTABPAYBJFDOWSVTMKZULAVPEXBIEYPRCXHESMD");
    msg.message_id = 50841U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.985440646684);
    msg.setSource(28808U);
    msg.setSourceEntity(116U);
    msg.setDestination(54239U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("IQXYMUVBTXKQSFITGCLJYCFANDWREGIJMLUKDENOUVJQMKAXGTPWONFCHXPORHRMRMBGTCZRNITAKOVHHSHEMYPCNFMHDSPOPSWPFHTLVYAAYKPZKSEWZEYFZGZVBBDRVCEJLZJDEEULTNFDVVCGUQYNERUAHSIMRUPDNWDZUFLNHDTXHPGBYIOITFXSZISQBBWLVUVJCBAJXKWSEFLGYKOPXOORLKWRJQC");
    msg.message_id = 1025U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.492546838348);
    msg.setSource(12771U);
    msg.setSourceEntity(230U);
    msg.setDestination(30625U);
    msg.setDestinationEntity(82U);
    msg.type = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.937103702191);
    msg.setSource(40890U);
    msg.setSourceEntity(238U);
    msg.setDestination(43960U);
    msg.setDestinationEntity(9U);
    msg.type = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.708859214276);
    msg.setSource(22382U);
    msg.setSourceEntity(60U);
    msg.setDestination(55243U);
    msg.setDestinationEntity(71U);
    msg.type = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.859458706991);
    msg.setSource(8332U);
    msg.setSourceEntity(143U);
    msg.setDestination(6363U);
    msg.setDestinationEntity(1U);
    msg.op = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.166453412854);
    msg.setSource(47476U);
    msg.setSourceEntity(89U);
    msg.setDestination(20579U);
    msg.setDestinationEntity(27U);
    msg.op = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.250198738851);
    msg.setSource(57156U);
    msg.setSourceEntity(87U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(59U);
    msg.op = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.406093079259);
    msg.setSource(37U);
    msg.setSourceEntity(154U);
    msg.setDestination(55889U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 26U;
    msg.step_number = 150U;
    msg.step.assign("XLRPWKOZZRMZYRCCVNBRXJOQFLHNJWLRYVZTFEVQCSSKOWEBFLGYJIPNTUDUSNWICMHZQIQBPPZATAZLBCJXOQQKHEQUPDKYHRVRULYCWJASLMXXWHASHKPVDDBFGMUNOGJEYWGWBEFNDOJKENVFJKAV");
    msg.flags = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.676139377665);
    msg.setSource(35823U);
    msg.setSourceEntity(0U);
    msg.setDestination(8735U);
    msg.setDestinationEntity(77U);
    msg.total_steps = 35U;
    msg.step_number = 54U;
    msg.step.assign("QXXBYVCJVMKOMBSJGOXZHRDKECFVTLIETVWRNZQIAJAWYSOKOKIGEXMDZSYZRAHETIGDHBDLTAYXMOFUQ");
    msg.flags = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.667702733159);
    msg.setSource(241U);
    msg.setSourceEntity(158U);
    msg.setDestination(54046U);
    msg.setDestinationEntity(146U);
    msg.total_steps = 201U;
    msg.step_number = 201U;
    msg.step.assign("QCMCELMFELVSSQKPBJXBSCJIHUDVRZVZYTMLBJJBRYUPAIUFRNXPBAWOYUUXOKGAVHNCKZAURBFEFHZGGTVSHGCKPYXXNGQRXSPZDNSVTHHNJFSLLXZPVDMLONHSVAKYQUREIQWWVGDESXFUCQYJNWKRJAJEOTDLDEMRIBLHOURQWGYBNUOFCDTOVZGESOTJFIPLTFPEBYPMKZAOMNWQAYMCOPGMDEIKI");
    msg.flags = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.385488784677);
    msg.setSource(43554U);
    msg.setSourceEntity(69U);
    msg.setDestination(60122U);
    msg.setDestinationEntity(29U);
    msg.state = 176U;
    msg.error.assign("AKNINFRVKWXHJRLBQDQTQWHSEYXOJFSHBFIXXAYINYOAEKMSKBKANHDDZZPPQVSMXCBPQWDUBMIGEAPZLTNCMKTFYNUSQUVVYKVJGPGDZMMWJYFQMBOMXRBANSJUPYZTGAPSPHGDIWRBVECGTRHAUQKVQQNVEOWWFOSZFZCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.294204254234);
    msg.setSource(35018U);
    msg.setSourceEntity(78U);
    msg.setDestination(12040U);
    msg.setDestinationEntity(97U);
    msg.state = 77U;
    msg.error.assign("XSMRXHSJTNTSLQASBKDGCNEIHJUQXGWYGBZAODHMCQICLXEAMXARWUIRCBKJPVKKGXEVPDTHNQXHXAOWOWSGWRZLMZLUPVWLIORNKVEDOFHGUDMYRVYGLDTYLOEAQKAUSVOVZMSCDESPFCKURBZOQGZCLDUTBKJIHBZTJEALOPCVDXCKJSZUFLIAFNFWMHENTYIQYWJHUYWBJFPZVNGTRZFRKEUQMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.882212630191);
    msg.setSource(48268U);
    msg.setSourceEntity(25U);
    msg.setDestination(6795U);
    msg.setDestinationEntity(52U);
    msg.state = 31U;
    msg.error.assign("YKKQWWTQZQFYDOZOACRESCDYZPGEYLOBDAJJETZQFCPVABPLFUTCMVXJWWCZRFICHBBOACMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.209755256564);
    msg.setSource(12425U);
    msg.setSourceEntity(89U);
    msg.setDestination(43812U);
    msg.setDestinationEntity(42U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.604544994515);
    msg.setSource(16860U);
    msg.setSourceEntity(100U);
    msg.setDestination(46048U);
    msg.setDestinationEntity(253U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.469654494764);
    msg.setSource(50629U);
    msg.setSourceEntity(113U);
    msg.setDestination(22593U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.00829732001334);
    msg.setSource(6264U);
    msg.setSourceEntity(182U);
    msg.setDestination(55158U);
    msg.setDestinationEntity(18U);
    msg.op = 202U;
    msg.speed_min = 0.236792578655;
    msg.speed_max = 0.364209998311;
    msg.long_accel = 0.38527756855;
    msg.alt_max_msl = 0.513427310511;
    msg.dive_fraction_max = 0.674477947312;
    msg.climb_fraction_max = 0.0559270814238;
    msg.bank_max = 0.924091189407;
    msg.p_max = 0.919076176755;
    msg.pitch_min = 0.927648210909;
    msg.pitch_max = 0.548840470919;
    msg.q_max = 0.551112041178;
    msg.g_min = 0.592405939332;
    msg.g_max = 0.925401733264;
    msg.g_lat_max = 0.635050322248;
    msg.rpm_min = 0.0580656252158;
    msg.rpm_max = 0.753463348728;
    msg.rpm_rate_max = 0.124350010557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.589377385507);
    msg.setSource(17420U);
    msg.setSourceEntity(11U);
    msg.setDestination(63728U);
    msg.setDestinationEntity(100U);
    msg.op = 200U;
    msg.speed_min = 0.141633328858;
    msg.speed_max = 0.700071747188;
    msg.long_accel = 0.752326855864;
    msg.alt_max_msl = 0.0454822069326;
    msg.dive_fraction_max = 0.170875755933;
    msg.climb_fraction_max = 0.599829558709;
    msg.bank_max = 0.512638492194;
    msg.p_max = 0.946669308447;
    msg.pitch_min = 0.756986843568;
    msg.pitch_max = 0.586721274863;
    msg.q_max = 0.235248139167;
    msg.g_min = 0.587324465519;
    msg.g_max = 0.313161107025;
    msg.g_lat_max = 0.0300812360121;
    msg.rpm_min = 0.900489049005;
    msg.rpm_max = 0.431066069715;
    msg.rpm_rate_max = 0.448838441279;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.0360559003453);
    msg.setSource(43275U);
    msg.setSourceEntity(10U);
    msg.setDestination(4995U);
    msg.setDestinationEntity(156U);
    msg.op = 233U;
    msg.speed_min = 0.0458827556158;
    msg.speed_max = 0.423385164996;
    msg.long_accel = 0.136820324526;
    msg.alt_max_msl = 0.48890481873;
    msg.dive_fraction_max = 0.146855066677;
    msg.climb_fraction_max = 0.793965890361;
    msg.bank_max = 0.0598693723903;
    msg.p_max = 0.999062850674;
    msg.pitch_min = 0.865543397091;
    msg.pitch_max = 0.382085425397;
    msg.q_max = 0.490045936404;
    msg.g_min = 0.872127851514;
    msg.g_max = 0.790073431655;
    msg.g_lat_max = 0.980406788909;
    msg.rpm_min = 0.664362995631;
    msg.rpm_max = 0.0684908524507;
    msg.rpm_rate_max = 0.0666335906612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.460931853814);
    msg.setSource(60882U);
    msg.setSourceEntity(94U);
    msg.setDestination(4918U);
    msg.setDestinationEntity(8U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.500914488215);
    msg.setSource(65290U);
    msg.setSourceEntity(181U);
    msg.setDestination(20392U);
    msg.setDestinationEntity(80U);
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 107U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.897573806002);
    msg.setSource(37670U);
    msg.setSourceEntity(212U);
    msg.setDestination(5987U);
    msg.setDestinationEntity(136U);
    IMC::TeleoperationDone tmp_msg_0;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.691748609777);
    msg.setSource(57367U);
    msg.setSourceEntity(118U);
    msg.setDestination(61500U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.495401992925;
    msg.lon = 0.58382765844;
    msg.height = 0.0283104329307;
    msg.x = 0.0841565659608;
    msg.y = 0.951869363981;
    msg.z = 0.632820953836;
    msg.phi = 0.67827785211;
    msg.theta = 0.401377305238;
    msg.psi = 0.52358348073;
    msg.u = 0.874087201765;
    msg.v = 0.288714173668;
    msg.w = 0.443934707038;
    msg.p = 0.815516098284;
    msg.q = 0.493117338681;
    msg.r = 0.35166429872;
    msg.svx = 0.53078065507;
    msg.svy = 0.218907091302;
    msg.svz = 0.496577818477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.159837411213);
    msg.setSource(39050U);
    msg.setSourceEntity(156U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.234852090845;
    msg.lon = 0.105655784967;
    msg.height = 0.205827286434;
    msg.x = 0.567855534623;
    msg.y = 0.639373631963;
    msg.z = 0.722186789756;
    msg.phi = 0.276147697841;
    msg.theta = 0.463871516684;
    msg.psi = 0.193384627295;
    msg.u = 0.536020100539;
    msg.v = 0.248311538737;
    msg.w = 0.57686633657;
    msg.p = 0.841148814493;
    msg.q = 0.86142385644;
    msg.r = 0.609998406926;
    msg.svx = 0.183599880985;
    msg.svy = 0.539658717469;
    msg.svz = 0.113655828941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.148064031133);
    msg.setSource(7272U);
    msg.setSourceEntity(7U);
    msg.setDestination(45824U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.521534722386;
    msg.lon = 0.584747458807;
    msg.height = 0.971094938804;
    msg.x = 0.835163813272;
    msg.y = 0.948376237706;
    msg.z = 0.100676867387;
    msg.phi = 0.471958689706;
    msg.theta = 0.355013456875;
    msg.psi = 0.651703603093;
    msg.u = 0.0364505451933;
    msg.v = 0.693889639653;
    msg.w = 0.727873991347;
    msg.p = 0.24386838123;
    msg.q = 0.893827351166;
    msg.r = 0.895288891795;
    msg.svx = 0.583706754764;
    msg.svy = 0.32454163438;
    msg.svz = 0.817675454681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.787410444237);
    msg.setSource(17315U);
    msg.setSourceEntity(77U);
    msg.setDestination(40202U);
    msg.setDestinationEntity(79U);
    msg.op = 16U;
    msg.entities.assign("CSKAMUCZCXESUMVKGLEZHVIUUZTCGDNYUANYDVLYRHBIXPSOJYJIQSEMTHOXDAUBCNGPQGBGGKNKVZPDYPNEUEYXERJQRKOJIDVFZZQUKKREVIMANPQLOLSHRUFEVOOSQFQBWLPWTPJMSYOMVMVXPHHXXFKZMPCJIJBFWASLZTRNCGQAWXVADSTH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.166159518802);
    msg.setSource(19009U);
    msg.setSourceEntity(29U);
    msg.setDestination(12159U);
    msg.setDestinationEntity(66U);
    msg.op = 146U;
    msg.entities.assign("LICVQPBFYPZBTWFCWHNYJMHMDCNDQAKXVANIYSAGJNULOYPEZORULGBPSGKBVXLGODQSHVUMKWZWTNTEXHLUQQJMAZXNQUGGGINHXHIJQYEHVSWMRFGSOVXWVEQLYREKREPBZFMBTJUAFEIXNOJBJSCWVOHTV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.167121688266);
    msg.setSource(60124U);
    msg.setSourceEntity(102U);
    msg.setDestination(14013U);
    msg.setDestinationEntity(141U);
    msg.op = 131U;
    msg.entities.assign("XZLMFSRMSHIKIEUUPHAREHQAOHWYVLXBLUUFZSQNJOVWINPKGXZBJYHOZMKQVDCOTEYQYMEFCRRBZIVTKGGEPITYVAKZLDBUAEBCHQXTGQPGTWBVRTMXWDUCCDIVFSQHWOTWOHPFFKAFYXJSJQCCYPALXXOGMBBUXHLKDUACTYHLMANNJFBFTFNGLDRDQDPJYLARSURJEGNNWPKIMZRZCEEJMRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.284175923848);
    msg.setSource(36339U);
    msg.setSourceEntity(67U);
    msg.setDestination(31348U);
    msg.setDestinationEntity(224U);
    msg.type = 211U;
    msg.speed = 44877U;
    const char tmp_msg_0[] = {84, -53, 19, 44, -126, 34, -76, 82, 113, -43, -35, -96, -36, -117, -50, -112, 3, -95, 81, 33, 126, -6, 80, 57, 88, -10, 80, -63, -38, 33, 66, 65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.0130758698282);
    msg.setSource(7640U);
    msg.setSourceEntity(209U);
    msg.setDestination(4024U);
    msg.setDestinationEntity(52U);
    msg.type = 33U;
    msg.speed = 49799U;
    const char tmp_msg_0[] = {-50, 54, -27, -60, 66, -63, 27, -79, 7, 15, 36, -112, 16, -66, -8, 11, -99, 103, 16, 82, 126, -76, -17, -90, -52, 75, 92, 71, 37, -14, 77, 112, -1, 83, -81, -83, -95, -11, -38, 90, 36, 49, -17, 41, -91, 43, -87, -125, 38, 66, 29, -111, 37, 82, -111, -28, 49, -41, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.110883915858);
    msg.setSource(47628U);
    msg.setSourceEntity(65U);
    msg.setDestination(42645U);
    msg.setDestinationEntity(51U);
    msg.type = 128U;
    msg.speed = 50983U;
    const char tmp_msg_0[] = {57, -126, 78, 79, 125, 103, 122, -36, -23, -64, 119, -75, 63, -104, -95, 124, 82, -33, -74, -73, 85, -69, 28, 47, -31, 101, 111, 38, 113, 108, -6, 84, -1, 15, 62, 60, 98, 60, 41, 84, -127, -113, 112, 48, 108, 57, 70, -58, -78, -97, -12, 101, 80, -85, -87, -94, 10, 90, 120, -47, -110, 97, 38, 27, -112, 112, 12, -14, 2, -79, -15, -93, 109, 60, 16, 14, 46, 96, 71, -67, 10, 120, 119, -52, -104, -51, 80, 4, 7, 111, -20, 83, -50, -106, 3, 55, -90, 22, 30, 95, -42, 32, 100, 116, 56, -36, -50, 49, -50, 94, -102, -117, 88, 28, 104, 102, -45, -48, -39, -14, 22, 61, 112, -103, 40, 66, -26, 63, -69, 98, -93, 81, 15, 49, -1, -38, 68, 64, -21, 40, -11, -4, 54, -38, -102, 48, 61, 16, 14, -10, 76, 72, -79, 86, -10, 56, -92, 107, -27, 14, 119, 33, 104, -108, -80, 54, 115, -118, 36, 17, -17, 14, -100, -60, 125, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.155659575455);
    msg.setSource(19013U);
    msg.setSourceEntity(250U);
    msg.setDestination(52499U);
    msg.setDestinationEntity(93U);
    msg.op = 235U;
    msg.tas2acc_pgain = 0.863536018086;
    msg.bank2p_pgain = 0.622903094284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.0816675171004);
    msg.setSource(2362U);
    msg.setSourceEntity(17U);
    msg.setDestination(7766U);
    msg.setDestinationEntity(147U);
    msg.op = 173U;
    msg.tas2acc_pgain = 0.13665289853;
    msg.bank2p_pgain = 0.205803887413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.943792361308);
    msg.setSource(10849U);
    msg.setSourceEntity(242U);
    msg.setDestination(39309U);
    msg.setDestinationEntity(215U);
    msg.op = 83U;
    msg.tas2acc_pgain = 0.123690302204;
    msg.bank2p_pgain = 0.932691283049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.121905554475);
    msg.setSource(56852U);
    msg.setSourceEntity(156U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(206U);
    msg.available = 1452553963U;
    msg.value = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.0328082840651);
    msg.setSource(6336U);
    msg.setSourceEntity(115U);
    msg.setDestination(17552U);
    msg.setDestinationEntity(159U);
    msg.available = 3093558636U;
    msg.value = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.621091178374);
    msg.setSource(21964U);
    msg.setSourceEntity(197U);
    msg.setDestination(28957U);
    msg.setDestinationEntity(66U);
    msg.available = 1687274595U;
    msg.value = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.263050226229);
    msg.setSource(27221U);
    msg.setSourceEntity(151U);
    msg.setDestination(56842U);
    msg.setDestinationEntity(53U);
    msg.op = 179U;
    msg.snapshot.assign("SUURYOMJVBVVSYGMFSFDOBWPHLDVWNDVMJCBQEZODFVXNONSTIACWIGCYELRMRKNCDFFGULPNOBAPUAOODDWEHPZSEUACXXLKZGIBIPSCGLWQP");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.401200975381;
    tmp_msg_0.y = 0.738135828605;
    tmp_msg_0.z = 0.453368023452;
    tmp_msg_0.vx = 0.783313817507;
    tmp_msg_0.vy = 0.483965205795;
    tmp_msg_0.vz = 0.352352540367;
    tmp_msg_0.ax = 0.29394331969;
    tmp_msg_0.ay = 0.878281237296;
    tmp_msg_0.az = 0.415773115657;
    tmp_msg_0.flags = 52901U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.587090537872);
    msg.setSource(34797U);
    msg.setSourceEntity(161U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(127U);
    msg.op = 181U;
    msg.snapshot.assign("TDOABCPNXMDVXWZYDEPFXLUBUSRQXVNGBWMSNKYBBOUELDMOQSDNEPXVOQPKWQEBKEQXCCRNUTHAALRHPITERTJKKFAQLUTFKRIBIKWMVXXYAZWPVAMICEGTISOJMVLIDEHGURJXKBNMGZSGGFOWQCVVSVSGYQHAHWRYDTITMDZCFLNVLJWLRJOZYHFCANCOWHRZEFFAUBXZWYML");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 244U;
    tmp_msg_0.system.assign("HOVODQRNEFPCUTKZAGJLDLIJPSHGYWPRQMDVBDZSTGFYIBJDVZTZALZUIULKXKPWURBCMIWIZEBOKWLQLUJHEPPMTRICFOKCECWEQKMIASJZEOHOGXYHXWTXLSD");
    tmp_msg_0.range = 0.637921656879;
    IMC::UamRxRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 55909U;
    tmp_tmp_msg_0_0.sys.assign("ODYLANGFEGQXDJSNIWKFACCGZRBZVBJUOVEVLYVWVGPUBLTRAMOMNPJWELUWHODPVIAXTHARXEUOWFKBHISITPPKPQCKVCQFRXWTILMONXKEOCSAMEODCSPHDSSFJHZXKQEQCZSBULNYQOFSZIQTDULC");
    tmp_tmp_msg_0_0.value = 0.845074519265;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.729755829836);
    msg.setSource(56053U);
    msg.setSourceEntity(16U);
    msg.setDestination(51513U);
    msg.setDestinationEntity(23U);
    msg.op = 82U;
    msg.snapshot.assign("TTYMEVXLDLXACOPDAHHKOHOHUMZDBAGRGBAETMVHXGNOAKLSQJBTIDWJFBSFROXEQMPKHPRYYUKTQRJIYLQGPUOZLCRGQLSIJWUEHPUXPDBISVWPKQEVIZUWVCDTPSFLBKQCCTGXLZDZFWVYINWQFFOJOABIHNBBPHKEDTWAMNFVNSGGYWVVWAMSAMKGCLMAIXN");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.op = 180U;
    tmp_msg_0.request_id = 6382U;
    tmp_msg_0.plan_id.assign("FISZCJEXZKUNPUSEFAYFTHZCFFLRBVUIOAZGHZTFOZPKQTBEEUYBZQBQNOJIXHIDOEKJ");
    IMC::UamTxFrame tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 3648U;
    tmp_tmp_msg_0_0.sys_dst.assign("GBOZLJROQYYBSUIETLYECJWWSSJFEYKUCSDOFDMTKUWGUZJICWRRAHKMQGOSWZNUKXLDLYAKVOZKBBMDLAWCJOOXECETCLPNZAFXTXVBPNGPVSGSDGQMZXRPIQCANDLKIIXMWJUSMRYEFHAFBNHBQAGXXNNBTPVUUHPTSIKFNVTHOIMIECMFLDNVHWJQORFCHR");
    tmp_tmp_msg_0_0.flags = 139U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {48, 27, 23, -57, 98, -124, -61, 21, 61, -75, 18, -9, 104, 60, -116, -23, 49, 94, 101, 90, -72, 8, -28, -53, -41, 52, 77, -101, -21, 14, -56, -48, -75, -16, -56, 46, -97, -125, -41, 15, -72, -83, 52, 1, 123, -70, 55, -107, -42, 4, -20, -37, 91, 24, -49, 58, -22, -115, -111, 28, -25, 55, -79, 4, 51, 83, 116, 14, 10, 62, -69, -79, -19, -11, -98, -73, 117, -11, -23, -16, -37, -4, 86, -83, -10, -50, -83, -94, 14, 17, -1, -42, -52, -18};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("HSZRILELFUZAPQZFUFXFKUQDINMNROMNBSCBCJWKGDRMAFOXVNTVHVXKBZGOXBNXSPCXCWZYJSTRPWVUQZVFQGEGQLDBWESJVEKYDHKIAOITUIJSYNDBSPTHNHZRBQFICGHTLNYKNTWARPOAYHMQIZEAODIEUJJGVGLIWZLQIKRWSSYWUHCSWKMGVMVYUBDTGFVNXURKQP");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.129520383961);
    msg.setSource(59472U);
    msg.setSourceEntity(168U);
    msg.setDestination(40688U);
    msg.setDestinationEntity(218U);
    msg.op = 215U;
    msg.name.assign("MVTAGPJTODYQFCGZQXMKXLARXGWJUHHLSOPMQSFVALDVOJTVFLIRFCBLPEWHCRPLYIGXYKKVMZWNDYSDEIADACFSBSORISQZWEUBYEDGNPKCCJDPWIIZKZTVVBBYLDJJGFPNMDEUCNUCXBJISNEZXNYWVVURMKXIRWZBAXTYGOMGRLWFHFLSKHXOFPKDMQTIFUYCPBMJKQBQRVNRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.11505574714);
    msg.setSource(28734U);
    msg.setSourceEntity(119U);
    msg.setDestination(30530U);
    msg.setDestinationEntity(145U);
    msg.op = 19U;
    msg.name.assign("XDSXEKHRHICKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.234959002205);
    msg.setSource(43107U);
    msg.setSourceEntity(37U);
    msg.setDestination(18467U);
    msg.setDestinationEntity(249U);
    msg.op = 227U;
    msg.name.assign("WIRGVRXUJLIFILVPAJKECEDYZUXEAZOBBTHAMOXKDYTXZWUASBLQOJAQGZTTJZGCWEHDQCBJSFGYXXUZMURNFUTQKYTPWHKHVCSVEJHULKYPRPBNWVYSPNDPDOLPOMIXLOHNSHKTHQMMVGUPIGDOQFNKKYCIFJATJALWQMOSNLITQCRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.806647054776);
    msg.setSource(37226U);
    msg.setSourceEntity(165U);
    msg.setDestination(21740U);
    msg.setDestinationEntity(241U);
    msg.type = 8U;
    msg.htime = 0.507083037533;
    msg.context.assign("SWZEOWDCSDHRFDSMYXGHFRUIJAETYANDXBQLMZNEDLTCZZSXBOFYELIXHYKVYCBNJPPRIVDYUMGHZWBKABVTHFQIAWFLRDXPVWFIQRXDOATKKBGQVKSPCOZGUNWXEIIVMHLA");
    msg.text.assign("PLUBXPDUFOUFYTBGGBFTTWHDCOTSOSITOETOJWVVSJZSXMBGDVERYFXLGPKNSSMKUZAKWQIYIKBACLTABBMAJEHLXEAVXIMYHNLEHIWRSBUUJZCEFELELDNJGQZQQYCMRHORAYHGVNAINUOBXFVVNDDRVHGWFINM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.941101091342);
    msg.setSource(45603U);
    msg.setSourceEntity(235U);
    msg.setDestination(43236U);
    msg.setDestinationEntity(18U);
    msg.type = 5U;
    msg.htime = 0.789353030146;
    msg.context.assign("ZDDYIDRPWTGNTJKVMANJMOOQCRZPJHUFBGPEQZMOZEIZXEFKJZFSUURXTHSNSORXZDCBSVAVBOMBVTAKMGLYVNSMEAYKQFEPAYSJXTZJOCQDIBHEUBFLRWBWITGWTJKRCHDEGZXONIWXIADQVMIPPXEYGLTUAQBLMSYTHCAIUHWMVQKUSFPFSRAYKCDGGBDNYNJWWKFLXLHCVHBLLQGNXAYQREIELPPOK");
    msg.text.assign("KDYHRSVFDGUBYPSCSNXZMVQQQNHRPKGAETKAUFOCTRVTKUNPTBMDKWBSJBFHAOFLLIFPVYJZGSSCWTJFEMPZJIUUMIFFLXFAPYDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.895551528665);
    msg.setSource(10895U);
    msg.setSourceEntity(166U);
    msg.setDestination(33223U);
    msg.setDestinationEntity(98U);
    msg.type = 45U;
    msg.htime = 0.938066153946;
    msg.context.assign("BJHISDNWYXNMZEVVTOTAXBPMISOKFDSMWWTWHRRSETMYYKUXUHBIFSHECJCGPBVYKKZGREPUYOMCTOJHBZQHXZLWPIEIJANYRBGQAWDZHEXQKWASREWPLLFFIRYXNCFQLAPPUCUNJIZXDGAWRKSCNCMJYCUVKXETTUNLDHQDYOOUUSFPEVQZRXWFMCGAVSOLGBQORJQXDTKBVVIRNVMUDZBTPBGLLFMIFKGNPLJDDYAAQOQKIZCHL");
    msg.text.assign("DQRAMGCMUMCKMEQBCHGNYQHWVEWQJAVVXSLYPDZSIXBKUOMMGXHLTBJXOZFKLPYWFUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.0664951822388);
    msg.setSource(49028U);
    msg.setSourceEntity(100U);
    msg.setDestination(55069U);
    msg.setDestinationEntity(152U);
    msg.command = 222U;
    msg.htime = 0.646188809738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.229933913069);
    msg.setSource(55780U);
    msg.setSourceEntity(64U);
    msg.setDestination(40654U);
    msg.setDestinationEntity(208U);
    msg.command = 137U;
    msg.htime = 0.210126150491;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 207U;
    tmp_msg_0.htime = 0.875927960882;
    tmp_msg_0.context.assign("WGUGAXGEVXTWKCOGGCPMFNPCTPZSKKLSXYNPCTSDZJWVOOICFTPMLCQMIIOBIQRYVGZQBQUZVLZJDAQZDPYUQUQBLKRMYPXEUCMAQIUMWAYFTXAWEZIUBAXTUAJSTDNQBXDKQJNNEYEMUTYHEWGSXGFFIYOTJPBRLSHCFK");
    tmp_msg_0.text.assign("CQEQFHJNTMBUB");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.807014032393);
    msg.setSource(60503U);
    msg.setSourceEntity(150U);
    msg.setDestination(33515U);
    msg.setDestinationEntity(174U);
    msg.command = 176U;
    msg.htime = 0.807746653215;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 118U;
    tmp_msg_0.htime = 0.0644348568399;
    tmp_msg_0.context.assign("EVWRNJOMHXGEIAZXAMVVFZPWQKDEUHVJPAFJHBZREYSKUAMMITHBCIJQPVWUYBYDLUKOFGSZGQMLQZIPYXGSUONEJTGEKCJDHQVDJDCTIXRNNWRMJBLPWFOXSTIKFRIYMCLAHZECSS");
    tmp_msg_0.text.assign("ENASYKIKPPAODLAVQWXHNNYTURYALTCFVZMSBGWCCOGXWUQDXQWJHCHXNOJJUAIKQOGXFYEZWULSYWVKSGNSRILIUKLJLGQEWLAMZCHZCMTFSKPPMNIAVPVSYDTEMRLYFZSTDUMZBBOFOTSBIGPDUWUSBQJDK");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.432674927763);
    msg.setSource(57283U);
    msg.setSourceEntity(244U);
    msg.setDestination(64410U);
    msg.setDestinationEntity(158U);
    msg.op = 121U;
    msg.file.assign("PXGIIZWHGQAORZBEYYAFNXLUCGRSDKDUFEOWITLGKPNELGZOEEPYRDWIREUJBYUDKJTXJJLBIHNVHYXCCJOTHVZMFKRYMMWDMMZHPIWSLSGZKLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.746913618099);
    msg.setSource(26681U);
    msg.setSourceEntity(56U);
    msg.setDestination(32635U);
    msg.setDestinationEntity(46U);
    msg.op = 162U;
    msg.file.assign("ALISSOXDDRNLSOIRPRJDBJPIDXWNVUJKABAJBHBSFNTTQPHFOWFUGWBWYTGUAPUYXWQDQYZXWWTZGCCVAPVGNOABCNUEFKESVMCCYJCKWKXJDLLXYYAMKYVDBPZPIUNDLSWQGZYQFQHKTEHEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.227397759494);
    msg.setSource(14111U);
    msg.setSourceEntity(62U);
    msg.setDestination(52898U);
    msg.setDestinationEntity(110U);
    msg.op = 107U;
    msg.file.assign("MEEVQNKYACWVPFOCPQKXCQOPUFDPIXGUODPBJCRHGYJOLUSTUKCXLJRHKSDAXIKFCFGUQQVXAIOYHNRZSFFXPNVVNHABIMVZIRBEBDSUORJUADNTWUNRYRHDPKMBXGWJNDYGWIWZMDHTEZLWCOFJATQSRYGQMGPTHQLNLYYAJVHOMTYGGQFAEEFTXPIKJTFBXLLHOBVCZLZZXEMVSTMKHPAJWZBIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.207278705928);
    msg.setSource(26462U);
    msg.setSourceEntity(122U);
    msg.setDestination(9794U);
    msg.setDestinationEntity(41U);
    msg.op = 226U;
    msg.clock = 0.56816866518;
    msg.tz = 39;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.922768257763);
    msg.setSource(49679U);
    msg.setSourceEntity(179U);
    msg.setDestination(62792U);
    msg.setDestinationEntity(67U);
    msg.op = 242U;
    msg.clock = 0.268124535138;
    msg.tz = -64;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0547014236723);
    msg.setSource(27805U);
    msg.setSourceEntity(106U);
    msg.setDestination(43277U);
    msg.setDestinationEntity(104U);
    msg.op = 235U;
    msg.clock = 0.660312489095;
    msg.tz = 59;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.299487114198);
    msg.setSource(20351U);
    msg.setSourceEntity(207U);
    msg.setDestination(12332U);
    msg.setDestinationEntity(114U);
    msg.conductivity = 0.195343447444;
    msg.temperature = 0.623865039964;
    msg.depth = 0.367295958663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.508522956901);
    msg.setSource(9123U);
    msg.setSourceEntity(10U);
    msg.setDestination(20627U);
    msg.setDestinationEntity(38U);
    msg.conductivity = 0.837869573569;
    msg.temperature = 0.322114512327;
    msg.depth = 0.905263070988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.126127195078);
    msg.setSource(54734U);
    msg.setSourceEntity(53U);
    msg.setDestination(34461U);
    msg.setDestinationEntity(248U);
    msg.conductivity = 0.309473544856;
    msg.temperature = 0.395586972021;
    msg.depth = 0.912209866171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.459600448087);
    msg.setSource(20912U);
    msg.setSourceEntity(99U);
    msg.setDestination(36989U);
    msg.setDestinationEntity(4U);
    msg.altitude = 0.252613687963;
    msg.roll = 8465U;
    msg.pitch = 59391U;
    msg.yaw = 44998U;
    msg.speed = 27185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.182260760268);
    msg.setSource(43954U);
    msg.setSourceEntity(158U);
    msg.setDestination(4724U);
    msg.setDestinationEntity(73U);
    msg.altitude = 0.447320312113;
    msg.roll = 38758U;
    msg.pitch = 14029U;
    msg.yaw = 57392U;
    msg.speed = 10658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.00619381409708);
    msg.setSource(22552U);
    msg.setSourceEntity(229U);
    msg.setDestination(6350U);
    msg.setDestinationEntity(209U);
    msg.altitude = 0.673420295923;
    msg.roll = 15653U;
    msg.pitch = 59565U;
    msg.yaw = 44956U;
    msg.speed = -12443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.17807667819);
    msg.setSource(19692U);
    msg.setSourceEntity(111U);
    msg.setDestination(56318U);
    msg.setDestinationEntity(216U);
    msg.altitude = 0.318834382645;
    msg.width = 0.21132180253;
    msg.length = 0.0835648154594;
    msg.bearing = 0.98679676264;
    msg.pxl = 24508;
    msg.encoding = 161U;
    const char tmp_msg_0[] = {27, 50, 96, 126, -1, -101, 119, -46, -44, 112, 72, 40, -35, 37, -58, 25, 75, -83, -60, 19, -27, -13, 101, -70, 122, -63, -66, -43, 28, -43, 114, 5, 44, 82, 123, -25, -10, 26, -31, -123, 101, 85, -123, 72, -39, -52, 63, 105, -64, -66, -35, -71, -121, 26, -13, -123, 21, 22, -23, -37, 106, 49, -52, 121, 35, 112, -92, -127, 30, -47, 100, -18, -35, -80, 22, -122, -34, 68, 66, -119, 4, -104, 113, 122, -80, -45, 47, -92, 28, -13, -46, 9, 47, -94, -41, -69, -80, 49, 1, 72, -9, -11, 21, -83, 125, 68, 71, -78, 70, -42, 57, 45, 52, 43, 62, 95, 125, -102, 7, 5, 116, -108, -104, 97, 53, -59, -65, 126, 34, -44, -102, 31};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.707583353921);
    msg.setSource(22561U);
    msg.setSourceEntity(25U);
    msg.setDestination(20273U);
    msg.setDestinationEntity(64U);
    msg.altitude = 0.807243059154;
    msg.width = 0.383453191673;
    msg.length = 0.700719943792;
    msg.bearing = 0.891907281104;
    msg.pxl = -17371;
    msg.encoding = 57U;
    const char tmp_msg_0[] = {-3, 28, -77, -52, -10, -128, -102, -85, 41, 90, 62, 77, -100, -8, -119, -45, -83, -55, 80, 20, 63, -122, 87, 87, -69, 58, 94, -58, -121, 34, 101, 40, -50, 12, 101, -88, -61, -54, -45, 2, 27, -27, -65, 32, -111, -85, 21, -74, 64, -24, -110, 96, 20, -79, -49, 7, -128, -120, 15, -9, -57, 57, 18, -82, 104, 51, -16, 101, 105, 61, 81, 123, 14, -26, -84, -68, 39, -13, 79, 46, 101, 37, 97, -108, -44, 118, 107, 12, -35, 47, -112, 88, 87, -11, 35, 60, -111, 109, -104, 112, -12, -56, 38, 56, 2};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.0956342349187);
    msg.setSource(61587U);
    msg.setSourceEntity(116U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(103U);
    msg.altitude = 0.141034467515;
    msg.width = 0.807193346585;
    msg.length = 0.921884663271;
    msg.bearing = 0.394807334492;
    msg.pxl = -26609;
    msg.encoding = 23U;
    const char tmp_msg_0[] = {27, 69, 40, 3, -33, 118, -36, -76, 115, 39, -43, 122, -111, 104, 45, 120, 33, 106, 96, -34, -90, 32, -69, -6, 5, -112, -98, 55, -6, -37, 45, -90, -60, 93, 111, -15, 102, -119, 26, 125, -94, 125, -127, -68, 24, 71, -75, 56, -17, 10, 31, 21, 36, 98, 13, 96, 60, -68, -34, 126, -66, 98, -43, -118, -107, -112, 16, -54, -68, -3, 80};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.429423218973);
    msg.setSource(30432U);
    msg.setSourceEntity(180U);
    msg.setDestination(59771U);
    msg.setDestinationEntity(142U);
    msg.text.assign("LZXEKBXAXPYMYGNOGBCSNLZMURNNGDBQMNJUSXSAGVZNQAUKKSWDFSKPIGQXCAWAMYPCWOVVEMXBMWMBRFNXAESFGVPRVDKWQJIIOBESTJOMPTJEZHLQLICHERTXWANTRJRUGWYUJGWZFSHEJCFKDVIHYOPYXPZVHBLVL");
    msg.type = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.310744768668);
    msg.setSource(33033U);
    msg.setSourceEntity(220U);
    msg.setDestination(35578U);
    msg.setDestinationEntity(250U);
    msg.text.assign("BGKJRTUHHOGORMBREWRZIRDSZIPUVVFYQWGSNVPMCKPIETHLOBSGPZMLKANDBWOBMDPXUNAYMHTKRLGJEQLFIWUNRUPBMIDEKSSULKOFKBAEQMMSJXCBXMTXNQCRJQCFCIDYYQIAHHFOLKWNDXZLYKJXVNZYVEOWHMTIPIJAOLFAAVPYZOOYVQ");
    msg.type = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.396288873727);
    msg.setSource(9169U);
    msg.setSourceEntity(144U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(110U);
    msg.text.assign("ZVQWXJSOMCWBBOKQXFVAWMFOHGTZJKOGMVTAIPWNSBLPA");
    msg.type = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.927530953947);
    msg.setSource(58968U);
    msg.setSourceEntity(184U);
    msg.setDestination(60853U);
    msg.setDestinationEntity(43U);
    msg.parameter = 46U;
    msg.numsamples = 94U;
    msg.lat = 0.742456768884;
    msg.lon = 0.398536622646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.346570384962);
    msg.setSource(34466U);
    msg.setSourceEntity(251U);
    msg.setDestination(46415U);
    msg.setDestinationEntity(4U);
    msg.parameter = 16U;
    msg.numsamples = 101U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 44704U;
    tmp_msg_0.avg = 0.206205423883;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0421301718349;
    msg.lon = 0.292094689922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.582119960237);
    msg.setSource(65199U);
    msg.setSourceEntity(254U);
    msg.setDestination(17356U);
    msg.setDestinationEntity(4U);
    msg.parameter = 41U;
    msg.numsamples = 163U;
    msg.lat = 0.3550605552;
    msg.lon = 0.437946014673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.448018079641);
    msg.setSource(62468U);
    msg.setSourceEntity(174U);
    msg.setDestination(7262U);
    msg.setDestinationEntity(177U);
    msg.depth = 2339U;
    msg.avg = 0.16443989412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.455215392998);
    msg.setSource(48652U);
    msg.setSourceEntity(243U);
    msg.setDestination(36876U);
    msg.setDestinationEntity(96U);
    msg.depth = 31634U;
    msg.avg = 0.751996872599;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.329942455817);
    msg.setSource(16062U);
    msg.setSourceEntity(57U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(181U);
    msg.depth = 16176U;
    msg.avg = 0.909781668559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0826968678312);
    msg.setSource(63286U);
    msg.setSourceEntity(172U);
    msg.setDestination(25615U);
    msg.setDestinationEntity(12U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.391889518168);
    msg.setSource(37976U);
    msg.setSourceEntity(238U);
    msg.setDestination(45361U);
    msg.setDestinationEntity(84U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.770352181468);
    msg.setSource(2596U);
    msg.setSourceEntity(106U);
    msg.setDestination(3387U);
    msg.setDestinationEntity(196U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.716141745494);
    msg.setSource(47164U);
    msg.setSourceEntity(33U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(113U);
    msg.sys_name.assign("BSKXVDTYVAVACRZWXNTNBYXLNQMYMIZJAQVEPLYZZTUZTZFWWDRWSJBRSDBDBGKOFMHTHXFQRGTHXGPJFESCGLMJAPMWMOCGRUQEFCPOTIOISFUYHINGUJHZUFHDLQWMCELIVJOPCKXDXYGPQWFASNFLUJMVARTNWKYWKWHBZ");
    msg.sys_type = 24U;
    msg.owner = 62587U;
    msg.lat = 0.174588731256;
    msg.lon = 0.205637268796;
    msg.height = 0.174511263463;
    msg.services.assign("HXRPCVEEQQKLJMPOVMLYEEVLAHHTSWIXFJMMBDHXGUBDXNMDFSCENFTBBJQXGDLINBOGZBIDORZYTCYMONUIZQUFOQSWUSJSOACBHZQRYVRNQOCZJVDWDFITPTTHDFBIZZRCEIKNAGIUFJKSUOMYTCENGUMXKKLEUEMUPKJNHZYMHAZTXSSABADUGBGCTHCELWPVLRPYJVLQIZPFNYLOSWCTPIXHFRVAWYAJOPSWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.251198491562);
    msg.setSource(24348U);
    msg.setSourceEntity(176U);
    msg.setDestination(19507U);
    msg.setDestinationEntity(10U);
    msg.sys_name.assign("MAPTEEVAPYIAGYADZNZMUKKOJUVBCGJWXNKBRTZGKGJQIVGFXYFKAPLDVORIGNCYSFLQREKCPXMNJNHLDWMCQSULSEHCTAKIFDQUEIBFRZMITDHWECMROJYPEMZQSRYVCTVQVZWUWJZAARBSWJBVDYUMBO");
    msg.sys_type = 228U;
    msg.owner = 7259U;
    msg.lat = 0.233655210361;
    msg.lon = 0.555011542991;
    msg.height = 0.0538747556207;
    msg.services.assign("OSQCYIATAUJOLHXJVTUYJXTRJNGLVPEODKIWZKMJEMRVDRSVNMIHUGRVBPYQWSPLLWUPHONKSONCSEQFGCZTZTMCCNTAOSBMSFKKFQURXONAOGJEQYMXUDUMSZMDYEBUXWWCXYNHFHQPEESLAYAFFGRKQJRZYQTZHKVYNHDXBXHDVLWYVBTKTXOGBEWBIHFMGZQCPLDDPICPAORFHILKNCIJEIBUZLDFXRABGJZQAWUSIWDGCRMNIEWZKLGVAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.565790493243);
    msg.setSource(16402U);
    msg.setSourceEntity(16U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(173U);
    msg.sys_name.assign("UEZUZDICBKWMLQGJDSOCGXMIZOOJZXZWEUSTXYFBFJMQOHXAUQZXYLGOWRXZPIOHAKVRNWYKQQYFGVXNNMBFYCDKEGERBLHCKPMVFACVQODUTLXOUJEPVOEWPWYFWJUGPDDDAFSHAVRRIPDDRACVZTTMFEBHBUUVRBNGWPEVJLYY");
    msg.sys_type = 72U;
    msg.owner = 2276U;
    msg.lat = 0.0479355049126;
    msg.lon = 0.172668623468;
    msg.height = 0.825387381325;
    msg.services.assign("USDYKQYEDDLFWINTMILGMJOHJLNVNGFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.507337215409);
    msg.setSource(16901U);
    msg.setSourceEntity(77U);
    msg.setDestination(8428U);
    msg.setDestinationEntity(205U);
    msg.service.assign("DLRWHIDLEUNQEMHFMTTRXOZEUFAAUSJQAZNQZDFDXCCFPIAKEGJCCMRMFYLHJGVRLLMFWGSQFDKTXWHUFTIHLBYUROTXMIQHTOOCBNJZXKKYTJMECWLKEURDBRMNPPPCTKAJQXOVPWSQIBZGBGMGSHADQLEILCNVZXPVKYPSLDUPCSBSXVETDHZAVQOWVWTB");
    msg.service_type = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.35399287629);
    msg.setSource(21830U);
    msg.setSourceEntity(253U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(160U);
    msg.service.assign("YWAXXNQQPHRPHMDHZMTQRBSPWUCVXTYTXBCDGEWFNJFPKUXIIJIWYOXZQLNUFDRSEWGUCABDEASZYJCHFQKJNYGHSWBVIKCRDMUGYEJPLNQTAKYAGXFLPIJBKTYSGZTEPUNXBAIOGRVW");
    msg.service_type = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.0443200386613);
    msg.setSource(24251U);
    msg.setSourceEntity(81U);
    msg.setDestination(53634U);
    msg.setDestinationEntity(225U);
    msg.service.assign("WLRRSULEHNMRFNYJHMENTUPOFPAUNTIWQVKOHTUTRLWYZDEVLPEQRFAMYHJHWMUQPJSECWIXYGKLBIIYDOZGEDMBKFSQXWNSZIGTSGWXBRPUCWZGNFKVJQJUVSAXFXAKQINOYCQVJSMZEGPYAANFRZKCZ");
    msg.service_type = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0409618508244);
    msg.setSource(42284U);
    msg.setSourceEntity(232U);
    msg.setDestination(49603U);
    msg.setDestinationEntity(38U);
    msg.value = 0.352004665575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.18111933311);
    msg.setSource(63412U);
    msg.setSourceEntity(127U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(210U);
    msg.value = 0.208417204546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.913834952247);
    msg.setSource(7741U);
    msg.setSourceEntity(2U);
    msg.setDestination(44775U);
    msg.setDestinationEntity(161U);
    msg.value = 0.723064536754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.902093999969);
    msg.setSource(5434U);
    msg.setSourceEntity(151U);
    msg.setDestination(54188U);
    msg.setDestinationEntity(83U);
    msg.value = 0.279568532115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.477991419445);
    msg.setSource(7873U);
    msg.setSourceEntity(85U);
    msg.setDestination(23613U);
    msg.setDestinationEntity(154U);
    msg.value = 0.452415811284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.933039918324);
    msg.setSource(61745U);
    msg.setSourceEntity(146U);
    msg.setDestination(52450U);
    msg.setDestinationEntity(132U);
    msg.value = 0.531226599887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.572398803892);
    msg.setSource(32343U);
    msg.setSourceEntity(84U);
    msg.setDestination(23353U);
    msg.setDestinationEntity(48U);
    msg.value = 0.174991139133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.430014139665);
    msg.setSource(55964U);
    msg.setSourceEntity(31U);
    msg.setDestination(2074U);
    msg.setDestinationEntity(102U);
    msg.value = 0.697033858515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.916422004396);
    msg.setSource(35819U);
    msg.setSourceEntity(27U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(50U);
    msg.value = 0.910200844638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.978619094315);
    msg.setSource(35171U);
    msg.setSourceEntity(174U);
    msg.setDestination(25018U);
    msg.setDestinationEntity(47U);
    msg.number.assign("DVNEMDKEEBCKOYCFSFANHMXBRQTYKIYGAXIMCWJEPZQW");
    msg.timeout = 45887U;
    msg.contents.assign("LTNIYLFZUDUZEIFDJDLULTSLPVRODLOFQKXNMQVFBMPGEADCWGZYPAKCVRYECFPSGIVRKUJNOQFTITYQZPJRCLPYZUTVZBCODRNNBKCWMXREPYGMWPSANVHIJXSXZWCXNQLVIBQKDSNSIPXQUTDULRWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.812179777579);
    msg.setSource(4541U);
    msg.setSourceEntity(0U);
    msg.setDestination(12736U);
    msg.setDestinationEntity(225U);
    msg.number.assign("BQGOWOQLRTJPMSEBHKGOAWGTCWQFHUSXEULIUJMERAVWNKYYSRCHKXSKVNMPMHMDPOZYQXWXFCQZDBQEKSLPDJNJFGHNRISVVGDTRNZXDSDPVXUWXUEWPGIALORUVOATUCJMQUEKRMWYHNLYVABDNXQAPRYBKAGGZEQBYMBOJSGDPIZTBTEIJTF");
    msg.timeout = 35278U;
    msg.contents.assign("YQVPWTPOFFBLQASUNNEKCQJFMXSRTYHSQYEYVIUUSQXOEGIRLLPECUWKBFGNPODWGBJKTGJXAEQNZEIHGMVAIFVVHNXBRPOBUDBKZSKGHCUZLQMTPNTBFPFDZYCAMJHPVYKATZHOASJHJSWYHXBUEUTWDPLZDWZVHKPJLHVGEXCUJLYXNXMKLDSI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.466303196896);
    msg.setSource(51872U);
    msg.setSourceEntity(205U);
    msg.setDestination(15175U);
    msg.setDestinationEntity(153U);
    msg.number.assign("VVUCYXKHETOOPSRYNEBYVCGKWDVDUPKUXZCMXZPTJBUMLQSGXWGXDIXUEDFJTPMKVUIMRDJSGIIWDQEEA");
    msg.timeout = 44552U;
    msg.contents.assign("ZHJGFOHQQWIVQZJMIFOUUBMCMYGSDNQLUBCLFTSHPPEQCXKMBSPSHOTJYVQGIEIPHGJJTVYMQGRDSCWDHUWXPOVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.543400344365);
    msg.setSource(14449U);
    msg.setSourceEntity(223U);
    msg.setDestination(26268U);
    msg.setDestinationEntity(234U);
    msg.seq = 3384909942U;
    msg.destination.assign("BGXEUIKWOKYGJQTTCYXYCPVNFBDPKAPIZITNZGAFVHWLYJJMMGFHDO");
    msg.timeout = 41485U;
    const char tmp_msg_0[] = {67, -46, -62, -22, 82, 59, -127, 107, -81, -67, 62, 23, 51, -20, -81, 69, -49, -51, 10, 44, 125, -74, 47, -55, 92, -74, 108, 73, 22, -95, -50, -5, -91, -81, -103, -91, 5, -124, 47, -74, -53, -90, -61, -50, -43, 68, 9, -113, 3, 61, 81, -84, 29, -96, 83, 54, 3, 103, 7, -50, -94, 96, -88, -111, 18, 95, 37, -53, -27, -57, -102, 89, -82, 24, -14, 14, 5, -108, -128, 48, -6, 69, -6, 105, 46, -60, -76, 125, 89, 111, -127, -40, 99, -30, -6, 126, -126, -125, -56, 12, 90, -13, -73, -106, 91, -96, 105, -87, -105, -58, -2, 64, -56, 44, 87, -35, 95, 50, -104, 97, 118, -43, -73, 102, 9, 75, -28, 85, -103, 115, 14, 94, 115, -24, -23, 47, -8, -21, -2, 34, 71, -49, 121, 46, -58, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.203971822577);
    msg.setSource(11552U);
    msg.setSourceEntity(129U);
    msg.setDestination(41699U);
    msg.setDestinationEntity(40U);
    msg.seq = 3955924357U;
    msg.destination.assign("RTQHANDWQCQMEWQRZVGRZ");
    msg.timeout = 18554U;
    const char tmp_msg_0[] = {3, 94, 125, 119, 34, -75, -5, 14, 75, -52, 49, 3, 20, -67, -83, 14, 53, 72, -121, -51, 93, -36, 58, -58, 111, -58, -36, 37, -67, -17, -120, 88, 85, -46, 48, 20, -29, 113, 69, -61, -4, 6, -50, -48, 30, -54, 70, -94, -32, 109, -3, -107, 62, -18, 86, 80, 123, 27, -112, -70, 44, -28, 17, 31, -14, -9, 56, -86, 41, -116, 32, -7, -16, 78, 99, -122, -54, 32, -73, -73, -11, 73, -118, 0, 38, -79, -87, 44, 79, 16, 53, -34, 51, 85, 10, -85, 47, -102, -59, -13, 53, 116, 26, 89, -98, 108, -22, -32, 61, -10, -42, -52, 2, -19, 122, -6, -101, 52, 78, 108, 67, -112, 34, -124, 1, -37, 103, 9, -21, -50, -98, -53, -67, -102, -122, -89, 77, 34, 95, 107, -52, 83, 61, 38, -128, -11, -114, -80, 11, -117, 87, -57, -30, 64, 91, 22, -21, -25, 126, -59, 17, 111, -31, 55, -49, -20, 90, 4, 66, -115, -79, 112, 110, 24, 12, 48, -11, -63, -12, -32, -75, -10, 86, 88, 9, 25, 18, -54, 50, 122, -128, 105, -69, -119, 29, -127, -127, 87, 105, 70, -5, -125, 21, 75, 87, 112, 50, 51, 94, 10, -113, -107, -119, -51, 46, -75, 90, -92, -113, 114, -28, -29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.247350095151);
    msg.setSource(15253U);
    msg.setSourceEntity(57U);
    msg.setDestination(39371U);
    msg.setDestinationEntity(67U);
    msg.seq = 1983343963U;
    msg.destination.assign("XCYDWBVWZQXEAWEHFOZLMHUGGTDWISOTPEWDYZCUHADKTEPQVZEVQVBOHRFBRLHYRLBWIXENEKXHRSNYLCKVKYTDESNKMBVWSQGFHKULYPHLIMDJMOJGVCARDITEIUIPCYTQIBTNOZLAGOPMNZJZQATTGJKRUKZRLHMDTPMXCJJNUZYMOUUFJUOCGXCLSGBWQDWPAMPABCIJPVAOVFZSOLIQJSNG");
    msg.timeout = 61866U;
    const char tmp_msg_0[] = {-112, 120, -90, 80, -20, -75, -10, 41, -66, -58, 27, 16, -108, 78, 75, 115, -8, 44, 90, -55, 109, 35, -72, -10, 108, -37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.40921015713);
    msg.setSource(64025U);
    msg.setSourceEntity(248U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(41U);
    msg.source.assign("KAWOLUFKIMAMEPDZUOPXWWSQWFPACQYFJTQXUHOVLTIBKJNBYWHHLEWCMINVSZGDSTPXYOTUQYCVSHFUJFMUJOKAERGSLRNETLVTMGCVHTOJUHHBRHXECFIVDTJADCBIYBIPTIHRKXWSQQSLNDCXYPIKZEJYZGSHAEAVGQRLNGORMJQDOBXWUCY");
    const char tmp_msg_0[] = {-95, 57, 45, -76, 2, -97, 90, -10, -64, 4, -112, 96, 89, -76, -92, 19, 98, -126, -56, 78, 26, 66, -48, -43, 14, -52, -33, 83, -86, 46, 28, -20, 85, -22, -26, -55, -63, -78, -82, -35, -74, -5, -128, -112, 73, 2, -125, 110, -5, 95, -108, 102, -54, 38, 28, -44, -43, 43, -106, -95, 73, 73, 117, -117, -107, 77, -73, 3, -120, 86, -43, -124, -56, 93, -74, -63, 84, 28, 126, 6, 41, -79, 116, 29, 115, 80, 39, -1, 33, 66, 94, -56, -23, 65, -62, 122, -87, 24, -124, -37, 122, -18, -28, -51, 46, -79, 14, 38, -78, -46, -94, -45, 122, 74, 97, -100, -58, 91, 23, 10, -70, -125, -71, -7, -111, 26, 106, 57, -121, 110, -16, -22, -16, -78, -13, 44, -40, 57, -19, -61, -101, 118, -52, -5, -95, 80, 84, -22, 38, 68, -58, -116, 60, -96, 4, -109, -44, 2, -117, -62, -68, 94, 118, 74, -106, 72, 12, 48, -93, -53, 83, 98, 23, 19, -59, 85, 84, -110, -112, -120, 126, 106, 31, 113, 80, -86, -76, -9, -15, 48, 40, 21, -106, -26, 2, 123, -20, -47, -79, 4, 71, 56, 25, -52, 22, 73, 8, -90, 39, -83, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.00277091209458);
    msg.setSource(4686U);
    msg.setSourceEntity(131U);
    msg.setDestination(26815U);
    msg.setDestinationEntity(124U);
    msg.source.assign("TSPSUVOJGFGODUASFWWZCLSAXKQERQGIMEFKJDGZRUNXSBXQVAOMNIAGKEZVOTCUQVVZRTZSYKBSNGMOXSHRTZWLRQLOYNHLYHUELJJTFBUCVYEMNABYWVFYMQDPWAQGUCQJGOTPMLRNBOTAHYAIXHIVYYEUZDPFBCFMMUWLLJTTJOVDXRAMWJMKDLIINHCRWZEELXTBHNDXDPWPKSFHCBRKABZCUWKCFVPODPEFIHR");
    const char tmp_msg_0[] = {-106, 10, -86, 81, -36, -62, 76, -83, -42, -121, 21, 53, -30, -93, 13, -121, -81, 81, 42, -40, 34, 15, 83, 81, 117, -123, -122, -116, 40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.213695561371);
    msg.setSource(52393U);
    msg.setSourceEntity(66U);
    msg.setDestination(43774U);
    msg.setDestinationEntity(7U);
    msg.source.assign("VNRRLHDZOUDLFFEGKHDXBMXTMADMTHOHNVCZPNGSLAQYBYBVVGXNFVTOLJNHZIVGJWXANKJSWSSUETKCXLSFUPTEYYQAJAOLYSMDPBQJWDQOXFJIMTYCWUEIRVPURLKZHJDIWVCYBXDTKLZDCITEWIUHNWMWFBUARQOSWPZXHCPMAYZKMZIMPRSTQQECGPALBKKQVWCOJTQFYUUIRGFZIGYVKEXXPDOGAB");
    const char tmp_msg_0[] = {-57, -41, -122, 16, 114, 23, 93, -127, -2, -24, 65, -56, 32, -6, -71, 44, -32, 70, -24, -76, 110, 33, 78, -69, 96, -41, 80, -64, 103, -114, -80, 115, -99, -82, 111, -65, 105, -18, -44, 28, -54, 48, 16, 123, -9, 61, 79, 113, -18, -52, 86, -94, 120, 43, -103, 97, 1, -96, -75, -28, -115, -7, -71, -19, -48, -88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.00832495334758);
    msg.setSource(11255U);
    msg.setSourceEntity(155U);
    msg.setDestination(44194U);
    msg.setDestinationEntity(49U);
    msg.seq = 2999772991U;
    msg.state = 185U;
    msg.error.assign("QXUWSIUAFBZKGULFSZUXKBYPHUVIIFAWEPPAUVXEWYCNECBDYPTXUHXOQJOCHSWLNKOWJFNGQCFNVTLNZJFGJAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.635401138742);
    msg.setSource(61443U);
    msg.setSourceEntity(4U);
    msg.setDestination(2834U);
    msg.setDestinationEntity(155U);
    msg.seq = 2665620036U;
    msg.state = 27U;
    msg.error.assign("CDZFIUPFDGEEVMCPBTWGVTQITLDTCZKKGNOYJQZEBRRNJQOMKNHIMALHHKCMZBZFKIPVEFEPRGXPAOJENMKUTALWSSSFSHVLDLWCMQVJFPMYUCTZMWARREAFKGYPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0314536428924);
    msg.setSource(25338U);
    msg.setSourceEntity(171U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(102U);
    msg.seq = 1156735535U;
    msg.state = 192U;
    msg.error.assign("ZQNZJVOKHTIWDWYEIAIWYNNFKGQFGQEDDBQFBKNHGVAXRMZGHHPWSTNGVSDHSLYRQOPZHRNWMJXTPZZKBRCRMUXLPAASQMISRPXKCSIUWNVUSLGQJCCPAEUXVLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.68841131287);
    msg.setSource(58190U);
    msg.setSourceEntity(230U);
    msg.setDestination(62045U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("ZTMAGRVHEVTXUGSETGWAJZFCXCCWLZBINIXLALOVRUJZPYIHYBFESYLIXMABOBDDOMYTNLZHDEKILGOJQXZLUAJYXJI");
    msg.text.assign("AZZODGWHDCCNBBMBANUOMTSVLTYSCQUNSDYCIVDUTJHXKYPBEEEXCIYLJFQOLQFIGRRKWGHNZNUTKLJHZVJXAFIFURRXNRAXSAQAPGKNNXSRNWRHTFTWHBFSFKIPHSLRGZBTJTOWPCQGMVLZNOFVQOTQFUEHEDAJRICMKUYJBWEBDCVIOWRSGXATQPUWJOBBKOAWDKKPXLZUFUHEISQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.193123279557);
    msg.setSource(31409U);
    msg.setSourceEntity(48U);
    msg.setDestination(33223U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("QYFMSEDYTLQOHPSNNYMQAITCKBXBUQZZBQFNXMPGBLHVVOJBSWAAZWDRZWXPUGNDPKZIUFOIUZWJJBUZMBYNJUMTSQXGSNIPTUYVHWLFLURRWVGMVKIVFTHGNGROYEAKGGLDLACMTFRRVAEXDNCRSRRIJYDWHSEOBDHOSXXEZHJBOG");
    msg.text.assign("WWXJZAUHSOSLFNDUGEBIFYTMAMVNPRYACBNSFDTJMFBBTMTKSIPJRZHBKAKPDUGWUPUFYDDMUAZCGJCMGVLCEZWTSCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.537891791088);
    msg.setSource(19771U);
    msg.setSourceEntity(167U);
    msg.setDestination(60146U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("NDKWWVTHCOGTFSYPLMGIOMSFQORJBLWRPLGVQSTTUQAKUAUTJMAPNMEZLRCHFBGKUFAHNMRKWUOKXBMODIRWEIWVRYGGYWKVDDHMQPIZNXYZCXXVABSAOPBFBOYHZOXAQELUUUVZPJHRVRJDESEKHSOCCOADJFNZACPATFBYZCRYVQHMLUQSPLSUDJEGCFIPLJZWYKGYQXEPZJENYBKFNBGSHIVZWMCTJXIIEFW");
    msg.text.assign("CNFVMKUZEMLADRGHINRZQOZFUILYYJGBWADOYLNLDWSXJUBXVBOXQCAWVKPMQFNHNPLOTEVCIKBGHFLYULDAAMXQSMXRSRGVPRCMCTWDAIZSVNKSBQELSVOUNKNTRZZZGZGIRSBJRAMJFVVCJKNPECXQEMCDIPMBWEHQGKVGEGTHPXYWQKXSAYDJJQPYFBEWTYXRPEOIZWMIABUIBFTCWTHJHRPYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.671847912439);
    msg.setSource(15339U);
    msg.setSourceEntity(86U);
    msg.setDestination(25285U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("AKKOZULTGNLHMBUDREAJWHTCBLZNUYHOMZNTNISYXGMIGWXKPXKXLDSPCEARJWEDPVPZQYFJZNYHGFMQILQRQWIOGJJZDLCRCCWYYMGBIWZEE");
    msg.htime = 0.623782552206;
    msg.lat = 0.819648201005;
    msg.lon = 0.687550861271;
    const char tmp_msg_0[] = {-91, -68, -48, -89, -13, -103, -94, 38, 48, -34, 73, 38, -93, 42, -42, -125, -126, -115, 38, -4, 41, 96, -20, 42, 120, 119, -112, -78, 82, 45, 49, -94, 114, -39, -120, -109, 122, -1, 28, 6, 36, -63, 87, -99, -49, 12, 125, -23, 1, 110, 38, 66, 94, 108, 30, -85, -50, -119, -1, 29, 27, -8, -44, -57, -29, 79, -102, -17, 59, 27, -27, 45, 81, 19, -72, -52, -35, 16, -9, 115, 33, 91, 118, -51, 40, 115, 90, -84, -8, 3, 120, -4, 14, -77, 50, -32, -28, 61, -98, 109, -38, -87, 47, -95, 51, 29, 87, 2, -98, -30, 1, 46, -92, -9, 57, 99, 56, -74, -127, 120, -69, -23, 49, 102, -33, 10, -42, -99, 27, -51, -91, 108, 14, 80, 117, -17, -53, -106, -11, 36, 117, -50, 26, -113, -85, -91, -88, 14};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.366883629298);
    msg.setSource(50506U);
    msg.setSourceEntity(165U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("UABHKPDCFIEEDPXKQDWVIBLOXGBSPIFSVQQWCZMM");
    msg.htime = 0.477257598084;
    msg.lat = 0.375330837637;
    msg.lon = 0.615769888879;
    const char tmp_msg_0[] = {-41, -100, -124, -21, -48, -47, 125, -33, 99, 50, -81, 59, -70, -46, -84, -128, 57, -44, 73, 74, 75, -62, -43, -128, -38, -45, -95, -79, 53, -109, 62, -122, -31, 93, -53, 10, 49, -35, -104, 96, 33, -19, -15, 77, 100, -106, -12, 3, -2, -34, 120, -30, 5, -18, 57, 73, -119, 10, 10, 38, 9, -35, 12, -55, 0, 102, 35, -128, -71, 119, 92, 16, 114, 59, -46, -26, -29, 31, -110, 49, -35, 7, -104, -46, -51, 72, 126, 66, -67, -97, 18, -82, -73, 77, 64, 91, 26, -32, -117, 11, -50, 55, -8, 99, -109, 60, -66, 3, -76, -16, 118, 1, -82, 52, 11, 52, 38, -58, 31, -81, -36, -39, -35, -111, -113, 53, -68, -42, -61, -119, -37, -75, 25, -94, -83, 14, 72, 34, 65, -9, 8, 95, 100, -82, 102, 85, -73, 88, 43, 103, 118, 31, 110, -92, 88, -39, 120, -107, 123, 110, 113, 5, 60, 48, 88, -40, -30, 60, -67, 126, 108, 45, 106, -91, 44, -73, 106, -20, -74, 40, 54, -60, 74, 107, 99, 92, 98, -112, 97, 86, -45, -32, -128, 108, -17, 80, -125, -65, 89, 79, 74, 105, 114, 22, 122, 68, -86, 45, 115, -121, -61, -80, 62, 72, 111, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.0515522034624);
    msg.setSource(11922U);
    msg.setSourceEntity(89U);
    msg.setDestination(471U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("BHBRUXWAOJVCDMVEWHEULTLQTGLVNPTIXFCAHUNADCTGOKKYRAZPLETEHYVSMXVSNIIAJGOSJOFJGTEXWXQJDCGNDEYVSAWKLOOZOBSEFVDUQKDCYZPHPAGQZWXVUQHBSPWFHBWRYPRBZWPYFRCEXCKCIRHRAFDBZRUJSKIQM");
    msg.htime = 0.455498289346;
    msg.lat = 0.942976927657;
    msg.lon = 0.83418940352;
    const char tmp_msg_0[] = {-5, -24, -11, 71, 75, -111, -32, 28, -43, 111, 70, -122, 76, -128, -54, 25, -75, -102, 78, -53, -25, -8, -114, -100, -92, -3, -23, 12, -124, 102, -94, -96, -110, -27, -58, 18, -83, 25, 1, -67, 26, -51, 115, -104, -114, -74, -77, 87, -56, 105, 24, -128, -4, -16, 51, -86, 44, -83, 52, 6, 80, 75, -81, -91, 109, 56, -19, 53, -17, 101, -111, 55, -100, -71, 73, -68, -102, -124, -73, -60, -83, -11, 46, 107, 62, -128, 124, -127, -63, -120, -47, -55, -24, 90, -115, -121, -83, 63, -10, -77, 94, -91, -104, -50, -94, -8, -123, 124, -91, 13, -66, 36, 79, -56, -57, -51, -15, -62, -45, -119, 126, 9, 84, 24, -100, 24, -80, -100, 75, 66, -1, 67, 114, -106, -107, -45, -59, -31, -70, 41, -29, -105, 5, -4, -80, -14, -107, 5, 97, 60, -41, -83, -48, -83, 126, 51, -14, 34, -35, 0, -7, 8, -123, 94, -60, -69, 69, -67, 0, 113, 0, 100, 55, -59, 108, 112, 36, 26, -14, -115, 92, 58, 114, 107, -6, -79, -36, -117, 77, 5, -65, 13, -53, 37, -38, 24, -100, 95, -13, -68, 47, -78, -116, 67, -55, -64, 39, 50, -53, 10, 6, -34, -15, -49, 123, -100, 55, 69, 104, 89, -113, 124, 110, -88, 14, 51, -56, 96, -125, 54, 81, -83, -45, 3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.475914493402);
    msg.setSource(29587U);
    msg.setSourceEntity(165U);
    msg.setDestination(633U);
    msg.setDestinationEntity(86U);
    msg.req_id = 25959U;
    msg.ttl = 16263U;
    msg.destination.assign("VFXJPRDKWXGPUBHQWBQQZKIHISXJJHREPTOAYBLEHKOJNRKIGDXW");
    const char tmp_msg_0[] = {-12, -29, -103, -18, 77, -101, -30, 109, -29, 44, 95, 7, 4, 32, 43, -100, -38, 104, 82, -33, -20, 65, -44, 40, 105, -54, -127, -47, -109, -127, -86, -126, -32, 39, 76, 103, -1, -85, 110, -124, -56, -127, 123, 92, -101, -72, 26, 19, 85, -85, -113, -76, 45, 91, -100, 34, 96, 57, 103, 26, -119, 57, -111, 117, 74, -22, -20, 3, 90, 45, 121, 64, -93, -54, -114, -65, 6, -41, -109, -22, -68, 19, -43, -84, 49, -106, -25, 22, 94, -70, 67, 27, -125, 26, 2, -81, 67, 42, 13, -74, -55, -81, 115, -106, -56, -20, 70, -27, 89, 118, 25, -42, -114, 54, 66, 125, 20, 61, 121, 77, -88, 4, -32, -117, -100, -95, 71, -98, 97, 82, 10, -110, -121, 114, -46, 78, 16, -27, 18, -119, -60, 30, -19, -37, -50, 51, -75, 75, 94, 1, -123, 31, -1, 107, -63, -20, -47, 92, -37, 120, -118, -53, 42, 82, -46, -11, 102, 105, 123, -74, 77, 85, 32, 119, 37, -9, 107, 32, -47, 22, 0, 119, 33, 113, -69, 8, 84, 40, 30, 72, 119, -70, 1, -99, 36, -9, -109, -84, -117, 118, 39, -45, 93, -3, -87, 25, 16, -102, -35, -7, -75, 43, -44, 29, -70, -17, -128, -28, 69, -22, 10, -99, -12, 115, -98, -30, -110, 89, 108, -22, -62, 4, 118, -73, -34, 10, -10, -110, 92, 72, 3, -103, -102, 25, 70, 15, -83, -58, 83, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.0534924571366);
    msg.setSource(7622U);
    msg.setSourceEntity(136U);
    msg.setDestination(10258U);
    msg.setDestinationEntity(195U);
    msg.req_id = 7663U;
    msg.ttl = 58332U;
    msg.destination.assign("UYOYLOOFIDZJCMXFNTPJWIEZCQYXEMXLZTQOADZJG");
    const char tmp_msg_0[] = {-32, 112, -120, -89, -41, 35, 121, 114, -124, -111, -50, 21, -75, 13, 44, -83, -90, 68, -48, -51, -58, -80, 120, -122, -50, -119, 35, 82, -6, 115, 97, 89, -110, 78, 17, 84, -9, -51, 72, 106, 60, 48, -18, -71, -24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.833048033541);
    msg.setSource(8423U);
    msg.setSourceEntity(197U);
    msg.setDestination(46534U);
    msg.setDestinationEntity(197U);
    msg.req_id = 13504U;
    msg.ttl = 35473U;
    msg.destination.assign("FIELKQZLYTKJF");
    const char tmp_msg_0[] = {-64, 53, -82, -68, 126, 52, -45, -81, 31, 15, 28, -100, -95, -95, 95, 94, -71, 31, -54, -37, 107, 49, 16, -16, 90, -105, 17, -89, 55, 109, -10, 123, 20, -23, 103, -43, -56, 84, -3, -23, -29, 15, 63, 85, -9, -82, -66, -65, -6, -36, 24, -83, -125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.371866704513);
    msg.setSource(26487U);
    msg.setSourceEntity(82U);
    msg.setDestination(8492U);
    msg.setDestinationEntity(74U);
    msg.req_id = 42454U;
    msg.status = 203U;
    msg.text.assign("WMDBUIVFVGQMUEXXXGSLYRQZAIKOYTETXRDMPTLONVGPZJFSEGSQLRAHYMJEYVCNNNPQCCIPMAPJWSBOXLONTRDLIUHJECAYZXARESHVCYNVCKDONTFLFQHSTZZGBRWNLSNKKIBVPATVKETKZOOBDWOSQTFDRBSFQUPVPMMEUKIUJKHXFZRLQZGCKYIQLBHHBURIYBIGALCGUAECBADYJVMMJHZIHWYHRJPFUXWUSWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.143749947942);
    msg.setSource(49898U);
    msg.setSourceEntity(136U);
    msg.setDestination(58509U);
    msg.setDestinationEntity(176U);
    msg.req_id = 44839U;
    msg.status = 79U;
    msg.text.assign("RNBHWIJUMXXNUULDJXRKPFZRETDHTKMNSGAHZJAOZXGWWROCAOPUKGEYSQFNDNNXYJVJXZCYOLCAXEWUIVOUMBFDLTTHLJRUBEUIBSPMYKRYOSENGILWRJAFJIWVZTLVCVHLP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.343357891911);
    msg.setSource(14230U);
    msg.setSourceEntity(134U);
    msg.setDestination(6550U);
    msg.setDestinationEntity(200U);
    msg.req_id = 40191U;
    msg.status = 18U;
    msg.text.assign("CXJDODQTGPKGIIUHLUPYHNSALIFBKPGPIEOIMZGMUFAURMRHHTNCRMXLYWTRSFECJHEVDBZXOKELSWQJKVMUSZQYSMCSKHDRVLTBDTVEFUPAMVPNVSAUINXDEPDYSVPHLQWQFRAOZFCPFOBIBSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.675644611258);
    msg.setSource(47978U);
    msg.setSourceEntity(214U);
    msg.setDestination(51787U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("LYFLDMRDORXKPTCCICMFOBJNMAGCEIDUOUVLAMQZLWEMYGNIFGHLWGRRKGOUPTBSBVWCMZNNXYHUVFYDKKJQLWEIJSZQZFLRUAYWPTBOBKIWIWUGVSTRVDSNZAGWHNMWXFUODRTNMZCPHEHAIPQJDEGCJPJYUVFXZOHBYQO");
    msg.links = 3270159820U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.041438165982);
    msg.setSource(60320U);
    msg.setSourceEntity(112U);
    msg.setDestination(24666U);
    msg.setDestinationEntity(42U);
    msg.group_name.assign("HMFNNJVEUQGNDBFHNCSRSZXHHXVZCYNQIDIASUZMAQPMAPNXNQDOHKCOAPWRDJTRZOAZJDAWMJVTYFLFPEWUFNPLQOCFPTGPEQRLX");
    msg.links = 2828024615U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.802816592445);
    msg.setSource(7444U);
    msg.setSourceEntity(170U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("DTCUZLWYPIXVHKXRABVQZUJUVYFZOEEHXZIKNSOKCLDQWKIKACQSVVOHCHMIVDKPOFLGHPBENZOQMIFHIAXGDGKRXJDGLUNQMLWLGYRNPODLFCTHFXVDEPBOISSRNXTEXYTLGZAJISBBMGTQWWPSYWKZMHCAOYQYIFBKGRVTTWOBSTDJRREADFMJUFLZJQAUHOZGV");
    msg.links = 3141365744U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.213368950842);
    msg.setSource(22771U);
    msg.setSourceEntity(29U);
    msg.setDestination(58908U);
    msg.setDestinationEntity(42U);
    msg.groupname.assign("YIIVPMTJQZENJBQDETKKAMTMSQFCFJDOUWFCPRIWDKCRPHZEXHWXAMKDLCUQPSCOMSUSNVCTZZDLDYJNTDUIGTJYNCVABLJQVAQBAOOCZPWUFWQXWVDFPZWDIYULSXYGZXHISHGXVHHRSEIZNHEWTRHKKBQKYFVMUXRNPNAERKVXZOHLGE");
    msg.action = 35U;
    msg.grouplist.assign("HTJRXFTCSQUULIEBUQZZOPWFIKLGDQTIIJAUEWGLKVYAYFTZVIJJEFAOFGHTAICSIMTXNEVGOOOLZXRVXBQGBAZCBRWPGHDWSFEVNSOVEQUCMPDZGHUWTWLNJLOMGXFOZLOCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.260940308005);
    msg.setSource(21136U);
    msg.setSourceEntity(41U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(132U);
    msg.groupname.assign("ZQEMRDEIMATWXAXKKJCRTYFYWHZPEXARNDAWFJHSPOGIIOAGFIBGRNUVFPHOYDUSYNKNVJJVICPDSIHYDZELGIRXTZSYZCDLSZFVHYOKVPVZX");
    msg.action = 71U;
    msg.grouplist.assign("MHLJQSKSCHBAUVXCBKEVINCGSCRIYVPVBCEZPBTHIRQXWMIVWLMQGKCFGBFBFJKAYNLDNEHPGHCPUNVLJLMJKXWZESFAYNOTGZIUAYDXECHRYTWFIXSTULIUHEXJYGSUPYPGKDHSLUZTIQMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.47794051287);
    msg.setSource(45861U);
    msg.setSourceEntity(181U);
    msg.setDestination(41692U);
    msg.setDestinationEntity(232U);
    msg.groupname.assign("EQYZHDIHZNIPWMSRKTCYFLLBCWGJPAGKKSMZCMZFCRQWABPRTIVCINSJVRBHNVGAQSROYYVGUJOGOEUFOAMLMLEWEVZXISQZFKSWOHIFLKEMQGJJBTRELCVDGMFEMNIBPJRPRDKGUERUOPNZYTLNHCQXWQBQWJAHPPTV");
    msg.action = 134U;
    msg.grouplist.assign("LFLWOKSJSZQCOIWTPQKIZPFYRMMMPDITYLEKKDXHBIGUFUOGCKQZWXYCQCQPPIYBOBWJCWDRCEGCPVYHMRVRVNEEABLHLSNONFNRXSNPUYXXFEDDUJBAHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.622754042526);
    msg.setSource(24565U);
    msg.setSourceEntity(71U);
    msg.setDestination(10003U);
    msg.setDestinationEntity(220U);
    msg.value = 0.760756514392;
    msg.sys_src = 39466U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.946224497236);
    msg.setSource(63527U);
    msg.setSourceEntity(193U);
    msg.setDestination(40614U);
    msg.setDestinationEntity(156U);
    msg.value = 0.809061089657;
    msg.sys_src = 655U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.425262547183);
    msg.setSource(39522U);
    msg.setSourceEntity(240U);
    msg.setDestination(23036U);
    msg.setDestinationEntity(67U);
    msg.value = 0.082995288381;
    msg.sys_src = 38777U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.620062286357);
    msg.setSource(20676U);
    msg.setSourceEntity(17U);
    msg.setDestination(52232U);
    msg.setDestinationEntity(55U);
    msg.value = 0.289962473807;
    msg.units = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.0807825169864);
    msg.setSource(34887U);
    msg.setSourceEntity(5U);
    msg.setDestination(15562U);
    msg.setDestinationEntity(185U);
    msg.value = 0.366687068853;
    msg.units = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.953999263499);
    msg.setSource(21034U);
    msg.setSourceEntity(37U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(42U);
    msg.value = 0.422353302036;
    msg.units = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.488831532825);
    msg.setSource(39950U);
    msg.setSourceEntity(0U);
    msg.setDestination(43774U);
    msg.setDestinationEntity(90U);
    msg.base_lat = 0.661750717702;
    msg.base_lon = 0.983618072932;
    msg.base_time = 0.0272373555877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.419207468954);
    msg.setSource(19031U);
    msg.setSourceEntity(12U);
    msg.setDestination(10142U);
    msg.setDestinationEntity(167U);
    msg.base_lat = 0.969276209575;
    msg.base_lon = 0.312295560103;
    msg.base_time = 0.587108685994;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 53405U;
    tmp_msg_0.destination = 27736U;
    tmp_msg_0.timeout = 0.295881445881;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("PKFIULTNPKGMMOENAQIJFMQNDPDNLBZPXKKRSCVZXKXIABIHNRGGWXBYLUWBJSLAZFVDQEXNGFIWEYHWJOZRHTDAEBJWMBNWCAMEUEEVPGMHCEHRHHYJWQSTGTSOUFDPLKXTECNSVAQHPPZXYYIPFSVKHQCCJJSZURQWTJYULWQNZFVJRXL");
    tmp_tmp_msg_0_0.description.assign("DXJTJRUADPIMNESJSNSRPMBFKBDGFZBLZSIVVOUEGDFPVAUTOPVJGBNOFGXJBZEVZTCKIABUXJXMJ");
    tmp_tmp_msg_0_0.vnamespace.assign("VUACDKCIVTJWOFHSSRWTBDZTVGTZMBGCRMFLSENVXCUFDHUBSFHZOBWJQKIFNQJNRULRDMMNEAEMUJZGURONICJZ");
    tmp_tmp_msg_0_0.start_man_id.assign("ZWPUFOPRXWNQDJCQMFSGGBBBKIHHCEOOFPFQEGCOACLWMAEAJJW");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.source_man.assign("FTVBTUOVSYMIMVZNGSZLANGFGUCNHKOEYPLPPDPYXQITWCSIGUCBWGUSYGNVFVCJFIXCAIVQNQFCMGKWJEQTBOKSFNJWTEDYWERCBHQOMLRKIDNLMDCSEJJFXMONJSDQGOOK");
    tmp_tmp_tmp_msg_0_0_0.dest_man.assign("MVFWYBGORTECDPPKDFWMWFFQPEXLTRUCBLJLKJXITKHXGUOQREHRUSHXQUJSSBMKYYPSFNRXNSWTGEBYDFRMMGPPSNZMCCKKBECXGBCOBKGQIODWGHFIHQIUYJVCQQPWQPZVAANZNUVJLKZGANIOIIUTCDYOZYADIYHQBUJUEDJPSLOBUZKENHQEFEMWAMXAVNAHLTJ");
    tmp_tmp_tmp_msg_0_0_0.conditions.assign("BOQXXFFRCSIAGJBLGWORUXYTGTAXZRCWEPQLEQLGSHKDYKPWZOPDEVJTRWKODRTMENIVGEOVDKLNGLZMNHFZIJMGDJMUXXSNKWTAJHFHLDGMUHNWNEOANUASMUCAVDEFKQYDTUTOWUYHJYKUQOULCFSIRMZBVYEPRDSIQLAPWKTOYLQXRNIEZFHPFYCCJHBZBCMVKXBXBHTYPIWQHZDZJSJGCBWFQJAUYVEASOIKVQIN");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::DissolvedOrganicMatter tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.253945857003;
    tmp_tmp_tmp_msg_0_0_1.type = 95U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.980271870487);
    msg.setSource(7693U);
    msg.setSourceEntity(179U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(169U);
    msg.base_lat = 0.602187161561;
    msg.base_lon = 0.40713104135;
    msg.base_time = 0.857609457317;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 26190U;
    tmp_msg_0.destination = 20310U;
    tmp_msg_0.timeout = 0.222433175204;
    IMC::TextMessage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("VLGVALOCBXVGEVSXMJFRSROVLIOWJHKPHSGJIFIPPSLBRBTYMOUEYCTOCNGHNKNAIFUXZESYPZDFUKIIZMOHFQWIYBCPEVJCBKXTDYJNJMSYPVCHQGANWMBQM");
    tmp_tmp_msg_0_0.text.assign("BADXMTCTEVTBHVQQDVPOSRJUNEKBFYXQHRIGPJPWURTJIHVELBTJVZCBJPGAYOPMIZHSPQJULEDEGNGBQSZNFKYRQZGIOWZAVMNURAGXTLSVVPGTHL");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.934693510236);
    msg.setSource(62343U);
    msg.setSourceEntity(51U);
    msg.setDestination(27217U);
    msg.setDestinationEntity(29U);
    msg.base_lat = 0.678693602473;
    msg.base_lon = 0.179542268445;
    msg.base_time = 0.229999337079;
    const char tmp_msg_0[] = {-85, 56, 10, -127, 70, 38, 57, -19, 31, -112, 51, -18, -28, 40, -122, -122, 13, -121, -23, 91, 95, -62, 68, -55, -97, -80, -118, -64, -4, -31, 63, -71, 6, -126, -16, -11, 84, -70, -25, 16, 29, 85, -92, -69, -68, 60, -4, 92, -96, -1, 55, -101, -91, 23, 55, 16, 35, -6, 72, -65, 80, 2, 0, -96, -98, -115, 18, -73, -2, 120, -102, 110, 81, 99, -90, 84, -96, -25, -35, 81, -28, 68, -35, -89, 11, 64, -45, 10, 77, -31, -87, 80, 119, 90, 109, 70, 8, 10, 122, -58, -77, -68, 36, -71, 26, -27, 13, 3, 41, -21, -32, -38, 32, -40, -56, -68, -101, -30, -1, -52, 35, -74, -93, -78, -73, 11, -61, -46, 55, 74, -73, -122, -123, -104, -25, -10, 39, 126, 24, -78, 21, -25, 112, 95, 100, 110, -62, -122, -87, -43, 94, 62, 45, -100, -52, -50, -87, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.958432190414);
    msg.setSource(43884U);
    msg.setSourceEntity(94U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.921581082971;
    msg.base_lon = 0.381134687755;
    msg.base_time = 0.795939426861;
    const char tmp_msg_0[] = {82, 24, 87, -95, 96, -22, 21, 2, -19, -115, 120, -61, -77, -77, 11, -75, -51, 67, -33, 30, 37, 23, -12, 68, -126, 100, -60, 39, -112, -51, 43, -57, -35, -122, 23, -82, 11, 5, -19, -29, 28, -45, 28, 58, 97, -72, 48, -121, -94, -118, 14, -38, 126, 6, 39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.463730334464);
    msg.setSource(15833U);
    msg.setSourceEntity(123U);
    msg.setDestination(56348U);
    msg.setDestinationEntity(119U);
    msg.base_lat = 0.160587826434;
    msg.base_lon = 0.763461495296;
    msg.base_time = 0.673193324315;
    const char tmp_msg_0[] = {-121, -77, -50, 45, -101, 71, 100, -34, 74, -23, -47, 123, -79, -29, -96, 56, 124, 46, 17, 119, 31, 48, 124, 10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.300220352359);
    msg.setSource(48498U);
    msg.setSourceEntity(242U);
    msg.setDestination(64548U);
    msg.setDestinationEntity(29U);
    msg.sys_id = 6190U;
    msg.priority = -53;
    msg.x = -4559;
    msg.y = -30501;
    msg.z = -8830;
    msg.t = 13459;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("CFGVJUKIGLGYSFIQBSYMCXSUDOPZ");
    tmp_msg_0.value = 238U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.0948161563012);
    msg.setSource(18240U);
    msg.setSourceEntity(70U);
    msg.setDestination(39796U);
    msg.setDestinationEntity(88U);
    msg.sys_id = 60696U;
    msg.priority = 35;
    msg.x = -11814;
    msg.y = -21039;
    msg.z = 4699;
    msg.t = -16218;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 53401U;
    tmp_msg_0.lat = 0.144987137864;
    tmp_msg_0.lon = 0.488599607037;
    tmp_msg_0.speed = 0.723483738376;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.custom.assign("TMAKUCKDEVLNNBXCZRIVYSJWDZHBZBPSPOAJQOLARZGYFYFYVKWEATQYGVFJQ");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.264563052566);
    msg.setSource(28095U);
    msg.setSourceEntity(114U);
    msg.setDestination(2028U);
    msg.setDestinationEntity(52U);
    msg.sys_id = 26267U;
    msg.priority = -85;
    msg.x = 11407;
    msg.y = -26653;
    msg.z = -15825;
    msg.t = 7855;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 75U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("VVCXIGZOAAEXRJKBCWYYBLBILELGTQJKPKUIBPZIIRQSOUYFXHKOEPQBLVAUWPARZHNFEYWHXJLCDXAQIADVW");
    tmp_tmp_msg_0_0.description.assign("FNPXSIWJEZMGGGVBEQJRFFDKQJ");
    tmp_tmp_msg_0_0.vnamespace.assign("BDQQFAYFHMRXRMADAIEGKZLKMWLTJHYFPPPWBJOGMJTCOJQAHNTYTDIHPSKNCPFVVMIXUIDLYNOLSWJVKIBTLLCENZNZEWYAXVVFGQXBIEOHCZFVUTHQYKWOUUKQVJLPFEWYOR");
    tmp_tmp_msg_0_0.start_man_id.assign("HPIEGQYTXYFQFOCTLXKCVJJEV");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("QSHOWMCDMCXNZWQVJJOFZKNBYOTCJVJABZPHKKAWVMSXCTARBTASWHKNNZOJCNRQITIFSKBPWGRZBOWTOPVQPSLRSRIXECLQVETGQLIRUZJGDVUWUUVMNSABHUEKTMDPLOBBDKYENQXURIEEXHIFFJZENXTIJLIDXDZPTWHBAOLCLMACEUXXIJPKTWYGKZNDOYLMGHPNWRBIRQFFDRCAJSUYUDSSYYMAHHECMEQGY");
    IMC::IdleManeuver tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.duration = 61319U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("CJTSNVLGBMKNNRQJQCUYOEVRIUUXEGPYDMJSDAVFTSSGHQGIXVBEPXDYKCOIBBQJUFMEHXIYLCZJTXAHSXLWTDITMLDFYSTKPWRAUOTEPYL");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::CameraZoom tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.id = 206U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.zoom = 114U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.action = 109U;
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("JPGGBNLAMIOFXGWYHOVMWPDZQYGRKEPXLVUUPGJRDBNPEUOCKWAIIRSWXBNZCFHBSTHMDOCGGALIQSN");
    tmp_tmp_tmp_msg_0_0_1.plan_size = 57798U;
    tmp_tmp_tmp_msg_0_0_1.change_time = 0.601986117751;
    tmp_tmp_tmp_msg_0_0_1.change_sid = 12377U;
    tmp_tmp_tmp_msg_0_0_1.change_sname.assign("QDSEVHMJJFCOLPUKPJQYJENECAYIXXMTBDRQDNGSSLBYVXILMYAIQEVJBECXYZNTWPCXWFKLHHWBPDCZVRUGIYBWFJGQMGVOIDTJWNGQSVHOPRUVZHJXFCQHRYLIQKALBPDI");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-28, -63, -68, -120, -112, 32, -128, -72, 58, 45, 36, 67, -85, 7, -107, -68, 92, 119, -101, 19, -53, 118, -83, -50, -111, -32, -102, 94, 113, -96, -30, 30, -43, 67, -111, 95, 105, -74, 105, 29, 19, -34, 81, 90, 101, -99, 60, -126, 66, 67, -18, -112, 92, 75, 125, -51, 45, 118, -18, -84, 67, 73, -67, 53, 117, 12, 119, -127, -86, -57, 119, 16, 45, 33, -116, 16, 29, 47, 76, -66, 17, 63, -64, -120, -76, 24, 50, -104, 53, -114, 37, -22, 54, -35, -22, -69, -89, 5, 69, 76, 43, 120, -68, -45, 48, 47, -87, -113, 57, 26, -79, -103, 37, 17, 15, 51, 71, -21, 27, -84, -41, -83, -112, 122, -39, 69, 0, 105, 24, 112, 84, 126, 68, 111, -44};
    tmp_tmp_tmp_msg_0_0_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.573897943489);
    msg.setSource(18160U);
    msg.setSourceEntity(106U);
    msg.setDestination(55806U);
    msg.setDestinationEntity(168U);
    msg.req_id = 7189U;
    msg.type = 34U;
    msg.max_size = 29399U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.390192499957;
    tmp_msg_0.base_lon = 0.808674099164;
    tmp_msg_0.base_time = 0.232154309627;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.714060054488);
    msg.setSource(11329U);
    msg.setSourceEntity(31U);
    msg.setDestination(32439U);
    msg.setDestinationEntity(199U);
    msg.req_id = 62475U;
    msg.type = 90U;
    msg.max_size = 57797U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.327233943658;
    tmp_msg_0.base_lon = 0.354569493673;
    tmp_msg_0.base_time = 0.906346363976;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.618761925838);
    msg.setSource(33826U);
    msg.setSourceEntity(249U);
    msg.setDestination(43413U);
    msg.setDestinationEntity(184U);
    msg.req_id = 64897U;
    msg.type = 107U;
    msg.max_size = 16400U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.400924125127;
    tmp_msg_0.base_lon = 0.341765086657;
    tmp_msg_0.base_time = 0.212686582198;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.249945316258);
    msg.setSource(16512U);
    msg.setSourceEntity(130U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(177U);
    msg.original_source = 37267U;
    msg.destination = 24658U;
    msg.timeout = 0.564488835027;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.842143485423;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.188680238504);
    msg.setSource(51418U);
    msg.setSourceEntity(103U);
    msg.setDestination(41034U);
    msg.setDestinationEntity(186U);
    msg.original_source = 30953U;
    msg.destination = 40812U;
    msg.timeout = 0.158540540427;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("XPMZJPARZFDXBBYMFYXKFGUKGLQINNVKCVDJJUZSCCESLAMPEMUHJNALXUQFFWPMAWOJPEBEZFOWORHBHTRWBKXGMYYVCSLTGPTWVHOQDYWW");
    tmp_msg_0.type = 148U;
    tmp_msg_0.properties = 231U;
    tmp_msg_0.durations.assign("ZCOUSJIYHLESLMHLCGTTYECMXUGTQWMGDHEHDMNPEZAHQITHYNBAAFLTXXFKSFXYGWNOVGWSBQHTFJDUZZXJOBIJXPDDPINKQQUKXCRPOANPURYDIVOGLMTJKVVCLLWOYR");
    tmp_msg_0.distances.assign("WGWFTZAJVXZJJBMYJKHAQJYQSGYHWLIVYOSRKUPSKTYGGMVFKVNLPIYZWZDTDUKABCCRVWITS");
    tmp_msg_0.actions.assign("BQSVWZMQSXMXGDGHSNYYZJLCGXRMNWXFZUBIHDWRUZA");
    tmp_msg_0.fuel.assign("XDFFSAYHAFOCCYQLSKJIGGDHNTBSUMRVHWYDZZWNGGNIWJTWWBQHDRAMTREKJROUXKCNIJ");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.543280049463);
    msg.setSource(64019U);
    msg.setSourceEntity(51U);
    msg.setDestination(52U);
    msg.setDestinationEntity(65U);
    msg.original_source = 40835U;
    msg.destination = 10207U;
    msg.timeout = 0.20662531929;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("NVQTYRTFENDVBEMHRXVKMWXSODLROSJBCRZCEWOXASUVCCZNHIDCEMOYMPYRAPJFRRYFOIAKUQXQGMNKKLKNVWMDPWSTGXQNUFIPHUAIYZZAQYZTFY");
    tmp_msg_0.type = 63U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.310000015351);
    msg.setSource(33287U);
    msg.setSourceEntity(94U);
    msg.setDestination(22224U);
    msg.setDestinationEntity(92U);
    msg.type = 158U;
    msg.comm_interface = 26380U;
    msg.model = 45068U;
    msg.list.assign("DBRNYYWAWGQKRAFQWFCUCCWEMMSOXGIJMBSIXDPGFMXUBEADTUSCUHEYPSFJPZOMFHAOWZPHLRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.532913987275);
    msg.setSource(6507U);
    msg.setSourceEntity(232U);
    msg.setDestination(29416U);
    msg.setDestinationEntity(195U);
    msg.type = 76U;
    msg.comm_interface = 25806U;
    msg.model = 20962U;
    msg.list.assign("ZLCWLOPRDIBMYPKXPOPIFCANFIXHTBLSDZGKHPJTDJSGFENDVJRGZXQQDZJPINOVSELVUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.440416733131);
    msg.setSource(41597U);
    msg.setSourceEntity(83U);
    msg.setDestination(1157U);
    msg.setDestinationEntity(141U);
    msg.type = 96U;
    msg.comm_interface = 50426U;
    msg.model = 15403U;
    msg.list.assign("ASETLLZYRNNSFJLBHEFZBBMOZEWGZELBJXQIMUMBNFCZQOJBGTGIXCOFVXDAXYJNAIIWXNCYSVKDPZDVTUVRIXDCTSSXUCIWFOHQAORJBPUMWWLZNGLSZKHJFUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.843897509974);
    msg.setSource(56597U);
    msg.setSourceEntity(142U);
    msg.setDestination(15344U);
    msg.setDestinationEntity(116U);
    msg.type = 242U;
    msg.req_id = 1926078285U;
    msg.ttl = 17517U;
    msg.code = 239U;
    msg.destination.assign("NCPUWTOBUYHLJSFBVUOQAHRVCVPXMWOGXXZNSOLYFFTMWTQYSFMFLDRZULXNTCJSWNVRPCSLKIHGFVEPXWELTVJYRIQHHLNIHRUPDSCPZNZYRCMSQEBUGKIKGQVPMOCCHZ");
    msg.source.assign("JPBIYYEIJNTSYBEHWNPUDOLMZUHKUEBOKACJDZRIOSGDSDFYGPQDMGVARXYBYOWMOSACZLLHJHDIPQFGBSIRMJGKANVQXLJRDCMSFTUZZYSCYIPKOAAQVUYUQPIXLEFI");
    msg.acknowledge = 132U;
    msg.status = 3U;
    const char tmp_msg_0[] = {-119, -85, -97, -10, 22, 1, -73, 84, -89, -99, 110, 12, -112, -39, -62, 75, -60, -108, -76, 91, 90, 19, -54, -92, -114, 6, -104, -13, 124, 86, 84, -111, 96, 39, -38, -83, -88, -67, 20, 57, 119, -114, 53, -104, 54, 29, -108, 17, 110, 40, 110, -80, 50, -103, -107, -34, 21, 69, -99, 71, -39, 61, 35, 75, -74, 19, -70, -9, 83, -48, 112, 24, 98, -29, 59, 82, 6, 126, -28, 92, -56, -77, -24, 30, -107, 10, -93, 86, 6, -67, -32, -9, -84, 43, 44, -37, -124, 12, -93, -37, 51, -124, -66, -114, 46, 47, -39, -19, -37, -16, -6, -14, 8, -83, 96, -50, 62, 16, -90, -8, -13, -5, -67, -13, 62, -124, 101, 97, -56, 126, -63, -25, -89, 57, -105, -29, 80, -12, -123, 71, -1, 80, -26, -88, -87, -104, -16, -32, -50, -108, -11, 56, -40, -73, -110, -114, -98, -57, -15, -80, 64, -90, 75, 42, 113, 51, -102, 103, -105, 51, -87, 7, -9, -44, -6, 5, 121, -49, 120, 1, 6, -82, 38, 26, -100, 9, -77, -72, 113, -40, -113, -124, -7, 88, 85, 94, -118, 41, -62, -85, 110, 32, -79, 100, 101, -93, 82, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.611182570594);
    msg.setSource(42635U);
    msg.setSourceEntity(228U);
    msg.setDestination(57809U);
    msg.setDestinationEntity(220U);
    msg.type = 146U;
    msg.req_id = 3140313101U;
    msg.ttl = 35090U;
    msg.code = 19U;
    msg.destination.assign("RTCDQLAEBPKFXTYCZTBYTAWDNLQILJORMBZMPVADGWWHSUTVFNFAKXSIZRBNJTSFDPHZUYDYKCQDGPFWOCTIEAMSLIGBQBSCKCOKWJZPHEOEYQNDCIEXOOAGMWCIEEBLXPYFJXZREGXCPNUHFTFZNAZJVRLSHEJKKGQNVOVKXRR");
    msg.source.assign("XEMDMRBOWDZLULZPMDGJWBUXYVTVFKAXRCXLUGJHRLPZAUNVISSWUUKEIKTFAAMOYNRJJMOCPCQTNQDXETQHWZSBXHKLQCTYUPNTFYVXOGFQRWJBCHGIZQUFADKKASAXECAPWDYXWOZKHOUMPGPPGJEBRFBLDNR");
    msg.acknowledge = 14U;
    msg.status = 189U;
    const char tmp_msg_0[] = {108, 103, -63, 13, 111, 66, 89, -94, -24, 79, 41, -114, 53, 54, -82, 12, 5, -85, -72, 54, 18, 79, 82, -10, -21, -58, 76, 63, 20, -54, -85, -107, -123, -117, -28, -126, -83, -78, -46, -18, 124, 72, -108, -91, 33, -28, 79, -16, -11, -35, 122, -5, -106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.95338429167);
    msg.setSource(39137U);
    msg.setSourceEntity(27U);
    msg.setDestination(22957U);
    msg.setDestinationEntity(82U);
    msg.type = 254U;
    msg.req_id = 51129753U;
    msg.ttl = 27498U;
    msg.code = 62U;
    msg.destination.assign("EROMXPGXQTKQSYKYJXLMSKIBTCZJKQQOFLYUNINEOIWUARIEPRNTPVRHMPSVVEWHHGENLHTMDAVJDICHRWZHMNWJBTORASGDNVYB");
    msg.source.assign("DOSTUHGJPUXQUPXGXBTKDBFYAECSRETHJBHYRWWGHBZIZILRVRLZQKMPOYQDGUWSLOHJPOYDQCVOCZNTFEQWRSTSDCLI");
    msg.acknowledge = 160U;
    msg.status = 56U;
    const char tmp_msg_0[] = {23, 118, 29, -3, 23, 87, 7, -32, -35, 61, -125, -89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.94772991429);
    msg.setSource(10340U);
    msg.setSourceEntity(147U);
    msg.setDestination(44140U);
    msg.setDestinationEntity(193U);
    msg.id = 249U;
    msg.range = 0.601154594346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.642700982842);
    msg.setSource(54610U);
    msg.setSourceEntity(117U);
    msg.setDestination(16493U);
    msg.setDestinationEntity(20U);
    msg.id = 135U;
    msg.range = 0.168480482114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.865982909825);
    msg.setSource(56663U);
    msg.setSourceEntity(166U);
    msg.setDestination(62876U);
    msg.setDestinationEntity(108U);
    msg.id = 175U;
    msg.range = 0.450853882939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.841159332703);
    msg.setSource(56736U);
    msg.setSourceEntity(58U);
    msg.setDestination(33407U);
    msg.setDestinationEntity(154U);
    msg.beacon.assign("QNDBZROAQBXCUWVBONLJUGBBUHFCEUODLDCACEPBJVZVRSBLKHAGNYNDMCLZOHXQRCTHPIOM");
    msg.lat = 0.0498917242998;
    msg.lon = 0.358127463675;
    msg.depth = 0.819263584657;
    msg.query_channel = 55U;
    msg.reply_channel = 171U;
    msg.transponder_delay = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.792139462335);
    msg.setSource(26453U);
    msg.setSourceEntity(98U);
    msg.setDestination(34386U);
    msg.setDestinationEntity(12U);
    msg.beacon.assign("TCSLXOVCHSKQOEXURQMOIGIYZLHXVBORQHDGPRFNVJQOJUWMPJLOWZPEMGJBCRWJSWFUGIKDWDBVAGERJXLFYOMBXRZBPKCBNKUETWKAXLHXQLENSSZFHQFNBEDEGVFCNIPPKSDMGUIVFNTFIAVRPPNJEKXDFVHJKITFVBNSTIQWAD");
    msg.lat = 0.859467754529;
    msg.lon = 0.445385929149;
    msg.depth = 0.425155719766;
    msg.query_channel = 196U;
    msg.reply_channel = 216U;
    msg.transponder_delay = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.290192403671);
    msg.setSource(57835U);
    msg.setSourceEntity(41U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(204U);
    msg.beacon.assign("MIUUNLJLXITNXEPYNEVRMMUOHXQKZNETRCCXIJSCNAVBRFDJQCDBGPFMIBNAOWHTYMEHTBKODPCMGGAREPSUYGAPFTHKSCZUWMVFOOSIXZVBKQMWHJZJTRRN");
    msg.lat = 0.96353024499;
    msg.lon = 0.638857341706;
    msg.depth = 0.780816686595;
    msg.query_channel = 192U;
    msg.reply_channel = 13U;
    msg.transponder_delay = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.399028757359);
    msg.setSource(12324U);
    msg.setSourceEntity(53U);
    msg.setDestination(21444U);
    msg.setDestinationEntity(171U);
    msg.op = 17U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QJIZMSWTVYVOGMQBGEZATIWYBMZNJDSAFYYBRHFHDGQOZYYQPHWGVUETNKBBPPCVKGEHWHNSJRRGWWPSINTPJMYOLXCXEXUZEUFQBYJBXUVOPRHALOARLFUSDZDQQFSXAPSUIUIXKCGRJEGRLCHVTMVTNLRSOJXUKXMNDKFZLLRHQLWHAJEIZSGIMCNPJCUABDSQRGOBVEKFMOAAZADZENKCPMVIKDEWFQMFYHCOIT");
    tmp_msg_0.lat = 0.691360149758;
    tmp_msg_0.lon = 0.302785568832;
    tmp_msg_0.depth = 0.71679658776;
    tmp_msg_0.query_channel = 236U;
    tmp_msg_0.reply_channel = 48U;
    tmp_msg_0.transponder_delay = 197U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.127009941997);
    msg.setSource(64624U);
    msg.setSourceEntity(205U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(163U);
    msg.op = 135U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NDMCAEXHFBPFOLOOPNEIWZRUSMDWKPRMP");
    tmp_msg_0.lat = 0.270306557975;
    tmp_msg_0.lon = 0.0935529506312;
    tmp_msg_0.depth = 0.544348566857;
    tmp_msg_0.query_channel = 128U;
    tmp_msg_0.reply_channel = 146U;
    tmp_msg_0.transponder_delay = 15U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.786246299157);
    msg.setSource(18972U);
    msg.setSourceEntity(58U);
    msg.setDestination(15039U);
    msg.setDestinationEntity(144U);
    msg.op = 167U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AHGSZPEJSDYOMZWZLCYBVDFFKECJLEQOPNXDRQQGZBFYYKFTXIRQDBLXJUHPE");
    tmp_msg_0.lat = 0.941343693269;
    tmp_msg_0.lon = 0.582763437681;
    tmp_msg_0.depth = 0.938496562423;
    tmp_msg_0.query_channel = 73U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 117U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.889640318494);
    msg.setSource(26207U);
    msg.setSourceEntity(198U);
    msg.setDestination(65211U);
    msg.setDestinationEntity(141U);
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("TNLAUSTNWOUSGKDAGHUEAJRQHOVCNXDZFZXJBJRJZBTGFGILDAEDTZRQJCWKSUMMEGKGAPZIWFABOYZKIJCRBRLCZMYXDKAPDVMCXTYCNHOBXKIVJMZISSHQXVBCYLNPFNQTVECYTGDFNENMQHXRABFYQMOYWWQUJRDTTEWLCKVOGVODQLPKEDFHPLHGRSPOYJZPLNJSMUCTMKOSOWFVKGIBN");
    tmp_msg_0.action = 53U;
    tmp_msg_0.grouplist.assign("XCOWYIVBVBPIIAWLYVEDONOHLZJWENTCPTOMQHWLKYZESRYUJBLGYBMSNKFZEFDZNMMJYXQUPFIGMROCUYZKHPKGAZALWAGPPYPJCNFKPUGXHUBCEKJVAX");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0315153579116);
    msg.setSource(10643U);
    msg.setSourceEntity(227U);
    msg.setDestination(32603U);
    msg.setDestinationEntity(200U);
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("URGFPUDOZLVHVAZKPFGPQDMZJRIKBEWUCCFXYWYBDWWYVYAGENVZCLBCUMWMILBKSQMSJQPYWIWRMNFSSLAGZFEYTECVSZYONMWCSAXLSMKCAZH");
    tmp_msg_0.reference_frame = 81U;
    tmp_msg_0.custom.assign("PGGGKHGADAXJSZKRHVYGIJJTONCWVAURKSZBETVYEPQCPSWMEXUJMGLTFHRBQBXIFDJUXEFPOSUUKSNIFHQASJQXPQTOSOUFMPILFYZLWXHKUYRCGNHUJVWSNMCKIYZMESHBDNKVPAKBWEEDDYFRAHONFMAUMIENKDZQLHZXQJOFMPCBCTJRHDIVKWLDQFWRWNSORBAULMEXQOTGCVLLVNVQBOLAJGEAZZBCCIRDLTYTOZTXPIYIBTDYYVPGM");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.712260963023);
    msg.setSource(3948U);
    msg.setSourceEntity(34U);
    msg.setDestination(43808U);
    msg.setDestinationEntity(154U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.82244394046;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.74023630537);
    msg.setSource(26119U);
    msg.setSourceEntity(252U);
    msg.setDestination(59231U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.124802832609;
    msg.lon = 0.455363485422;
    msg.depth = 0.478444478702;
    msg.sentence.assign("SWLCYKEHEYBTMWMQHNJIRIPVLXDFISLSPQSLKDBMBJHWVYIPJUODLATFFTDINAWXWAEEIKTQQVJKGBSTQAKCUKFCEIOZLXMPBRJCAVERKXLIGUUFTWDQCVV");
    msg.txtime = 0.826641234289;
    msg.modem_type.assign("IAVARYMVURGFJJAJNIBENJSOXPJPLFMBVIIQLDXCPLOF");
    msg.sys_src.assign("GGXQWIQHQODWQUOYDSVZCTGGQCXWAQFXTCYRWHONQBMUSHTVOHZMHCHVWFPDSJXVIIGITJEGTHQZRBLJXPSUEANQRIVFSZRUDCVSGMMYJVMRTQJVZKRKKUBBARXMSTURFCPIFGMAYNPPPLLLYDFNBHBRSEOPENNB");
    msg.seq = 15840U;
    msg.sys_dst.assign("KDNHRBINQZFIJKVODGCIHDZFRCHAGVXZEBPYNQUJXQEZWVFQWQOBAHODDQDKMTZSLD");
    msg.flags = 177U;
    const char tmp_msg_0[] = {106, -71, 9, 116, 20, -16, 114, -42, -69, -21, -80, -16, -100, -93, 0, -121, 13, 30, -20, -36, 104, -127, 113, 23, 57, 123, -44, 60, -83, -105, 8, 126, -31, 60, -6, 113, -105, -12, -26, 22, 10, -59, -45, 52, 43, 123, -84, -68, 51, 57, 87, -104, -58, -104, 30, -43, 124, -102, 71, 12, -116, -18, 33, -83, -102, -60, 126, -9, 50, -23, 63, -84, 64, 7, 38, -58, 20, 7, 45, -54, 6, 8, -14, 118, 40, 101, -22, -115, 32, -79, -23, 42, -38, -96, -57, -33, -33, -105, -81, 40, -15, -117, -42, -80, 64, -52, -53, -30, -107, -42, 39, 37, -122, -126, 97, 35, 34, -23, 8, 34, 117, 113, -95, 84, -46, 31, 9, 96, 2, -63, 19, -91, 80, -50, 77, -17, -108, -110, -98, -30, 88, -2, 48, -76, 120, 125, 66, 105, 67, -88, -74, 124, 102, 93, 98, -60, 41, -120, 99, -77, -57, 120, 119, -127, -26, 93, 86, 4, -80, -71, 41, -49, 9, 33, -19, 19, -36, -4, -73, 55, -14, -99, -77, -85, -16, -61, -19, -127, -8, -11, -46, -94, 62, -88, -9, -5, 119, -123, -126, -30, 85, 95, -23, -68, 53, -32, -105, 81, 24, 10, -71, 79, -114, -57, 106, 69, 94, -120, 98, 118, -75, -20, -91, 8, 104, -86, 51, 87, -93, 120, 4, 83, -75, -1, -114, -124, -38, -54, -20, 24, -36, 113, 87, 16, -39, 16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.356506222642);
    msg.setSource(51507U);
    msg.setSourceEntity(251U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.894353181867;
    msg.lon = 0.660528164534;
    msg.depth = 0.204042559864;
    msg.sentence.assign("UQSBOGKJXUIZECDZZWEXJQMYMDIUMXLDUGLTDEMPANGZZKVEYNGQAEYGAKBTDNGVBAZBOCHPVPGMVESTCLKJTRIWVEVUFRSKFXTLRMYOAROQPPQOQRZBXNHJBSDUDBSRAS");
    msg.txtime = 0.67736851359;
    msg.modem_type.assign("XTEFORKAKXFSQMGNBHALEFLWUPVGSGJMZKNWHJNWEMTLHBTFMZUQXQCYLTJYHBEKBDPIJDQNHDUDDOWOYNPLWFUDWVMYAAHYMRYIIZUJT");
    msg.sys_src.assign("RQRANLHDBOPFKJJTFZTCVQAEWPUSFEKPIGZYUEJLRRDIYBPTWGOMNNQAWTCGZTJHNVSGISQHAEFNSCMIFTQZDWIKVWXXBRCUBWRWFCJXHQDJBUBCSAGPBOXRYYCGTLYUYSEGMBMIRMOGKANQLWIMKCPBXLDVTWPSIICAFGQZLHSBXNECHHVYJNOVPZLXLUFNFHYASMVEAKJVVORUTLOKMZ");
    msg.seq = 6935U;
    msg.sys_dst.assign("QIITNMJRNGYOUNLKRLZRF");
    msg.flags = 88U;
    const char tmp_msg_0[] = {114, 5, -102, -76, 58, 23, -16, 67, 100, -83, -93, 116, 28, 103, -1, -73, -17, 85, 111, 117, 54, -116, -99, -10, 80, -72, -83, 46, 54, -123, 15, 41, 101, -71, 56, 97, 74, -90, -20, 56, -39, -16, 105, 4, -56, -30, 103, -85, 68, 50, -23, -83, 20, -87, 2, -104, 103, 74, 93, -114, -100, 30, 125, 89, 0, -40, -32, -112, -20, 83, -117, 47, -33, -105, 86, 65, -66, -97, -70, 0, -49, -59, -107, -107, -49, -27, 2, 47, 116, 62, -57, -112, -47, -22, -50, -86, -52, -46, -116, 49, -59, -111, 105, -53, 13, 0, 10, 43, -39, 60, -19, -102, -13, 49, -17, -43, 52, 71, 123, 12, 100, 114, -59, -3, -55, -42, -61, -121, -121, -66, 94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.90830291188);
    msg.setSource(16738U);
    msg.setSourceEntity(214U);
    msg.setDestination(59591U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.637399013577;
    msg.lon = 0.207292840075;
    msg.depth = 0.461141020655;
    msg.sentence.assign("RUKTBIFBVYIXVNEHAIYLENVSKYWIGXZLKHDOVIPPDMNCHEYHSGVRRHTQBOVUJBJUSUQGCHODGCYZGFPGWZKMFWSKLKKJJMTABPQZCOAJNYDVAKFOGZDERFFYOIOOIXXLNOTLXCCXSBEGPPIFAAYWWJQIGCAYXBMSOTKBCRMQBSPHNRURTYUW");
    msg.txtime = 0.420588667708;
    msg.modem_type.assign("WOUMDEJAXUBSOGJIUCPGXHSXYVCECKGCDXAXSFGLJEZRLZCLXWLKFOMZBMCPZVUZBROYMUXQHFMXKMLZFEHIKDQCBSTKJSZCJGRKUPLVLRDQRLAEOVOZWMEITHNUVIWLBGZOWFYDGYHWMHHSSAQFVISBWMN");
    msg.sys_src.assign("DIFTKATBMEMFODTNTOIDWLXXDJTXCAAWOVEHEYQJOKFICWSFGYZZMMTPJKSRUAJQCJXYEHXENONZQBORYYVSNZXITSJWJCIDVZSPQCEKPBAMFNVDOLYKRWLHGPGDFYJHSBUBUWREEACXMVPRCIJUSUOPBNMQMHMBRKDMPNKZRGAZRQLGLVSHFXLYSNLGACVGGUWFXZIVHHIJHQUYQ");
    msg.seq = 55647U;
    msg.sys_dst.assign("BEKVPTCMPHVODPKGZQGRIGFRTILZMBRXNMGMXYOMDFEUSJKNJUSJSBCYKLOIGDDYUBWPXLOQNVPQGHCQWYCLFZAICGPEADZUIKJEFRHLZLHKMQXZNCTHRAUJWXNNJWCJDAKQDSFOEPYYDAFBXLAWDRGSENSQZVQCFIGAEMYUTMVUNRSMVOZXVUHGIIWNXRTSCWRTTXETPDON");
    msg.flags = 158U;
    const char tmp_msg_0[] = {12, 81, 59, -76, 81, -51, -41, 63, -88, 117, -55, -37, -6, 95, -73, 54, -16, -79, 18, -63, -47, 89, -30, -4, 47, -86, 106, 105, -110, -102, -41, 113, -82, 20, 41, 108, -117, -17, 24, 91, 34, 1, 68, 80, -59, 44, 92, 102, -34, 89, 35, 79, -85, -20, 39, 119, 4, -126, -126, 103, -32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.483551018569);
    msg.setSource(15420U);
    msg.setSourceEntity(86U);
    msg.setDestination(39940U);
    msg.setDestinationEntity(136U);
    msg.op = 190U;
    msg.system.assign("KLYKAAIAWRXNENIARUBLTPUGZEECYSNDYNBKTTDII");
    msg.range = 0.549121800912;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TKFICJBKGLRJKHSUKUSSYEFUBLCOZPTUUBEDQBXDHQ");
    tmp_msg_0.feature_type = 96U;
    tmp_msg_0.rgb_red = 190U;
    tmp_msg_0.rgb_green = 30U;
    tmp_msg_0.rgb_blue = 36U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.950888501397);
    msg.setSource(15291U);
    msg.setSourceEntity(132U);
    msg.setDestination(13307U);
    msg.setDestinationEntity(53U);
    msg.op = 59U;
    msg.system.assign("RIVLBTIUWCQUEGDXQAAFSKGLFJVNXTJGQNZADYXPQTXJPHIEQSOLDPZCRWVPCGIHAIUPMGQUNDLIJYWSKJTWMZSWFBRSGQPJKMBOPKECVMZCKEQIHDJSCZYOILFESSEECXHBHZFLZZYGAXJRVYQYTYWIUTDRUHXCWBOA");
    msg.range = 0.962674958509;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("XJRXPATUVLQZDCBZMIKNGIUBPUAECIOLTSBNHSOXRERFFOQEXHHGRDRVVJKGFITNDAEAWZNYEZSLUBGOMSYTLMSQSWEUABVNJKCBCCBKDCIHUJHWSJCOQRKLNDUZCXHJSGQEOWAZGLZXVVYYXRXTAVXGQJRMANZALPPMQPHWYJPKVEGDWFIYQIFOMPTHHUEEIICYYZAPLPTMBNKFLSMKQFVMWFRJDDCR");
    tmp_msg_0.text.assign("BIOFHINOGPPBLRKHYJSQZQGWCEBXKXUTYHCJNDUCVRPF");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.638621542362);
    msg.setSource(5939U);
    msg.setSourceEntity(34U);
    msg.setDestination(52947U);
    msg.setDestinationEntity(94U);
    msg.op = 118U;
    msg.system.assign("SSEUZFRXZRRYOMEDHIRUJECXCLSOKRVTQLIFWCKBCVBXWILUHGDWUHQGBORUSOTQIDTKGPPBVDNCJPYNYXQFWRWDDHXPVKWIVCLVBYPFAMHMZHTQYGLPZTHAXAGOFJMFATGNTVSGJVEBFKBMILOPNWAHYKDESMLMSOUJUPMT");
    msg.range = 0.73777469584;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 55U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.671569757815);
    msg.setSource(16446U);
    msg.setSourceEntity(14U);
    msg.setDestination(20901U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.042697524824);
    msg.setSource(50907U);
    msg.setSourceEntity(27U);
    msg.setDestination(40140U);
    msg.setDestinationEntity(153U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.050447413045);
    msg.setSource(44651U);
    msg.setSourceEntity(48U);
    msg.setDestination(57001U);
    msg.setDestinationEntity(53U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.243364573567);
    msg.setSource(33263U);
    msg.setSourceEntity(168U);
    msg.setDestination(41664U);
    msg.setDestinationEntity(3U);
    msg.list.assign("BJRSUTLDWUZLBINEFMFCZKGEJNXJDIQNZTWQUEACYHVNWDIUTQCNZEKIXOMYDLGEMGHAQQKVWMPDVOCPTBKJLBZBQJCMLPFVTNCTMKCSLQHYYNRFRBANIWMGCJJFBAAVZVLWAUXSHPIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.657409416024);
    msg.setSource(37193U);
    msg.setSourceEntity(243U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(22U);
    msg.list.assign("ZHJFRLRSODTYMGVRUTAXPZGSJKMRQWSDEOABWTHIYPVNDUARHTGJXHBZVBSQYWZGDIMYNSKBDUJEZDBFCLPOLYGKNFHGRVXXWPWGWTUPDXCQYNPVUXPSBEYQXHBFWWNVDMCIEOJFIGMZVRRWPNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.981784225234);
    msg.setSource(59391U);
    msg.setSourceEntity(80U);
    msg.setDestination(39020U);
    msg.setDestinationEntity(139U);
    msg.list.assign("LOLDJEWHRIQNOLLZOXOEGXCGSHKFYRJTRTHXPHJPKWZPSTIJCXTZHNIWDEXUMPTDLXKBOOGTCVUKMCDEZFRBNVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.89472275085);
    msg.setSource(26110U);
    msg.setSourceEntity(159U);
    msg.setDestination(18337U);
    msg.setDestinationEntity(215U);
    msg.peer.assign("XFNZMHOFAQFGAPUDOZMYNLFOOBTVHVULHHBCCWVYXXDYOGDSZDIIDKDDLIDOWWBVWNCMWSWFBRWGUCGGSHJRZGPAUXUBISYGNTXILVLPTJMTEKMYIWINLTBJRVCA");
    msg.rssi = 0.142733547198;
    msg.integrity = 26782U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.591257823597);
    msg.setSource(37918U);
    msg.setSourceEntity(235U);
    msg.setDestination(43161U);
    msg.setDestinationEntity(35U);
    msg.peer.assign("BLVWVGXMCBFYTDEVGGGNFZSLMWQFVJPXGIXQKHFPKHOECOIORDWMGVDYEBEASEUFTZYRKKNSYREQNZQRWXDLTRJFDJSW");
    msg.rssi = 0.566802520759;
    msg.integrity = 17225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.803025121564);
    msg.setSource(19799U);
    msg.setSourceEntity(36U);
    msg.setDestination(12503U);
    msg.setDestinationEntity(194U);
    msg.peer.assign("EHFWZBAIOHHWPILLQETNYZVNYCSDUQZQGWI");
    msg.rssi = 0.833967123459;
    msg.integrity = 28588U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.296370466876);
    msg.setSource(60014U);
    msg.setSourceEntity(247U);
    msg.setDestination(58553U);
    msg.setDestinationEntity(228U);
    msg.req_id = 55835U;
    msg.destination.assign("XDPCNEHDWJKFLXEOYZULMXPEBLMABCXWNGQKZCPUQGMDNQEWQUVMDBYGKLKDEJSEXZGCBGPRKWHHXTDZMTUIUSBTUEAQRDKJBZUOASEVIKODDQVIVTJYSZUNOZHG");
    msg.timeout = 0.331179800694;
    msg.range = 0.753715967192;
    msg.type = 45U;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("FCSLVHETGPMTJPGSMLGIYLMGYSHSVWZOUMWXITMCNLYMKFVTKCXLZYODRMPQOFNEMQEDVECAREOTQZCJACDGVIINIVPGFSUZHJUUTGFUKTZHBBUQMQNNLSIAHAWRBTLOGPKRCEGXRHHYPIJJZRKSAKCRRTODWHFARQKWXEKXGAMDXNLFDZTOIYEWXDBBANPPZOSUJJAXEUHSUCQYCQND");
    tmp_msg_0.type = 175U;
    tmp_msg_0.op = 195U;
    tmp_msg_0.group_name.assign("UHMEFPYSCBKILSQIHZXHPXFUZZYAYLASRBOEUDSNEXYVBQMORHBATRPPHQQMXPMVKAEJLFNWSZQFEMWBQFIVJIQZRIPMXCNOAUOWBTPFKYGJYVKCRJLJIZIWLDWHDCDNABLIOGLBMVMPGZKSWGCUAOKTMHCAQUHYJTDJOUCOQVCSTLGSKBEZGEWHFNDXMUXVRWYXKNTE");
    tmp_msg_0.plan_id.assign("KWYMTFOIGTFSNEWKFXPALAJAPROCXYDVYEGWYHWMGLNTNZEWMKNGHDUCOZLTHRUUTTDSVSBDAYFHGQXACTFUZGQDXNVVFDHLEXNDVPEBQAXIXMLSXRPLQFTVESSGIFJVKZCLXLPHLQDCJHNJBV");
    tmp_msg_0.description.assign("WBGHVYEMFBWZPZMUBQRNYKBBHXEIIIHCJZTYXWTXPGYKLFTISELDXRHQIVSNWGTZALZAZQXCRHZKRUBJMSZSAFRABDUSYMCOMVANXSILZRPNGFHNAATPNWMVHDSYIQWXMGGBYRFEJQCDJKRDSQCJPCQUWJDNWJYKOOBHLTNHUKITHUGVFXCWEETDQCMESGRQDOEEOKTCKXVDLQOUSFKYJLNAJYCUFZLVLPPOXPVAFEN");
    tmp_msg_0.reference_frame = 76U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 65349U;
    tmp_tmp_msg_0_0.off_x = 0.870780289256;
    tmp_tmp_msg_0_0.off_y = 0.338409239171;
    tmp_tmp_msg_0_0.off_z = 0.166790705737;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.224338250451;
    tmp_msg_0.leader_speed_min = 0.00314585041104;
    tmp_msg_0.leader_speed_max = 0.580654198468;
    tmp_msg_0.leader_alt_min = 0.815734637159;
    tmp_msg_0.leader_alt_max = 0.205830493758;
    tmp_msg_0.pos_sim_err_lim = 0.383136136607;
    tmp_msg_0.pos_sim_err_wrn = 0.338639592128;
    tmp_msg_0.pos_sim_err_timeout = 38220U;
    tmp_msg_0.converg_max = 0.623158105295;
    tmp_msg_0.converg_timeout = 9222U;
    tmp_msg_0.comms_timeout = 20998U;
    tmp_msg_0.turb_lim = 0.116585127157;
    tmp_msg_0.custom.assign("SRRORDFINZAZBFDKTGBDCHKZZGZTLYSFLSMKVHHLTNNCQBPGRPGBIWGYVGDRRAUUFTKKSWKPJAEFLOBKQMXXDHZCZPUYTKENDJHAFAWVIHEFUECMAKOFWXIVXQLJLNUPYPMMLWMYUUAOQHMTBYGJHQNCLV");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.161073988848);
    msg.setSource(24176U);
    msg.setSourceEntity(154U);
    msg.setDestination(29711U);
    msg.setDestinationEntity(147U);
    msg.req_id = 47786U;
    msg.destination.assign("SXOSZOZCSPEWHKEITMUWBZFRJHMIELXPRCHCWUZGNAQGEFTRFRTYQLYJEMVNAYWHZAQCNEUKCFMJAEHQAPQRMIPFMVYSDWCEDGJPWLIYJZJFXNQICONFAFURXADSMAZZCYWVIROUBQRVABDUKVZH");
    msg.timeout = 0.470601266358;
    msg.range = 0.659322675105;
    msg.type = 98U;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 93U;
    tmp_msg_0.mask = 1901320261U;
    tmp_msg_0.scope_ref = 3074260770U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.405026083025);
    msg.setSource(47089U);
    msg.setSourceEntity(187U);
    msg.setDestination(29197U);
    msg.setDestinationEntity(171U);
    msg.req_id = 46566U;
    msg.destination.assign("ADHIGJANZRQKIYKNWBXNUE");
    msg.timeout = 0.393238655211;
    msg.range = 0.40224108557;
    msg.type = 199U;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZYKMAAYFOQGPWMKYEAJDXBEITZFSGKILLFDGFOQRXSZUAVVXRFMCBUSWNNPPRZREHSPKAOMMAQQXETGVPDZCYKFDWMIRZSUNGOOTYCBSLFVLCAOCYQMUTGJXLIBQUCWYJUSEIFTZHAYIFD");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.622093031328);
    msg.setSource(1925U);
    msg.setSourceEntity(28U);
    msg.setDestination(2517U);
    msg.setDestinationEntity(51U);
    msg.req_id = 518U;
    msg.type = 26U;
    msg.status = 138U;
    msg.info.assign("MSBPINVUMLBBSDJKJZEELHFVCMJVEWIMTGOX");
    msg.range = 0.555225145946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.248134905856);
    msg.setSource(30693U);
    msg.setSourceEntity(65U);
    msg.setDestination(56027U);
    msg.setDestinationEntity(150U);
    msg.req_id = 17863U;
    msg.type = 194U;
    msg.status = 62U;
    msg.info.assign("FYXBTTPATBIZHVSUFJQWHETWQQSQGCMRNSHCWDPYUYHUOGZLFDZJZENRNBFHMKBYHWNUGVNWEUIPIMGKWIOVXSQ");
    msg.range = 0.875330081126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.917525807538);
    msg.setSource(60670U);
    msg.setSourceEntity(149U);
    msg.setDestination(15115U);
    msg.setDestinationEntity(173U);
    msg.req_id = 44925U;
    msg.type = 90U;
    msg.status = 47U;
    msg.info.assign("DNTTCLAMQMEGNHREQGASENGLPWTQNXJHKNSPJMBESGSYVAVHYFKCPJGBEOOUEUFDKUKBRXOCOWAHVUEPRWZTLBQQRUAJEQRCBORVCRFHJCDLOPTYUDYGQBLJVPYZVZNAHPYCLCLTYIIMHTNAVQQTHPWF");
    msg.range = 0.412862267028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.576584586201);
    msg.setSource(11080U);
    msg.setSourceEntity(71U);
    msg.setDestination(4198U);
    msg.setDestinationEntity(97U);
    msg.value = 14294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.501929749107);
    msg.setSource(25604U);
    msg.setSourceEntity(40U);
    msg.setDestination(24312U);
    msg.setDestinationEntity(25U);
    msg.value = -21309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.135198103269);
    msg.setSource(42833U);
    msg.setSourceEntity(169U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(177U);
    msg.value = -9506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.0494936632068);
    msg.setSource(19125U);
    msg.setSourceEntity(244U);
    msg.setDestination(1203U);
    msg.setDestinationEntity(99U);
    msg.value = 0.109007188266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.55289862961);
    msg.setSource(36911U);
    msg.setSourceEntity(155U);
    msg.setDestination(55937U);
    msg.setDestinationEntity(225U);
    msg.value = 0.179326558686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.80879149527);
    msg.setSource(28845U);
    msg.setSourceEntity(185U);
    msg.setDestination(32358U);
    msg.setDestinationEntity(70U);
    msg.value = 0.252911006399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.188180899163);
    msg.setSource(30254U);
    msg.setSourceEntity(45U);
    msg.setDestination(24070U);
    msg.setDestinationEntity(53U);
    msg.value = 0.839804622887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.93464322302);
    msg.setSource(1024U);
    msg.setSourceEntity(225U);
    msg.setDestination(34297U);
    msg.setDestinationEntity(165U);
    msg.value = 0.595655738381;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8499631656);
    msg.setSource(33454U);
    msg.setSourceEntity(144U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(84U);
    msg.value = 0.521622632442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.519981260186);
    msg.setSource(12243U);
    msg.setSourceEntity(84U);
    msg.setDestination(20310U);
    msg.setDestinationEntity(106U);
    msg.validity = 13942U;
    msg.type = 77U;
    msg.utc_year = 4692U;
    msg.utc_month = 218U;
    msg.utc_day = 222U;
    msg.utc_time = 0.806227423669;
    msg.lat = 0.0725171639463;
    msg.lon = 0.676205558991;
    msg.height = 0.215547872535;
    msg.satellites = 136U;
    msg.cog = 0.369551895144;
    msg.sog = 0.369409788076;
    msg.hdop = 0.727141669084;
    msg.vdop = 0.268590512721;
    msg.hacc = 0.183903118125;
    msg.vacc = 0.793249267514;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.808810178532);
    msg.setSource(28657U);
    msg.setSourceEntity(196U);
    msg.setDestination(14926U);
    msg.setDestinationEntity(127U);
    msg.validity = 39518U;
    msg.type = 166U;
    msg.utc_year = 22878U;
    msg.utc_month = 220U;
    msg.utc_day = 107U;
    msg.utc_time = 0.620412927248;
    msg.lat = 0.732020074232;
    msg.lon = 0.328817971904;
    msg.height = 0.918723015869;
    msg.satellites = 197U;
    msg.cog = 0.244029634095;
    msg.sog = 0.849657111145;
    msg.hdop = 0.318947455411;
    msg.vdop = 0.234190690529;
    msg.hacc = 0.38782355908;
    msg.vacc = 0.250299401009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.111500381254);
    msg.setSource(22448U);
    msg.setSourceEntity(37U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(178U);
    msg.validity = 39207U;
    msg.type = 78U;
    msg.utc_year = 21631U;
    msg.utc_month = 194U;
    msg.utc_day = 166U;
    msg.utc_time = 0.542590856856;
    msg.lat = 0.493325677418;
    msg.lon = 0.554996258899;
    msg.height = 0.0349787445084;
    msg.satellites = 164U;
    msg.cog = 0.143333212112;
    msg.sog = 0.070122689144;
    msg.hdop = 0.405141868241;
    msg.vdop = 0.228581985292;
    msg.hacc = 0.450942077893;
    msg.vacc = 0.525055506635;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.382875046443);
    msg.setSource(26983U);
    msg.setSourceEntity(22U);
    msg.setDestination(46538U);
    msg.setDestinationEntity(74U);
    msg.time = 0.36210990397;
    msg.phi = 0.206342602325;
    msg.theta = 0.425582180808;
    msg.psi = 0.638084955467;
    msg.psi_magnetic = 0.503668323646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.125131294792);
    msg.setSource(41554U);
    msg.setSourceEntity(17U);
    msg.setDestination(38488U);
    msg.setDestinationEntity(217U);
    msg.time = 0.743993759081;
    msg.phi = 0.924966671013;
    msg.theta = 0.259388720097;
    msg.psi = 0.631736765394;
    msg.psi_magnetic = 0.0662423934821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.0363453791424);
    msg.setSource(9711U);
    msg.setSourceEntity(198U);
    msg.setDestination(24618U);
    msg.setDestinationEntity(180U);
    msg.time = 0.353129698578;
    msg.phi = 0.890494222914;
    msg.theta = 0.722749537097;
    msg.psi = 0.20098718422;
    msg.psi_magnetic = 0.0493810164304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.248740764212);
    msg.setSource(39968U);
    msg.setSourceEntity(153U);
    msg.setDestination(46484U);
    msg.setDestinationEntity(144U);
    msg.time = 0.733399778679;
    msg.x = 0.654527295425;
    msg.y = 0.873520469983;
    msg.z = 0.942743225402;
    msg.timestep = 0.30787102795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0667071243087);
    msg.setSource(24490U);
    msg.setSourceEntity(58U);
    msg.setDestination(40458U);
    msg.setDestinationEntity(243U);
    msg.time = 0.846230234651;
    msg.x = 0.683532521769;
    msg.y = 0.813100208138;
    msg.z = 0.974412439203;
    msg.timestep = 0.482538400093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0436152381003);
    msg.setSource(36260U);
    msg.setSourceEntity(118U);
    msg.setDestination(29508U);
    msg.setDestinationEntity(245U);
    msg.time = 0.165268646188;
    msg.x = 0.286467929856;
    msg.y = 0.59511808023;
    msg.z = 0.455779104271;
    msg.timestep = 0.682555409894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.348160552992);
    msg.setSource(48589U);
    msg.setSourceEntity(63U);
    msg.setDestination(27552U);
    msg.setDestinationEntity(164U);
    msg.time = 0.717206996069;
    msg.x = 0.815218440212;
    msg.y = 0.045691089332;
    msg.z = 0.27298631856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.172485069427);
    msg.setSource(10312U);
    msg.setSourceEntity(219U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(0U);
    msg.time = 0.365873522932;
    msg.x = 0.00902086165461;
    msg.y = 0.567286971306;
    msg.z = 0.633796150203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.419478370247);
    msg.setSource(20096U);
    msg.setSourceEntity(44U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(16U);
    msg.time = 0.719703411272;
    msg.x = 0.839425923619;
    msg.y = 0.290048951414;
    msg.z = 0.959679482753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.226818368469);
    msg.setSource(1101U);
    msg.setSourceEntity(154U);
    msg.setDestination(43497U);
    msg.setDestinationEntity(12U);
    msg.time = 0.323771513971;
    msg.x = 0.889629541225;
    msg.y = 0.797331378781;
    msg.z = 0.523670738293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.0836053412845);
    msg.setSource(56229U);
    msg.setSourceEntity(34U);
    msg.setDestination(13275U);
    msg.setDestinationEntity(153U);
    msg.time = 0.235973295664;
    msg.x = 0.665679513692;
    msg.y = 0.420726636785;
    msg.z = 0.828937528215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.119355806653);
    msg.setSource(168U);
    msg.setSourceEntity(122U);
    msg.setDestination(56338U);
    msg.setDestinationEntity(104U);
    msg.time = 0.911061126447;
    msg.x = 0.0972809778764;
    msg.y = 0.678732473219;
    msg.z = 0.0053854165929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.130883085497);
    msg.setSource(19762U);
    msg.setSourceEntity(137U);
    msg.setDestination(50096U);
    msg.setDestinationEntity(129U);
    msg.time = 0.0606142220135;
    msg.x = 0.702925716958;
    msg.y = 0.183597695019;
    msg.z = 0.527444409457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.368412324519);
    msg.setSource(15947U);
    msg.setSourceEntity(104U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(122U);
    msg.time = 0.260261777824;
    msg.x = 0.874067215869;
    msg.y = 0.703363660539;
    msg.z = 0.645392156477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.226274926203);
    msg.setSource(6410U);
    msg.setSourceEntity(74U);
    msg.setDestination(11293U);
    msg.setDestinationEntity(39U);
    msg.time = 0.77065369451;
    msg.x = 0.207313745801;
    msg.y = 0.527577121665;
    msg.z = 0.092920536973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.179878060438);
    msg.setSource(40710U);
    msg.setSourceEntity(212U);
    msg.setDestination(29271U);
    msg.setDestinationEntity(86U);
    msg.validity = 81U;
    msg.x = 0.251285698914;
    msg.y = 0.270531864178;
    msg.z = 0.649698324075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.210528388422);
    msg.setSource(42561U);
    msg.setSourceEntity(216U);
    msg.setDestination(4983U);
    msg.setDestinationEntity(243U);
    msg.validity = 235U;
    msg.x = 0.900542902976;
    msg.y = 0.476989560584;
    msg.z = 0.869462900992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.184279458681);
    msg.setSource(5032U);
    msg.setSourceEntity(106U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(118U);
    msg.validity = 140U;
    msg.x = 0.192192416971;
    msg.y = 0.0108261632319;
    msg.z = 0.612872376223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.175130773824);
    msg.setSource(63119U);
    msg.setSourceEntity(86U);
    msg.setDestination(13958U);
    msg.setDestinationEntity(42U);
    msg.validity = 195U;
    msg.x = 0.863126900763;
    msg.y = 0.914402219568;
    msg.z = 0.831610462969;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.981527964665);
    msg.setSource(2826U);
    msg.setSourceEntity(149U);
    msg.setDestination(46929U);
    msg.setDestinationEntity(222U);
    msg.validity = 26U;
    msg.x = 0.150708336532;
    msg.y = 0.273699983347;
    msg.z = 0.136609415444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.427861509726);
    msg.setSource(52613U);
    msg.setSourceEntity(63U);
    msg.setDestination(60346U);
    msg.setDestinationEntity(59U);
    msg.validity = 226U;
    msg.x = 0.0574971766989;
    msg.y = 0.762025535735;
    msg.z = 0.741596137713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.992264955985);
    msg.setSource(7295U);
    msg.setSourceEntity(234U);
    msg.setDestination(6713U);
    msg.setDestinationEntity(72U);
    msg.time = 0.243614535882;
    msg.x = 0.752764068896;
    msg.y = 0.258387708381;
    msg.z = 0.0579088979867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.225582104275);
    msg.setSource(61114U);
    msg.setSourceEntity(107U);
    msg.setDestination(37970U);
    msg.setDestinationEntity(211U);
    msg.time = 0.8123103442;
    msg.x = 0.921470873105;
    msg.y = 0.703528725966;
    msg.z = 0.76081810456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.49885016871);
    msg.setSource(55990U);
    msg.setSourceEntity(187U);
    msg.setDestination(34149U);
    msg.setDestinationEntity(159U);
    msg.time = 0.500599353453;
    msg.x = 0.834788420102;
    msg.y = 0.714060253701;
    msg.z = 0.407992258516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.342788530023);
    msg.setSource(51498U);
    msg.setSourceEntity(15U);
    msg.setDestination(3715U);
    msg.setDestinationEntity(200U);
    msg.validity = 193U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.411393714776;
    tmp_msg_0.beam_height = 0.0798728427805;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.205478573373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0614204725845);
    msg.setSource(10640U);
    msg.setSourceEntity(218U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(162U);
    msg.validity = 251U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.46936015189;
    tmp_msg_0.beam_height = 0.000504787003208;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.203379246463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.460442587775);
    msg.setSource(2299U);
    msg.setSourceEntity(231U);
    msg.setDestination(58948U);
    msg.setDestinationEntity(195U);
    msg.validity = 192U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.349881631306;
    tmp_msg_0.y = 0.0936451948769;
    tmp_msg_0.z = 0.233885627636;
    tmp_msg_0.phi = 0.0189033947083;
    tmp_msg_0.theta = 0.572249136503;
    tmp_msg_0.psi = 0.649648400507;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.805421662431;
    tmp_msg_1.beam_height = 0.270520700442;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.542176861706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.531625498908);
    msg.setSource(3873U);
    msg.setSourceEntity(31U);
    msg.setDestination(60831U);
    msg.setDestinationEntity(238U);
    msg.value = 0.62757977474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.616422099302);
    msg.setSource(10806U);
    msg.setSourceEntity(250U);
    msg.setDestination(14683U);
    msg.setDestinationEntity(210U);
    msg.value = 0.725172453665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.30639787605);
    msg.setSource(45596U);
    msg.setSourceEntity(165U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(61U);
    msg.value = 0.103703163695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.717983918908);
    msg.setSource(5956U);
    msg.setSourceEntity(160U);
    msg.setDestination(12150U);
    msg.setDestinationEntity(47U);
    msg.value = 0.699736829786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.378741963428);
    msg.setSource(46226U);
    msg.setSourceEntity(206U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(101U);
    msg.value = 0.862804302007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.963800795757);
    msg.setSource(9207U);
    msg.setSourceEntity(151U);
    msg.setDestination(37603U);
    msg.setDestinationEntity(218U);
    msg.value = 0.0579409769597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.297707629937);
    msg.setSource(62818U);
    msg.setSourceEntity(5U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(201U);
    msg.value = 0.431509343045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.754606908123);
    msg.setSource(63484U);
    msg.setSourceEntity(46U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(101U);
    msg.value = 0.48697465179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.946901533881);
    msg.setSource(51974U);
    msg.setSourceEntity(165U);
    msg.setDestination(32835U);
    msg.setDestinationEntity(26U);
    msg.value = 0.761285177963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.84589661774);
    msg.setSource(23345U);
    msg.setSourceEntity(112U);
    msg.setDestination(26335U);
    msg.setDestinationEntity(147U);
    msg.value = 0.143197147206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.745842042764);
    msg.setSource(30112U);
    msg.setSourceEntity(10U);
    msg.setDestination(31955U);
    msg.setDestinationEntity(130U);
    msg.value = 0.464326731536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.667948094734);
    msg.setSource(52221U);
    msg.setSourceEntity(210U);
    msg.setDestination(31245U);
    msg.setDestinationEntity(137U);
    msg.value = 0.748633993355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.263660781077);
    msg.setSource(55249U);
    msg.setSourceEntity(6U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(209U);
    msg.value = 0.401348438035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.748554577389);
    msg.setSource(46119U);
    msg.setSourceEntity(60U);
    msg.setDestination(8477U);
    msg.setDestinationEntity(199U);
    msg.value = 0.517119120749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.404140577614);
    msg.setSource(17455U);
    msg.setSourceEntity(88U);
    msg.setDestination(21435U);
    msg.setDestinationEntity(254U);
    msg.value = 0.694988557206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.100947367501);
    msg.setSource(60457U);
    msg.setSourceEntity(209U);
    msg.setDestination(59118U);
    msg.setDestinationEntity(7U);
    msg.value = 0.177610673157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.0484780701611);
    msg.setSource(65421U);
    msg.setSourceEntity(193U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(159U);
    msg.value = 0.779906711561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.135295953262);
    msg.setSource(42067U);
    msg.setSourceEntity(78U);
    msg.setDestination(27873U);
    msg.setDestinationEntity(109U);
    msg.value = 0.29985711664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.118358657805);
    msg.setSource(42256U);
    msg.setSourceEntity(90U);
    msg.setDestination(33456U);
    msg.setDestinationEntity(37U);
    msg.value = 0.948552503314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.781561666998);
    msg.setSource(62517U);
    msg.setSourceEntity(122U);
    msg.setDestination(34667U);
    msg.setDestinationEntity(27U);
    msg.value = 0.827006599754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.107312323012);
    msg.setSource(39736U);
    msg.setSourceEntity(40U);
    msg.setDestination(26464U);
    msg.setDestinationEntity(173U);
    msg.value = 0.178969598739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.199194808922);
    msg.setSource(30397U);
    msg.setSourceEntity(28U);
    msg.setDestination(63259U);
    msg.setDestinationEntity(163U);
    msg.value = 0.869049827615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.466836437251);
    msg.setSource(37503U);
    msg.setSourceEntity(43U);
    msg.setDestination(19426U);
    msg.setDestinationEntity(81U);
    msg.value = 0.682117478031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.491777604384);
    msg.setSource(26995U);
    msg.setSourceEntity(74U);
    msg.setDestination(11975U);
    msg.setDestinationEntity(233U);
    msg.value = 0.314170641924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.238518082103);
    msg.setSource(41720U);
    msg.setSourceEntity(239U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(63U);
    msg.direction = 0.36692199953;
    msg.speed = 0.00069846413719;
    msg.turbulence = 0.329666657295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.87683665739);
    msg.setSource(48711U);
    msg.setSourceEntity(171U);
    msg.setDestination(60622U);
    msg.setDestinationEntity(218U);
    msg.direction = 0.804219593539;
    msg.speed = 0.141256754894;
    msg.turbulence = 0.799693419217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.316216261232);
    msg.setSource(38815U);
    msg.setSourceEntity(194U);
    msg.setDestination(59974U);
    msg.setDestinationEntity(190U);
    msg.direction = 0.809975843694;
    msg.speed = 0.529674292277;
    msg.turbulence = 0.403074034502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.543436054396);
    msg.setSource(17196U);
    msg.setSourceEntity(191U);
    msg.setDestination(11275U);
    msg.setDestinationEntity(142U);
    msg.value = 0.92932089088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.731645753803);
    msg.setSource(52999U);
    msg.setSourceEntity(41U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(166U);
    msg.value = 0.184147033989;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.773151331701);
    msg.setSource(32204U);
    msg.setSourceEntity(216U);
    msg.setDestination(33693U);
    msg.setDestinationEntity(33U);
    msg.value = 0.76890386984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.294450668575);
    msg.setSource(29841U);
    msg.setSourceEntity(50U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(211U);
    msg.value.assign("ZNBJFXTUMWCQGGCYDHEJRCNWOWKECVRLLWJNLLQVFLGRILKCMYNRMFWPUXYGVVNTTSTAQSKXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.0804206126606);
    msg.setSource(25956U);
    msg.setSourceEntity(226U);
    msg.setDestination(13312U);
    msg.setDestinationEntity(122U);
    msg.value.assign("JVRPLFWISQKUJYMTZDBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.0671513431008);
    msg.setSource(41474U);
    msg.setSourceEntity(182U);
    msg.setDestination(56325U);
    msg.setDestinationEntity(179U);
    msg.value.assign("ADTFRSEXGNKICQUHUMSJVMZJXXBAEGRQKCDACHQDLSECDJCBRIKNFPTYHVODKJVMLCTSOFBSFEZFROGRMMKMZLSJTYMAROEWWLFVYNQJZVBTRLHTXOZHCNNOUJGISBPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.409264719144);
    msg.setSource(9861U);
    msg.setSourceEntity(204U);
    msg.setDestination(11456U);
    msg.setDestinationEntity(69U);
    const char tmp_msg_0[] = {68, -21, 0, -95, 24, 64, 31, -112, -3, 5, 112, 94, -127, 69, 100, -30, -36, -45, 74, -13, -65, -83, 52, 76, -69, 106, 96, 83, -46, -111, -16, 20, -78, 36, 3, -34, -115, -79, -36, 43, -120, 41, 122, 38, 3, 76, 40, 80, -6, 1, 117, 53, 10, 112, 84, 125, 53, 66, -116, 19, 125, 81, 122, -69, -60, -36, -1, -81, -28, -14, -120, 29, 99, -9, -6, 56};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.219346788867);
    msg.setSource(4575U);
    msg.setSourceEntity(88U);
    msg.setDestination(57437U);
    msg.setDestinationEntity(70U);
    const char tmp_msg_0[] = {75, -56, 119, -61, -88, 126, -73, -96, -65, -48, -45, 102, -50, 101, -122, 86, -7, 73, 28, -71, 121, 18, -62, -71, -55, 31, -71, -48, 105, 123, -72, -33, -20, -58, 18, -92, -96, -120, -82, -68, -81, 11, -70, -77, -118, -108, 73, 34, 111, -15, 54, -30, -71, -89, 120, 20, -5, 78, -99, -11, 30, 37, 125, 65, 65, 40, -80, -49, 56, -67, 71, -43, -14, -34, 6, 67, -75, -45, 25, -87, -82, 97, 10, -50, 11, -54, -21, -105, 105, -31, -89, -113, -47, 39, -81, 91, -79, 100, 54, 119, -2, 76, -17, -124};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.90225164092);
    msg.setSource(4418U);
    msg.setSourceEntity(118U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(56U);
    const char tmp_msg_0[] = {66, 49, -124, 25, 78, 54, 14, 52, -38, 39, 67, 6, 65, 9, -23, 94, 25, 46, -102, -22, -109, -22, -114, 85, 70, -115, 23, -13, 90, -118, 86, 112, 22, 80, -33, 94, -121, -63, -54, 63, 28, -80, -10, -125, -112, 19, 71, 67, 21, -119, -56, 72, -71, 33, -118, -42, 34, 59, -91, -13, -83, 16, 112, 116, -53, 71, -55, -87, -120, 92, 60, 6, 85, -42, 117, -122, -58, 62, 59, -81, 29, -20, -56, -30, 41, -48, 71, 69, 125, -34, -116, -50, 85, -60, 120, 15, 3, 68, -44, -93};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.645065927368);
    msg.setSource(61944U);
    msg.setSourceEntity(37U);
    msg.setDestination(43861U);
    msg.setDestinationEntity(131U);
    msg.value = 0.567997368516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.230201302854);
    msg.setSource(61418U);
    msg.setSourceEntity(156U);
    msg.setDestination(21752U);
    msg.setDestinationEntity(3U);
    msg.value = 0.372373464498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.128021614214);
    msg.setSource(31391U);
    msg.setSourceEntity(92U);
    msg.setDestination(917U);
    msg.setDestinationEntity(42U);
    msg.value = 0.619324648189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.337736408775);
    msg.setSource(11409U);
    msg.setSourceEntity(146U);
    msg.setDestination(18735U);
    msg.setDestinationEntity(240U);
    msg.type = 65U;
    msg.frequency = 3443470857U;
    msg.min_range = 33216U;
    msg.max_range = 22677U;
    msg.bits_per_point = 5U;
    msg.scale_factor = 0.275913550876;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.391689329376;
    tmp_msg_0.beam_height = 0.840570545129;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-118, -21, 34, 88, 114, 18, -116, -109, 16, 69, -21, 44, -98, 30, -120, 65, 98, -25, 65, -67, -95, 108, 126, -99, -39, -105, 79, -88, -6, 61, -11, 83, 100, 51, -31, -55, -67, -91, -58, -96, 27, -117, 117, -52, -33, -87, 84, 98, 109, 37, 100, -18, 96, -23, -93, -125, -87, -117, 28, 43, 109, 39, -53, -38, 108, 63, 52, 113, 102, 69, 46};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.883460922285);
    msg.setSource(37408U);
    msg.setSourceEntity(218U);
    msg.setDestination(59823U);
    msg.setDestinationEntity(121U);
    msg.type = 122U;
    msg.frequency = 3990346417U;
    msg.min_range = 13815U;
    msg.max_range = 27181U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.609685328407;
    const char tmp_msg_0[] = {77, 94, 85, -37, 112, 13, 50, 124, -52, -43, 58, -3, -123, -35, 67, 86, 103, 12, -3, 67, -10, 26, -39, 119, -116, 36, 75, 80, -35, 46, 116, 103, 90, -51, 102, 32, 35, 96, 89, -74, 83, -105, -35, -1, -120, 60, 94, -44, 35, -26, -8, -33, -76, 113, -24, 120, -75, 71, 96, -2, -3, 93, -82, -106, -71, -122, -22, -18, 16, -10, -68, 58, 118, 18, -56, -92, 20, 27, -89, 64, 100, 123, 94, 22, 74, -93, -117, 17, 83, 43, -111, 10, -12, -49, -50, 102, 29, -114, 103, 116, -108, 122, 81, 55, 31, 42, -10, 61, 35, -84, 35, 28, 29, -65, -20, -52, -120, -10, 3, 74, 43, -38, 104, 114, 15, -95, -37, 103, -118, 44, -41, 124, -60, 110, 109, -4, -6, -106, 23, 38, -76, 14, -23, -79, 39, 23, -52, 12, -124, -77, 121, -52, -126, -107, -93, 87, 110, -27, 7, -119, 41, -66, -66, 41, -5, 38, 8, -51, -27, -24, -113, -124, 119, 11, 107, -15, 94, 103, -41, 60, 107, -1, -103, -117, -53, 12, -69, 58, 35, -95, -68, -85, 51, 53, -40, 81, 15, -44, 45, 9, -70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.183958674053);
    msg.setSource(46638U);
    msg.setSourceEntity(191U);
    msg.setDestination(46305U);
    msg.setDestinationEntity(108U);
    msg.type = 236U;
    msg.frequency = 1778325898U;
    msg.min_range = 46211U;
    msg.max_range = 47391U;
    msg.bits_per_point = 76U;
    msg.scale_factor = 0.969522874253;
    const char tmp_msg_0[] = {-26, 97, 111, 49, -53, 29, 11, -7, -43, 12, 47, 89, 83, 54, -72, 116, 86, -24, 43, -5, -40, -17, 18, -115, -61, 90, 8, -119, 6, 84, -49, 2, 112, 94, -22, -12, 93, 116, 65, -115, 40, 4, 24, 68, 95, -90, 91, 44, -107, -56, -105, -71, 94, 52, -9, -65, 83, -1, -103, -4, 124, -69, -115, -44, -8, 100, 41, 50, -124, 122, 2, -62, 35, 1, -23, -98, 38, -63, -30, 1, -36, -2, 40, 63, -126, -80, 48, -13, -12, 103, -95, -38, -125, 122, -71, 108, -98, -99, -17, -67, -92, 7, -128, 63, 57, 9, -7, 25, 113, -91, 90, 84, 95, 15, 115, 55, 94, -20, -3, 19, 31, -104, -14, -114, -28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.168608544885);
    msg.setSource(12259U);
    msg.setSourceEntity(70U);
    msg.setDestination(59774U);
    msg.setDestinationEntity(91U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.56418103295);
    msg.setSource(33573U);
    msg.setSourceEntity(56U);
    msg.setDestination(63831U);
    msg.setDestinationEntity(67U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.200561079856);
    msg.setSource(33113U);
    msg.setSourceEntity(154U);
    msg.setDestination(21250U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.0801654073057);
    msg.setSource(20691U);
    msg.setSourceEntity(66U);
    msg.setDestination(39898U);
    msg.setDestinationEntity(135U);
    msg.op = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.336375871617);
    msg.setSource(2457U);
    msg.setSourceEntity(220U);
    msg.setDestination(44576U);
    msg.setDestinationEntity(1U);
    msg.op = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.790485471342);
    msg.setSource(43741U);
    msg.setSourceEntity(236U);
    msg.setDestination(36480U);
    msg.setDestinationEntity(59U);
    msg.op = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.643125252118);
    msg.setSource(22873U);
    msg.setSourceEntity(253U);
    msg.setDestination(47740U);
    msg.setDestinationEntity(111U);
    msg.value = 0.309020639309;
    msg.confidence = 0.591996861294;
    msg.opmodes.assign("TQOZQWQJUFLCPHMYPUZYMABFPDANVUZCOIEKJRZUVEQKSPUDUNSEAHIADHFTLFYZTNPCYRJSJWOEIMINRAZLZXIEKTODWWCVARDWQQFOAWQKJKROTXAGKUAUHFGGBQBMHLGESBPKUVJRMIBJWCSVMFPLOPVYBCMDHJYRGSITGIXKYVEFZNSBXRYELOCHMLRQXLRTSPBDLFOWXKXJGXCYHQXNTZMKNINODD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.185116662407);
    msg.setSource(31487U);
    msg.setSourceEntity(254U);
    msg.setDestination(14594U);
    msg.setDestinationEntity(23U);
    msg.value = 0.448087075463;
    msg.confidence = 0.728350616942;
    msg.opmodes.assign("DYPCADEZAFFSNLHPAOGZADNJBBRVEEYVWIKHUMWEVUSZRLIIGJONMKUJHYMXRJPORBXTEBXXADSFWPAXYTZUWJSNHFHVKYXGQBCSXNGXSNFNDWUGYSJYGINTFFLHMLMGLLCQCDWEJDCVJVHJUVBBBSQLMOQPMOLHKZUWPNCXPLEGOVDMAARCVMKFLRKCZIIQQIIEYKTYAAUOZEOUIPEBYTJTWTRKGPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.861471634073);
    msg.setSource(63168U);
    msg.setSourceEntity(93U);
    msg.setDestination(7004U);
    msg.setDestinationEntity(179U);
    msg.value = 0.322812040566;
    msg.confidence = 0.250593073141;
    msg.opmodes.assign("EREVAQRIPHRKFQAKIKMJMWYHFXWUXOGUTLOXSYKEGGEDSYZWCGYVNFHUBULZMJSLTBJEHDPTQSKVQXEPRVGPIOBBHTTENECATZLQOBPKBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.388145709498);
    msg.setSource(6696U);
    msg.setSourceEntity(58U);
    msg.setDestination(49957U);
    msg.setDestinationEntity(235U);
    msg.itow = 1142421484U;
    msg.lat = 0.000962223324245;
    msg.lon = 0.514695904238;
    msg.height_ell = 0.290596439213;
    msg.height_sea = 0.307381066787;
    msg.hacc = 0.532450504156;
    msg.vacc = 0.879804221843;
    msg.vel_n = 0.225675517916;
    msg.vel_e = 0.163957297073;
    msg.vel_d = 0.00660950221147;
    msg.speed = 0.364829524991;
    msg.gspeed = 0.664243619689;
    msg.heading = 0.68326362769;
    msg.sacc = 0.791737258343;
    msg.cacc = 0.942205663142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.77691349479);
    msg.setSource(27307U);
    msg.setSourceEntity(93U);
    msg.setDestination(41978U);
    msg.setDestinationEntity(156U);
    msg.itow = 429625884U;
    msg.lat = 0.249289728164;
    msg.lon = 0.855394480037;
    msg.height_ell = 0.737207167189;
    msg.height_sea = 0.963951935543;
    msg.hacc = 0.760027756028;
    msg.vacc = 0.179309128384;
    msg.vel_n = 0.431267256274;
    msg.vel_e = 0.928216134993;
    msg.vel_d = 0.528891902906;
    msg.speed = 0.281084359221;
    msg.gspeed = 0.761149313653;
    msg.heading = 0.0339499270143;
    msg.sacc = 0.909253666109;
    msg.cacc = 0.34306964712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.498919822614);
    msg.setSource(49331U);
    msg.setSourceEntity(190U);
    msg.setDestination(28245U);
    msg.setDestinationEntity(182U);
    msg.itow = 3900137359U;
    msg.lat = 0.957346827079;
    msg.lon = 0.844869324762;
    msg.height_ell = 0.137045970394;
    msg.height_sea = 0.93679638323;
    msg.hacc = 0.260557099868;
    msg.vacc = 0.616698672887;
    msg.vel_n = 0.530944699126;
    msg.vel_e = 0.757752455492;
    msg.vel_d = 0.0480805584211;
    msg.speed = 0.60567976693;
    msg.gspeed = 0.774270881264;
    msg.heading = 0.234014225301;
    msg.sacc = 0.974278665903;
    msg.cacc = 0.763148683259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.605380416413);
    msg.setSource(6773U);
    msg.setSourceEntity(104U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(137U);
    msg.id = 133U;
    msg.value = 0.115340986178;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.440489161291);
    msg.setSource(16990U);
    msg.setSourceEntity(23U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(180U);
    msg.id = 34U;
    msg.value = 0.712133058485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.662325560381);
    msg.setSource(640U);
    msg.setSourceEntity(73U);
    msg.setDestination(1604U);
    msg.setDestinationEntity(198U);
    msg.id = 221U;
    msg.value = 0.780099418539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.839972393802);
    msg.setSource(62686U);
    msg.setSourceEntity(125U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(204U);
    msg.x = 0.0957716045929;
    msg.y = 0.39010052068;
    msg.z = 0.745695792979;
    msg.phi = 0.454460800504;
    msg.theta = 0.444112052239;
    msg.psi = 0.458908517958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.781102490376);
    msg.setSource(63489U);
    msg.setSourceEntity(135U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(11U);
    msg.x = 0.888462290208;
    msg.y = 0.477544676899;
    msg.z = 0.439783212142;
    msg.phi = 0.23574574463;
    msg.theta = 0.61816913147;
    msg.psi = 0.216729133055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.963669900384);
    msg.setSource(44528U);
    msg.setSourceEntity(69U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(78U);
    msg.x = 0.358679256116;
    msg.y = 0.606080061216;
    msg.z = 0.0904102081836;
    msg.phi = 0.340360518848;
    msg.theta = 0.666603853749;
    msg.psi = 0.0484053410879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.870340831277);
    msg.setSource(25429U);
    msg.setSourceEntity(50U);
    msg.setDestination(3791U);
    msg.setDestinationEntity(14U);
    msg.beam_width = 0.0248735440492;
    msg.beam_height = 0.80369870812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.817896291065);
    msg.setSource(38113U);
    msg.setSourceEntity(90U);
    msg.setDestination(39113U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.151671956354;
    msg.beam_height = 0.117395324955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.551454968811);
    msg.setSource(36811U);
    msg.setSourceEntity(133U);
    msg.setDestination(46745U);
    msg.setDestinationEntity(116U);
    msg.beam_width = 0.0769255828912;
    msg.beam_height = 0.455641516131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.625582835859);
    msg.setSource(22139U);
    msg.setSourceEntity(61U);
    msg.setDestination(55336U);
    msg.setDestinationEntity(167U);
    msg.sane = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.0626574445757);
    msg.setSource(2584U);
    msg.setSourceEntity(146U);
    msg.setDestination(40359U);
    msg.setDestinationEntity(52U);
    msg.sane = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.751663043833);
    msg.setSource(9860U);
    msg.setSourceEntity(125U);
    msg.setDestination(20463U);
    msg.setDestinationEntity(9U);
    msg.sane = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.453336925335);
    msg.setSource(2735U);
    msg.setSourceEntity(153U);
    msg.setDestination(40418U);
    msg.setDestinationEntity(106U);
    msg.value = 0.675966789211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.362535307059);
    msg.setSource(46236U);
    msg.setSourceEntity(55U);
    msg.setDestination(8067U);
    msg.setDestinationEntity(10U);
    msg.value = 0.281158135033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.723995911706);
    msg.setSource(32274U);
    msg.setSourceEntity(221U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(34U);
    msg.value = 0.47046370029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.713610431229);
    msg.setSource(65279U);
    msg.setSourceEntity(230U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(233U);
    msg.value = 0.983819002071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.244850384019);
    msg.setSource(64013U);
    msg.setSourceEntity(190U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(55U);
    msg.value = 0.74923352297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.801304541285);
    msg.setSource(55140U);
    msg.setSourceEntity(219U);
    msg.setDestination(58007U);
    msg.setDestinationEntity(71U);
    msg.value = 0.245452762299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.14723354325);
    msg.setSource(59879U);
    msg.setSourceEntity(50U);
    msg.setDestination(916U);
    msg.setDestinationEntity(75U);
    msg.value = 0.311635231706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.276613811598);
    msg.setSource(24895U);
    msg.setSourceEntity(7U);
    msg.setDestination(20229U);
    msg.setDestinationEntity(232U);
    msg.value = 0.941872738287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.0134872083595);
    msg.setSource(64748U);
    msg.setSourceEntity(49U);
    msg.setDestination(11942U);
    msg.setDestinationEntity(77U);
    msg.value = 0.549423830837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.0057021799632);
    msg.setSource(46025U);
    msg.setSourceEntity(222U);
    msg.setDestination(19709U);
    msg.setDestinationEntity(30U);
    msg.value = 0.162214914033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.124293401346);
    msg.setSource(60501U);
    msg.setSourceEntity(123U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(61U);
    msg.value = 0.740928138815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.606181552873);
    msg.setSource(26120U);
    msg.setSourceEntity(152U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(14U);
    msg.value = 0.588548480895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.749936350258);
    msg.setSource(54698U);
    msg.setSourceEntity(252U);
    msg.setDestination(63098U);
    msg.setDestinationEntity(85U);
    msg.value = 0.191982682195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.599863837436);
    msg.setSource(7441U);
    msg.setSourceEntity(207U);
    msg.setDestination(58863U);
    msg.setDestinationEntity(248U);
    msg.value = 0.42909267413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.200070340232);
    msg.setSource(51346U);
    msg.setSourceEntity(51U);
    msg.setDestination(39134U);
    msg.setDestinationEntity(176U);
    msg.value = 0.235001515115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.478288146613);
    msg.setSource(29958U);
    msg.setSourceEntity(157U);
    msg.setDestination(57280U);
    msg.setDestinationEntity(65U);
    msg.value = 0.380200074151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.42852139071);
    msg.setSource(60737U);
    msg.setSourceEntity(4U);
    msg.setDestination(15869U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0292831635025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.38958957813);
    msg.setSource(28354U);
    msg.setSourceEntity(134U);
    msg.setDestination(7549U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0780232647495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.0597833277521);
    msg.setSource(13561U);
    msg.setSourceEntity(5U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(115U);
    msg.value = 0.851922072038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.183467304425);
    msg.setSource(45063U);
    msg.setSourceEntity(175U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(122U);
    msg.value = 0.607519640242;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.154210934611);
    msg.setSource(47457U);
    msg.setSourceEntity(214U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0780410106809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.194750867723);
    msg.setSource(18220U);
    msg.setSourceEntity(192U);
    msg.setDestination(16415U);
    msg.setDestinationEntity(149U);
    msg.value = 0.334202544701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.247769107006);
    msg.setSource(41342U);
    msg.setSourceEntity(19U);
    msg.setDestination(27955U);
    msg.setDestinationEntity(142U);
    msg.value = 0.227465930958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.578422047825);
    msg.setSource(22730U);
    msg.setSourceEntity(166U);
    msg.setDestination(11151U);
    msg.setDestinationEntity(162U);
    msg.value = 0.613990581203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.991303998686);
    msg.setSource(6729U);
    msg.setSourceEntity(162U);
    msg.setDestination(37562U);
    msg.setDestinationEntity(50U);
    msg.validity = 33840U;
    msg.type = 31U;
    msg.tow = 716607409U;
    msg.base_lat = 0.0425157739383;
    msg.base_lon = 0.700368425032;
    msg.base_height = 0.00935208350244;
    msg.n = 0.720730011583;
    msg.e = 0.247766203462;
    msg.d = 0.0385464324415;
    msg.v_n = 0.854074073923;
    msg.v_e = 0.645761792362;
    msg.v_d = 0.0397069173524;
    msg.satellites = 10U;
    msg.iar_hyp = 1344U;
    msg.iar_ratio = 0.895845533078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.00630975905761);
    msg.setSource(58516U);
    msg.setSourceEntity(85U);
    msg.setDestination(55257U);
    msg.setDestinationEntity(237U);
    msg.validity = 26273U;
    msg.type = 116U;
    msg.tow = 1049697904U;
    msg.base_lat = 0.844984695549;
    msg.base_lon = 0.448473193778;
    msg.base_height = 0.36245559449;
    msg.n = 0.838246630687;
    msg.e = 0.0712451044024;
    msg.d = 0.709239332876;
    msg.v_n = 0.063436501205;
    msg.v_e = 0.988348324554;
    msg.v_d = 0.302207779827;
    msg.satellites = 44U;
    msg.iar_hyp = 45462U;
    msg.iar_ratio = 0.888123063123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.443383237022);
    msg.setSource(54573U);
    msg.setSourceEntity(117U);
    msg.setDestination(31012U);
    msg.setDestinationEntity(4U);
    msg.validity = 24678U;
    msg.type = 243U;
    msg.tow = 394487915U;
    msg.base_lat = 0.977529058871;
    msg.base_lon = 0.365237282096;
    msg.base_height = 0.0979483857916;
    msg.n = 0.966192469466;
    msg.e = 0.9625561682;
    msg.d = 0.178177141804;
    msg.v_n = 0.800989671133;
    msg.v_e = 0.954274982197;
    msg.v_d = 0.0477631940816;
    msg.satellites = 87U;
    msg.iar_hyp = 53305U;
    msg.iar_ratio = 0.440378078774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.71791708241);
    msg.setSource(42777U);
    msg.setSourceEntity(3U);
    msg.setDestination(2104U);
    msg.setDestinationEntity(37U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.84680317287;
    tmp_msg_0.lon = 0.353767936;
    tmp_msg_0.height = 0.766162827186;
    tmp_msg_0.x = 0.803391654893;
    tmp_msg_0.y = 0.782412546544;
    tmp_msg_0.z = 0.319025375157;
    tmp_msg_0.phi = 0.48298962677;
    tmp_msg_0.theta = 0.145646317993;
    tmp_msg_0.psi = 0.454777535567;
    tmp_msg_0.u = 0.019393359742;
    tmp_msg_0.v = 0.93904903977;
    tmp_msg_0.w = 0.629054977271;
    tmp_msg_0.vx = 0.455702272714;
    tmp_msg_0.vy = 0.689699382506;
    tmp_msg_0.vz = 0.0498123592719;
    tmp_msg_0.p = 0.436527455183;
    tmp_msg_0.q = 0.280042156647;
    tmp_msg_0.r = 0.385724565424;
    tmp_msg_0.depth = 0.125126646107;
    tmp_msg_0.alt = 0.680895678678;
    msg.state.set(tmp_msg_0);
    msg.type = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.0732712922621);
    msg.setSource(16051U);
    msg.setSourceEntity(174U);
    msg.setDestination(43660U);
    msg.setDestinationEntity(193U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.124286909815;
    tmp_msg_0.lon = 0.131376936681;
    tmp_msg_0.height = 0.918628046063;
    tmp_msg_0.x = 0.267259451588;
    tmp_msg_0.y = 0.895631123262;
    tmp_msg_0.z = 0.026610560927;
    tmp_msg_0.phi = 0.471923764997;
    tmp_msg_0.theta = 0.604010752588;
    tmp_msg_0.psi = 0.278285282792;
    tmp_msg_0.u = 0.492767131736;
    tmp_msg_0.v = 0.481634264952;
    tmp_msg_0.w = 0.902828206905;
    tmp_msg_0.vx = 0.228289314505;
    tmp_msg_0.vy = 0.473065074922;
    tmp_msg_0.vz = 0.294210005772;
    tmp_msg_0.p = 0.310350152319;
    tmp_msg_0.q = 0.99977636773;
    tmp_msg_0.r = 0.0793338957146;
    tmp_msg_0.depth = 0.122762921968;
    tmp_msg_0.alt = 0.893629172509;
    msg.state.set(tmp_msg_0);
    msg.type = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.739733878111);
    msg.setSource(23114U);
    msg.setSourceEntity(136U);
    msg.setDestination(10673U);
    msg.setDestinationEntity(239U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.371774700816;
    tmp_msg_0.lon = 0.735461604264;
    tmp_msg_0.height = 0.902125301867;
    tmp_msg_0.x = 0.608532483787;
    tmp_msg_0.y = 0.551199844326;
    tmp_msg_0.z = 0.300694799163;
    tmp_msg_0.phi = 0.160193723653;
    tmp_msg_0.theta = 0.548794874212;
    tmp_msg_0.psi = 0.543824960018;
    tmp_msg_0.u = 0.593151469674;
    tmp_msg_0.v = 0.0430180157172;
    tmp_msg_0.w = 0.971411267309;
    tmp_msg_0.vx = 0.127171603602;
    tmp_msg_0.vy = 0.703008076342;
    tmp_msg_0.vz = 0.73915421801;
    tmp_msg_0.p = 0.860063489252;
    tmp_msg_0.q = 0.219235412558;
    tmp_msg_0.r = 0.75202524981;
    tmp_msg_0.depth = 0.276861454834;
    tmp_msg_0.alt = 0.209707186087;
    msg.state.set(tmp_msg_0);
    msg.type = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.78451528629);
    msg.setSource(26874U);
    msg.setSourceEntity(133U);
    msg.setDestination(59341U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0283724523713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.679441109398);
    msg.setSource(65474U);
    msg.setSourceEntity(116U);
    msg.setDestination(54650U);
    msg.setDestinationEntity(59U);
    msg.value = 0.0402803740371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.552868814496);
    msg.setSource(16078U);
    msg.setSourceEntity(226U);
    msg.setDestination(10751U);
    msg.setDestinationEntity(147U);
    msg.value = 0.345534325617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.951319940572);
    msg.setSource(26764U);
    msg.setSourceEntity(56U);
    msg.setDestination(9008U);
    msg.setDestinationEntity(171U);
    msg.value = 0.884598029673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.814084902002);
    msg.setSource(9033U);
    msg.setSourceEntity(185U);
    msg.setDestination(62892U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0053387076289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.251457609319);
    msg.setSource(47230U);
    msg.setSourceEntity(215U);
    msg.setDestination(61556U);
    msg.setDestinationEntity(76U);
    msg.value = 0.559984028222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.206910366307);
    msg.setSource(30323U);
    msg.setSourceEntity(70U);
    msg.setDestination(62224U);
    msg.setDestinationEntity(159U);
    msg.value = 0.529976817024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.248052597667);
    msg.setSource(46632U);
    msg.setSourceEntity(43U);
    msg.setDestination(9503U);
    msg.setDestinationEntity(200U);
    msg.value = 0.357793916954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.406891554759);
    msg.setSource(61367U);
    msg.setSourceEntity(205U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(107U);
    msg.value = 0.566773201805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.367010627953);
    msg.setSource(37808U);
    msg.setSourceEntity(45U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(105U);
    msg.value = 0.352029613156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.0994067907009);
    msg.setSource(21320U);
    msg.setSourceEntity(189U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(193U);
    msg.value = 0.811753225061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.0240913799351);
    msg.setSource(11991U);
    msg.setSourceEntity(60U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(114U);
    msg.value = 0.681355415685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.953120166563);
    msg.setSource(20803U);
    msg.setSourceEntity(21U);
    msg.setDestination(33698U);
    msg.setDestinationEntity(26U);
    msg.value = 0.341802691691;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.591808192666);
    msg.setSource(7115U);
    msg.setSourceEntity(224U);
    msg.setDestination(53134U);
    msg.setDestinationEntity(113U);
    msg.value = 0.621774393095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.00277057139836);
    msg.setSource(110U);
    msg.setSourceEntity(145U);
    msg.setDestination(55081U);
    msg.setDestinationEntity(77U);
    msg.value = 0.540007256206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.386001259387);
    msg.setSource(57503U);
    msg.setSourceEntity(110U);
    msg.setDestination(44102U);
    msg.setDestinationEntity(145U);
    msg.id = 47U;
    msg.zoom = 172U;
    msg.action = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.986279530361);
    msg.setSource(53087U);
    msg.setSourceEntity(67U);
    msg.setDestination(61629U);
    msg.setDestinationEntity(61U);
    msg.id = 85U;
    msg.zoom = 108U;
    msg.action = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.4171717692);
    msg.setSource(6160U);
    msg.setSourceEntity(35U);
    msg.setDestination(59679U);
    msg.setDestinationEntity(153U);
    msg.id = 147U;
    msg.zoom = 196U;
    msg.action = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.78762878694);
    msg.setSource(47153U);
    msg.setSourceEntity(113U);
    msg.setDestination(33749U);
    msg.setDestinationEntity(53U);
    msg.id = 82U;
    msg.value = 0.713237932189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.334036060993);
    msg.setSource(9465U);
    msg.setSourceEntity(148U);
    msg.setDestination(15729U);
    msg.setDestinationEntity(106U);
    msg.id = 56U;
    msg.value = 0.966860307666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.738502998887);
    msg.setSource(18413U);
    msg.setSourceEntity(21U);
    msg.setDestination(26186U);
    msg.setDestinationEntity(224U);
    msg.id = 11U;
    msg.value = 0.562523003077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.800994839613);
    msg.setSource(28602U);
    msg.setSourceEntity(208U);
    msg.setDestination(35965U);
    msg.setDestinationEntity(207U);
    msg.id = 95U;
    msg.value = 0.838767848945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.135062972914);
    msg.setSource(39156U);
    msg.setSourceEntity(177U);
    msg.setDestination(41649U);
    msg.setDestinationEntity(85U);
    msg.id = 173U;
    msg.value = 0.539333765977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.160150760343);
    msg.setSource(54080U);
    msg.setSourceEntity(3U);
    msg.setDestination(5771U);
    msg.setDestinationEntity(56U);
    msg.id = 166U;
    msg.value = 0.575342846964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.712231733385);
    msg.setSource(14373U);
    msg.setSourceEntity(17U);
    msg.setDestination(39217U);
    msg.setDestinationEntity(56U);
    msg.id = 196U;
    msg.angle = 0.175841045722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.716129795357);
    msg.setSource(32470U);
    msg.setSourceEntity(95U);
    msg.setDestination(51761U);
    msg.setDestinationEntity(178U);
    msg.id = 40U;
    msg.angle = 0.981879780319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.539964683538);
    msg.setSource(62821U);
    msg.setSourceEntity(242U);
    msg.setDestination(29551U);
    msg.setDestinationEntity(92U);
    msg.id = 247U;
    msg.angle = 0.684920808108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.485722171513);
    msg.setSource(25269U);
    msg.setSourceEntity(236U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(142U);
    msg.op = 216U;
    msg.actions.assign("LAMNGDYHTOPYOJSVTZAUTUPXLHLLGTDGUEALFXIBKIXLPANSRUYUBSKOZADVCSQXMUDUMMVPRYKOZWTRKETFNMKHKJJNPFOBVFWGWJMCJCVOJAQHXEDGUZGQFYILLSHDRFPSGHOQAWHEJDFZFGEERCSQBYVIMYIAGQCTMRIBGFVEKNWWODPTCTQBPCLQWJNCEKIXXWBYRKZBQAVQIFXZNMDYZIXLCZZSNVORSJHUIKBHONDCPWYVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.238268292816);
    msg.setSource(13225U);
    msg.setSourceEntity(32U);
    msg.setDestination(3142U);
    msg.setDestinationEntity(66U);
    msg.op = 185U;
    msg.actions.assign("PBMRDUADZFHYBUJOJALQFMCUVUWQSHIWRUKVRGCYDHZKEJHVCYWKPGYWRVFTWMPNILBTBXPZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.416114118085);
    msg.setSource(27699U);
    msg.setSourceEntity(75U);
    msg.setDestination(20636U);
    msg.setDestinationEntity(148U);
    msg.op = 27U;
    msg.actions.assign("IWBDBXSKDPBCFKRGHVBXNMPUEYHXMVVBTEPYFXBSOXWORQKICUATYEMQYSICHVSDZXNWQARLOVMTIRWDFLYQSUCYVSGPAEHHDVALSTWPZRQPDTGEXJYZQVYLKFJPFJDOSACRIMJCFUJWGANTAAGKJET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.408372040219);
    msg.setSource(16433U);
    msg.setSourceEntity(151U);
    msg.setDestination(62851U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("DWMDWCHDMRNTSLOCNGYGBVQBIBGHXLGPFDHZAHVZPACRGKJAJEXLIQTIWQRURXCYLHOIGKQUMXFFZIAKYYCPJWWNZMVQBHEAJMAHTLPMUEDQILUTYDAVDOYJTETFMBGRGBCNVQIWKWVZNIXKKFENFYTBKZDFOAMOUOKLXZAMNS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0755005773099);
    msg.setSource(35606U);
    msg.setSourceEntity(122U);
    msg.setDestination(39421U);
    msg.setDestinationEntity(139U);
    msg.actions.assign("SHHYPFDTLPXLQLJLWLEGVIRVFRRWIOTTDOGMADEIWMPZEBWFXUTHMZIMQAMYMOSIMTNDJBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.917741824183);
    msg.setSource(49019U);
    msg.setSourceEntity(12U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(100U);
    msg.actions.assign("MEFJGJBTHTYVSMRQAHLIHLCYMGTQXXCPRWMUEDLUMBQOWXMGFGONKJB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.259240130327);
    msg.setSource(4559U);
    msg.setSourceEntity(32U);
    msg.setDestination(45151U);
    msg.setDestinationEntity(211U);
    msg.button = 96U;
    msg.value = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.096884794878);
    msg.setSource(10452U);
    msg.setSourceEntity(170U);
    msg.setDestination(14773U);
    msg.setDestinationEntity(31U);
    msg.button = 75U;
    msg.value = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.97075461966);
    msg.setSource(61677U);
    msg.setSourceEntity(209U);
    msg.setDestination(30687U);
    msg.setDestinationEntity(74U);
    msg.button = 64U;
    msg.value = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.116266722993);
    msg.setSource(31167U);
    msg.setSourceEntity(239U);
    msg.setDestination(2280U);
    msg.setDestinationEntity(191U);
    msg.op = 86U;
    msg.text.assign("EGXZMTYYNJSBJFDRKBRJUZGAXIZIIWHQLQTCUOCOBIGESYWTEIXVPPYTRQEDAXMIDQKWICOLKELKLNBHPUVVUTMPSCZKMNQTEKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.651892581199);
    msg.setSource(36686U);
    msg.setSourceEntity(161U);
    msg.setDestination(54510U);
    msg.setDestinationEntity(108U);
    msg.op = 28U;
    msg.text.assign("PVOGSBVPFDANFAIMCNHJCCTJMLXVITQCOFIPDHPXRRPWVSWGFCHYGOHFOOPNDJHSTNSUUGGHXDVRNESTDBLWGOKZBJHOWIYLRREHWMZIRQVJXZKWDRAMOUZYSCIIBLUBXCNTWFQBDUGVFAXODNKKQYVZLBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.887158401705);
    msg.setSource(42934U);
    msg.setSourceEntity(35U);
    msg.setDestination(47768U);
    msg.setDestinationEntity(96U);
    msg.op = 214U;
    msg.text.assign("VXHFVMGGUOIQYGKSNKKAJBYUMDMJDLCHBYIYSCBVRRXBQGGXENOTXFMFAMEAFSZPJYYDJKXVEWMQDYZQFOELOVHBMUCXZOWPDAZDTVCQPOHHCLYHWTLEUZKWYAVWPXHEYPDFTNMIBIVOCPGVCULDWTRXJRJFSZGNUQRUEETGPRKPOWAGRAIKSCLLASLGQZFRSXKWAJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.206766312538);
    msg.setSource(5881U);
    msg.setSourceEntity(146U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(51U);
    msg.op = 1U;
    msg.time_remain = 0.658316632302;
    msg.sched_time = 0.833599484225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.700611916604);
    msg.setSource(35320U);
    msg.setSourceEntity(134U);
    msg.setDestination(54842U);
    msg.setDestinationEntity(129U);
    msg.op = 241U;
    msg.time_remain = 0.0344380217311;
    msg.sched_time = 0.414767728318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.94961291629);
    msg.setSource(63735U);
    msg.setSourceEntity(60U);
    msg.setDestination(45535U);
    msg.setDestinationEntity(48U);
    msg.op = 61U;
    msg.time_remain = 0.199866871708;
    msg.sched_time = 0.997402423517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.520911105827);
    msg.setSource(53072U);
    msg.setSourceEntity(244U);
    msg.setDestination(8363U);
    msg.setDestinationEntity(164U);
    msg.name.assign("IYWJIXNBVFASOQBQCJYRWSLCXMHTSDZDGEUHYJSRFEPGCTWGYKSPRAEBDFOUDTMHWLLHRTTTCAGZUVXIHDTQLSOIGSOZNQOHPOCCBZYIKKSVVYGVUUOFCWLRXHLLXRLXGINIPEYOIPWAF");
    msg.op = 9U;
    msg.sched_time = 0.569664509759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.666925795258);
    msg.setSource(20414U);
    msg.setSourceEntity(120U);
    msg.setDestination(38014U);
    msg.setDestinationEntity(167U);
    msg.name.assign("XFSFHODNJORRJABCYILKDBQNHHASPADTQWBFGNJSHXAWNHDULDTWSKTHPOLOZACUOAPOUJOXRUCFHWINNQQNMGOOENMKQKPZZXYVIRXLULDAGXQXJZHVBQYPHBDGWIZJEPSMBVWCCVAVGUREJSCQSGPZMIERRJXTYWUGSLFCXZGYULIZTVCWSDLEQAGJIYKKZEUDPFDNUJZTNWIVYEPIKEVEIACYCHMWXRYKOLMBPKYTFTSEVFMKVGFRTQFMMB");
    msg.op = 168U;
    msg.sched_time = 0.156876314183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.24066837525);
    msg.setSource(2029U);
    msg.setSourceEntity(16U);
    msg.setDestination(12624U);
    msg.setDestinationEntity(12U);
    msg.name.assign("ZRUWWFOCKMGMFJEBAJHILGTSSVDOBE");
    msg.op = 31U;
    msg.sched_time = 0.507646841721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.82409740232);
    msg.setSource(14095U);
    msg.setSourceEntity(185U);
    msg.setDestination(12045U);
    msg.setDestinationEntity(253U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.0113422711904);
    msg.setSource(10742U);
    msg.setSourceEntity(172U);
    msg.setDestination(50362U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.539633528367);
    msg.setSource(25011U);
    msg.setSourceEntity(72U);
    msg.setDestination(49139U);
    msg.setDestinationEntity(93U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.355568913921);
    msg.setSource(10917U);
    msg.setSourceEntity(66U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(104U);
    msg.name.assign("FSQDHGJZMUALRYBGDLHLZFBHKSSXIYNCLTEIVXVIUHZVNUJWCGUMODTUZLZMBKTWQSAOEXXIXLAAHTJFZUHDOSDFMJKRRRBPEJGLPYYDQRBXINBZOCHUEOKSATUNAJNIOOJXKNKMQMSRNWJGFOTKE");
    msg.state = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.452189280865);
    msg.setSource(39013U);
    msg.setSourceEntity(3U);
    msg.setDestination(64426U);
    msg.setDestinationEntity(12U);
    msg.name.assign("FBOYIETOQJEWXRBNOJRBDZXPURUUBECAPFOFNMHFCTRXISQMLOACQHMVKUQBELGRUTNNTODUJYGJIOGQBNOHUZKZNDSGZEYYIRBMPJKTKSLLHYIHPWMAVQDLCJHSXAMHRXIYDCFASWVXVUIB");
    msg.state = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.954704136291);
    msg.setSource(21561U);
    msg.setSourceEntity(153U);
    msg.setDestination(29160U);
    msg.setDestinationEntity(22U);
    msg.name.assign("BLDFXOTTDVSPCMEY");
    msg.state = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.326961690686);
    msg.setSource(40692U);
    msg.setSourceEntity(9U);
    msg.setDestination(31646U);
    msg.setDestinationEntity(32U);
    msg.name.assign("JSUTCYNZXEPXDPXMCSRWGXNEHDMGNLCCEEKDBKRHTJBXZPHRBPGBADFDGRWLAJWQODLAPUCMXOSZNYLTHI");
    msg.value = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.806754176277);
    msg.setSource(30842U);
    msg.setSourceEntity(22U);
    msg.setDestination(52403U);
    msg.setDestinationEntity(247U);
    msg.name.assign("KHYPRMCTVEIHCBEEKWZKFDFWIKMGAQYEJSSHDVJPKZMBGAREWUYITUCMQTXTWNOVLGRQPJYLYRGYHHNZCLVQNWSBTLTCHWBCDWBJJSJQUDPIKGSJRMARSMUZLNYQTBVDUPUFODEGRFSAUOWTIGCPXMEVSCAOPZOCKRDALKUREATYXPPZMJDHBXNLJLFAQXOOBLIHCDFEKZAIYUNTXZNAROF");
    msg.value = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.907643099193);
    msg.setSource(15547U);
    msg.setSourceEntity(41U);
    msg.setDestination(64312U);
    msg.setDestinationEntity(108U);
    msg.name.assign("SMCFBEKWICFAFLOXSMXLAKPTIDPLKKEUYDD");
    msg.value = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.066561575752);
    msg.setSource(52643U);
    msg.setSourceEntity(46U);
    msg.setDestination(12354U);
    msg.setDestinationEntity(154U);
    msg.name.assign("EMGYNIEXOMZBFRSLEMCTOVIGGHDAUQINLKBBTTUYRKONUQIHAXXHMBBECWWHKTDWSTEJMOSDHWRFFYSGKLAPKHKGWBXPUSZJEZRRLVSYXJCLZYTVMTZRQDBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.50758330739);
    msg.setSource(48296U);
    msg.setSourceEntity(100U);
    msg.setDestination(33365U);
    msg.setDestinationEntity(52U);
    msg.name.assign("DQAVMNHWYFTKZEIZFRSQYBTSIRWSOYLXOUJAUXNIIJMJDRDNNXLDDOCVZQASAFFYCJKSHAYCLDNKUYKBUCHVBPUHQBTSHEUPRMXXAAIZNLPQIIZTQKBFGBPGAGNUPWRPJXYWAVKFTLEWTGPRALPYZCZHGNXGCNUIVOUJSGBFLQWWMEQOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.0234348374307);
    msg.setSource(20089U);
    msg.setSourceEntity(36U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(170U);
    msg.name.assign("YJKIPUYRCHMTZLBPNCXADDREEOBUOQIVFKLWDGYWMCMXOLDXDLSKOHPXSAAUNGHQWGYJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.683354025824);
    msg.setSource(45941U);
    msg.setSourceEntity(40U);
    msg.setDestination(56087U);
    msg.setDestinationEntity(144U);
    msg.name.assign("TFISFLYZKJPSRKIGHDFEXLWBFHVGWNQHVSAQOJYCIDVWSAOKPKDRNENXAQCSQCPJRRVVOHLNZTVLCUYOSVJZWLLKLETCOLKRLBPSHUKQZAYERRXGEBNDMRHIMABFJTGEQBNFBQMINGTNQDGKUBWCZCYXIULPOSWXBSZYMXJJMHTGTMYHCTNPWWOUHDMPVUGIFYXEPMCOOSQJBDKTWRVAZGDFUYUU");
    msg.value = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.845191301271);
    msg.setSource(21524U);
    msg.setSourceEntity(211U);
    msg.setDestination(33999U);
    msg.setDestinationEntity(1U);
    msg.name.assign("MYHKQVHEAISDYRCUPEAGUOBWWUNNTSQEADJHFAGMMHZUXIJUDAICIPHBWCHVDIOQYKRMFYOIASZXHHWETVKEPVPKLEQTYYGWZYJJFBSGWFDPXXJZUUCCCDHLRQKMZJKCCKSWIJBQGLSXOADZTNIVVTKNAVQJFXJGULZRFWBMWNOYCSNOEPFAHSGQRMZFVTSOYRWRKTQ");
    msg.value = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.278231328145);
    msg.setSource(33081U);
    msg.setSourceEntity(120U);
    msg.setDestination(6921U);
    msg.setDestinationEntity(204U);
    msg.name.assign("ZOAYVSXBDHFHMAXHSTMWYSZEOUAKNZTUCXOCLHFDCJPFYGW");
    msg.value = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.979785005374);
    msg.setSource(11057U);
    msg.setSourceEntity(247U);
    msg.setDestination(43768U);
    msg.setDestinationEntity(35U);
    msg.id = 97U;
    msg.period = 986272396U;
    msg.duty_cycle = 3281415057U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.957657988667);
    msg.setSource(47276U);
    msg.setSourceEntity(62U);
    msg.setDestination(22676U);
    msg.setDestinationEntity(231U);
    msg.id = 172U;
    msg.period = 3021552216U;
    msg.duty_cycle = 1897881108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.935468189574);
    msg.setSource(39196U);
    msg.setSourceEntity(20U);
    msg.setDestination(27426U);
    msg.setDestinationEntity(57U);
    msg.id = 82U;
    msg.period = 839721919U;
    msg.duty_cycle = 2830513218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.521995898679);
    msg.setSource(7040U);
    msg.setSourceEntity(75U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(207U);
    msg.id = 57U;
    msg.period = 3759409426U;
    msg.duty_cycle = 2535504873U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.589659561186);
    msg.setSource(45945U);
    msg.setSourceEntity(136U);
    msg.setDestination(5024U);
    msg.setDestinationEntity(140U);
    msg.id = 166U;
    msg.period = 2568387981U;
    msg.duty_cycle = 3944494410U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.273044812464);
    msg.setSource(36436U);
    msg.setSourceEntity(9U);
    msg.setDestination(28242U);
    msg.setDestinationEntity(126U);
    msg.id = 111U;
    msg.period = 3092693526U;
    msg.duty_cycle = 1346701297U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.976213700683);
    msg.setSource(49497U);
    msg.setSourceEntity(68U);
    msg.setDestination(19597U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.386652036449;
    msg.lon = 0.0341414607001;
    msg.height = 0.128300322728;
    msg.x = 0.936930193043;
    msg.y = 0.446161833702;
    msg.z = 0.850793417815;
    msg.phi = 0.090261301248;
    msg.theta = 0.622463970975;
    msg.psi = 0.858198249898;
    msg.u = 0.580054313088;
    msg.v = 0.574726018026;
    msg.w = 0.799475584545;
    msg.vx = 0.804585617353;
    msg.vy = 0.248502783348;
    msg.vz = 0.557545342115;
    msg.p = 0.933571675069;
    msg.q = 0.562336682913;
    msg.r = 0.74732412107;
    msg.depth = 0.0865379030073;
    msg.alt = 0.773558068166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.346474864091);
    msg.setSource(50278U);
    msg.setSourceEntity(19U);
    msg.setDestination(9854U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.209861664246;
    msg.lon = 0.473287348307;
    msg.height = 0.688528395946;
    msg.x = 0.941798724021;
    msg.y = 0.0564290341954;
    msg.z = 0.745465757008;
    msg.phi = 0.887243818026;
    msg.theta = 0.933939376339;
    msg.psi = 0.0153380238384;
    msg.u = 0.287393444584;
    msg.v = 0.597191476036;
    msg.w = 0.110409348683;
    msg.vx = 0.86851679081;
    msg.vy = 0.801823450074;
    msg.vz = 0.526136490153;
    msg.p = 0.855690713452;
    msg.q = 0.771586327175;
    msg.r = 0.690747487787;
    msg.depth = 0.84197232868;
    msg.alt = 0.55026264245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.569070552174);
    msg.setSource(51448U);
    msg.setSourceEntity(140U);
    msg.setDestination(27272U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.798824501465;
    msg.lon = 0.135213864474;
    msg.height = 0.658556781778;
    msg.x = 0.253178144195;
    msg.y = 0.157004327388;
    msg.z = 0.764910471189;
    msg.phi = 0.351709834564;
    msg.theta = 0.926274774722;
    msg.psi = 0.529057855641;
    msg.u = 0.428972414179;
    msg.v = 0.266501176025;
    msg.w = 0.666169470951;
    msg.vx = 0.547841002058;
    msg.vy = 0.689887738339;
    msg.vz = 0.510216086672;
    msg.p = 0.0651579649371;
    msg.q = 0.39417206629;
    msg.r = 0.474441528844;
    msg.depth = 0.175777864454;
    msg.alt = 0.123308142581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.658882159883);
    msg.setSource(53591U);
    msg.setSourceEntity(92U);
    msg.setDestination(37338U);
    msg.setDestinationEntity(123U);
    msg.x = 0.463142016686;
    msg.y = 0.376460704106;
    msg.z = 0.417007008124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.88553518794);
    msg.setSource(1342U);
    msg.setSourceEntity(15U);
    msg.setDestination(44354U);
    msg.setDestinationEntity(183U);
    msg.x = 0.509637964792;
    msg.y = 0.49456889996;
    msg.z = 0.553238558964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.182939801442);
    msg.setSource(36074U);
    msg.setSourceEntity(147U);
    msg.setDestination(57028U);
    msg.setDestinationEntity(103U);
    msg.x = 0.601042592794;
    msg.y = 0.890774061446;
    msg.z = 0.652787418437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.828837069197);
    msg.setSource(62096U);
    msg.setSourceEntity(77U);
    msg.setDestination(8558U);
    msg.setDestinationEntity(123U);
    msg.value = 0.603281259128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.221922948278);
    msg.setSource(23401U);
    msg.setSourceEntity(59U);
    msg.setDestination(1465U);
    msg.setDestinationEntity(215U);
    msg.value = 0.289786947984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.21496139468);
    msg.setSource(6890U);
    msg.setSourceEntity(160U);
    msg.setDestination(29545U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0369272964603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.608462812985);
    msg.setSource(21096U);
    msg.setSourceEntity(31U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(2U);
    msg.value = 0.81006162776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.441713880108);
    msg.setSource(53907U);
    msg.setSourceEntity(239U);
    msg.setDestination(28951U);
    msg.setDestinationEntity(125U);
    msg.value = 0.0598334267552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.653457612897);
    msg.setSource(49165U);
    msg.setSourceEntity(138U);
    msg.setDestination(3519U);
    msg.setDestinationEntity(17U);
    msg.value = 0.302906687807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.908763447239);
    msg.setSource(22585U);
    msg.setSourceEntity(8U);
    msg.setDestination(23397U);
    msg.setDestinationEntity(39U);
    msg.x = 0.327371256456;
    msg.y = 0.998314162294;
    msg.z = 0.643748224651;
    msg.phi = 0.711870897596;
    msg.theta = 0.283875738555;
    msg.psi = 0.64000043958;
    msg.p = 0.457755414851;
    msg.q = 0.746161158994;
    msg.r = 0.0693483626593;
    msg.u = 0.649629307487;
    msg.v = 0.0970458109635;
    msg.w = 0.476157810413;
    msg.bias_psi = 0.435496619108;
    msg.bias_r = 0.14008989865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.124529199476);
    msg.setSource(16618U);
    msg.setSourceEntity(171U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(126U);
    msg.x = 0.915154882698;
    msg.y = 0.958110452721;
    msg.z = 0.389544147611;
    msg.phi = 0.594871594939;
    msg.theta = 0.820762976959;
    msg.psi = 0.884009783571;
    msg.p = 0.272934572913;
    msg.q = 0.631062355401;
    msg.r = 0.624407725777;
    msg.u = 0.164753037645;
    msg.v = 0.520201963724;
    msg.w = 0.237688728068;
    msg.bias_psi = 0.668019807809;
    msg.bias_r = 0.748698713825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.37768124061);
    msg.setSource(25392U);
    msg.setSourceEntity(237U);
    msg.setDestination(54128U);
    msg.setDestinationEntity(75U);
    msg.x = 0.776009345459;
    msg.y = 0.681978516783;
    msg.z = 0.956012795144;
    msg.phi = 0.465707459747;
    msg.theta = 0.044922271317;
    msg.psi = 0.819508389571;
    msg.p = 0.69527068769;
    msg.q = 0.874509665725;
    msg.r = 0.726872338295;
    msg.u = 0.367894295155;
    msg.v = 0.67887768824;
    msg.w = 0.696111124009;
    msg.bias_psi = 0.294005835603;
    msg.bias_r = 0.194964370902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.797674768175);
    msg.setSource(56923U);
    msg.setSourceEntity(5U);
    msg.setDestination(6547U);
    msg.setDestinationEntity(54U);
    msg.bias_psi = 0.374223480772;
    msg.bias_r = 0.111073120057;
    msg.cog = 0.322567636486;
    msg.cyaw = 0.574481412193;
    msg.lbl_rej_level = 0.128640753036;
    msg.gps_rej_level = 0.410056158059;
    msg.custom_x = 0.146900780212;
    msg.custom_y = 0.445057873679;
    msg.custom_z = 0.253644798506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.920068014576);
    msg.setSource(31157U);
    msg.setSourceEntity(225U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(59U);
    msg.bias_psi = 0.29889630193;
    msg.bias_r = 0.483472164403;
    msg.cog = 0.963658591712;
    msg.cyaw = 0.157529465902;
    msg.lbl_rej_level = 0.867617912484;
    msg.gps_rej_level = 0.435166347951;
    msg.custom_x = 0.782467843604;
    msg.custom_y = 0.891080169196;
    msg.custom_z = 0.678895558626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.148163800785);
    msg.setSource(32939U);
    msg.setSourceEntity(63U);
    msg.setDestination(30487U);
    msg.setDestinationEntity(234U);
    msg.bias_psi = 0.435815309716;
    msg.bias_r = 0.835650986644;
    msg.cog = 0.156404978966;
    msg.cyaw = 0.947454982019;
    msg.lbl_rej_level = 0.48276218406;
    msg.gps_rej_level = 0.493790488137;
    msg.custom_x = 0.758344341872;
    msg.custom_y = 0.326661054701;
    msg.custom_z = 0.00354367086727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.903278245654);
    msg.setSource(16324U);
    msg.setSourceEntity(190U);
    msg.setDestination(14827U);
    msg.setDestinationEntity(221U);
    msg.utc_time = 0.0961040339194;
    msg.reason = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.488851672875);
    msg.setSource(57419U);
    msg.setSourceEntity(198U);
    msg.setDestination(57263U);
    msg.setDestinationEntity(168U);
    msg.utc_time = 0.037420471227;
    msg.reason = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.370195509812);
    msg.setSource(9291U);
    msg.setSourceEntity(216U);
    msg.setDestination(40871U);
    msg.setDestinationEntity(33U);
    msg.utc_time = 0.722396520291;
    msg.reason = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.369487806238);
    msg.setSource(11088U);
    msg.setSourceEntity(165U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(57U);
    msg.id = 218U;
    msg.range = 0.978956352878;
    msg.acceptance = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.384380112932);
    msg.setSource(11097U);
    msg.setSourceEntity(35U);
    msg.setDestination(62763U);
    msg.setDestinationEntity(70U);
    msg.id = 68U;
    msg.range = 0.022863130755;
    msg.acceptance = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.970678148891);
    msg.setSource(41608U);
    msg.setSourceEntity(95U);
    msg.setDestination(36838U);
    msg.setDestinationEntity(144U);
    msg.id = 51U;
    msg.range = 0.360960991436;
    msg.acceptance = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.910295224778);
    msg.setSource(45935U);
    msg.setSourceEntity(103U);
    msg.setDestination(1135U);
    msg.setDestinationEntity(254U);
    msg.type = 23U;
    msg.reason = 200U;
    msg.value = 0.609626451373;
    msg.timestep = 0.675716496827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.931989657968);
    msg.setSource(41122U);
    msg.setSourceEntity(142U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(179U);
    msg.type = 23U;
    msg.reason = 71U;
    msg.value = 0.702377769769;
    msg.timestep = 0.219568436383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.783810630625);
    msg.setSource(57135U);
    msg.setSourceEntity(144U);
    msg.setDestination(27469U);
    msg.setDestinationEntity(45U);
    msg.type = 165U;
    msg.reason = 21U;
    msg.value = 0.856987116283;
    msg.timestep = 0.417710680464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.417285851887);
    msg.setSource(60366U);
    msg.setSourceEntity(250U);
    msg.setDestination(57342U);
    msg.setDestinationEntity(208U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WJBVGYEANCUSKMKRAHYUXJDFAVRWTECXXTXDKURZFOKXMIYROGHXRWDTQQPMNHHDFCZSG");
    tmp_msg_0.lat = 0.462056813;
    tmp_msg_0.lon = 0.809841725105;
    tmp_msg_0.depth = 0.0499546793932;
    tmp_msg_0.query_channel = 236U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 62U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.248980997361;
    msg.y = 0.0764403859836;
    msg.var_x = 0.312534601297;
    msg.var_y = 0.631499015338;
    msg.distance = 0.0241927865418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.5112155511);
    msg.setSource(52245U);
    msg.setSourceEntity(55U);
    msg.setDestination(39687U);
    msg.setDestinationEntity(15U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ORPZCLQWYIJHCBMKFHJPHIUPTRSQUAOURXBFNMXYGXLIZVZJYY");
    tmp_msg_0.lat = 0.249707854538;
    tmp_msg_0.lon = 0.423364149506;
    tmp_msg_0.depth = 0.265515905785;
    tmp_msg_0.query_channel = 190U;
    tmp_msg_0.reply_channel = 124U;
    tmp_msg_0.transponder_delay = 102U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.201919028718;
    msg.y = 0.973672276121;
    msg.var_x = 0.244068284296;
    msg.var_y = 0.596267168529;
    msg.distance = 0.570159993521;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.868396003578);
    msg.setSource(18712U);
    msg.setSourceEntity(230U);
    msg.setDestination(14510U);
    msg.setDestinationEntity(27U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QRZTLMDQVEZGMIEOUPNPCNIAFGNXCSURQOXGXEJUWJTGNSWJANKTTZPSXMRGLSDPOKMRTVBIYZWTHPMSVBQSKCIPDGCLFJDKLYEIOUQTKUCVDMRHVEVXGAWJULLQKYMKYHGBCJZGNAOPADRCWSZQHYYQLYXKDVWXUQLETFTSAD");
    tmp_msg_0.lat = 0.111259253239;
    tmp_msg_0.lon = 0.11698711985;
    tmp_msg_0.depth = 0.321350417189;
    tmp_msg_0.query_channel = 166U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 233U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.334537118044;
    msg.y = 0.662577148031;
    msg.var_x = 0.878109448964;
    msg.var_y = 0.876560014946;
    msg.distance = 0.556930385117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.968583541551);
    msg.setSource(34180U);
    msg.setSourceEntity(120U);
    msg.setDestination(9958U);
    msg.setDestinationEntity(15U);
    msg.state = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.0439460509748);
    msg.setSource(63758U);
    msg.setSourceEntity(231U);
    msg.setDestination(27665U);
    msg.setDestinationEntity(9U);
    msg.state = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.58825825381);
    msg.setSource(36999U);
    msg.setSourceEntity(107U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(113U);
    msg.state = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.531340447631);
    msg.setSource(59911U);
    msg.setSourceEntity(162U);
    msg.setDestination(63118U);
    msg.setDestinationEntity(142U);
    msg.x = 0.737650060151;
    msg.y = 0.260241372076;
    msg.z = 0.374927932053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.340848196864);
    msg.setSource(41272U);
    msg.setSourceEntity(172U);
    msg.setDestination(31430U);
    msg.setDestinationEntity(14U);
    msg.x = 0.158165001879;
    msg.y = 0.658054701542;
    msg.z = 0.447936804987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.45697992981);
    msg.setSource(13431U);
    msg.setSourceEntity(117U);
    msg.setDestination(62420U);
    msg.setDestinationEntity(54U);
    msg.x = 0.50622002973;
    msg.y = 0.0793831251647;
    msg.z = 0.52005917721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.499929710255);
    msg.setSource(65336U);
    msg.setSourceEntity(168U);
    msg.setDestination(10948U);
    msg.setDestinationEntity(113U);
    msg.va = 0.142606608078;
    msg.aoa = 0.164585887195;
    msg.ssa = 0.441322557745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.46272090498);
    msg.setSource(53337U);
    msg.setSourceEntity(4U);
    msg.setDestination(11531U);
    msg.setDestinationEntity(48U);
    msg.va = 0.778649225094;
    msg.aoa = 0.719726766069;
    msg.ssa = 0.190448320592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.89397336072);
    msg.setSource(1624U);
    msg.setSourceEntity(93U);
    msg.setDestination(50763U);
    msg.setDestinationEntity(9U);
    msg.va = 0.0215977777554;
    msg.aoa = 0.340838550811;
    msg.ssa = 0.0889468534446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.613428979854);
    msg.setSource(57099U);
    msg.setSourceEntity(135U);
    msg.setDestination(44401U);
    msg.setDestinationEntity(18U);
    msg.value = 0.012781435637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.734591458535);
    msg.setSource(64640U);
    msg.setSourceEntity(44U);
    msg.setDestination(52879U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0506286307312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.488629165874);
    msg.setSource(25397U);
    msg.setSourceEntity(81U);
    msg.setDestination(11792U);
    msg.setDestinationEntity(80U);
    msg.value = 0.0107374712997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.942161855735);
    msg.setSource(27596U);
    msg.setSourceEntity(36U);
    msg.setDestination(54668U);
    msg.setDestinationEntity(89U);
    msg.value = 0.488419561944;
    msg.z_units = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.742173684808);
    msg.setSource(24701U);
    msg.setSourceEntity(186U);
    msg.setDestination(33991U);
    msg.setDestinationEntity(158U);
    msg.value = 0.74548592549;
    msg.z_units = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.462880428763);
    msg.setSource(57352U);
    msg.setSourceEntity(126U);
    msg.setDestination(54924U);
    msg.setDestinationEntity(14U);
    msg.value = 0.753046280665;
    msg.z_units = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.191293319852);
    msg.setSource(19465U);
    msg.setSourceEntity(91U);
    msg.setDestination(5425U);
    msg.setDestinationEntity(144U);
    msg.value = 0.785914836707;
    msg.speed_units = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.734017168908);
    msg.setSource(55243U);
    msg.setSourceEntity(233U);
    msg.setDestination(31796U);
    msg.setDestinationEntity(89U);
    msg.value = 0.916708340444;
    msg.speed_units = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.438393442733);
    msg.setSource(44680U);
    msg.setSourceEntity(81U);
    msg.setDestination(38641U);
    msg.setDestinationEntity(93U);
    msg.value = 0.392408443701;
    msg.speed_units = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.641090730084);
    msg.setSource(62804U);
    msg.setSourceEntity(221U);
    msg.setDestination(4311U);
    msg.setDestinationEntity(87U);
    msg.value = 0.217840399562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.570193449751);
    msg.setSource(64709U);
    msg.setSourceEntity(184U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(10U);
    msg.value = 0.154684528968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.692226945641);
    msg.setSource(40402U);
    msg.setSourceEntity(182U);
    msg.setDestination(55874U);
    msg.setDestinationEntity(10U);
    msg.value = 0.937665243077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.966913535177);
    msg.setSource(25528U);
    msg.setSourceEntity(202U);
    msg.setDestination(8701U);
    msg.setDestinationEntity(216U);
    msg.value = 0.490934909873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.65734419163);
    msg.setSource(6672U);
    msg.setSourceEntity(179U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(68U);
    msg.value = 0.280114796183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.789741873094);
    msg.setSource(59082U);
    msg.setSourceEntity(146U);
    msg.setDestination(57338U);
    msg.setDestinationEntity(106U);
    msg.value = 0.116901559895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.567428773412);
    msg.setSource(8139U);
    msg.setSourceEntity(112U);
    msg.setDestination(23535U);
    msg.setDestinationEntity(241U);
    msg.value = 0.501106669842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.51460310465);
    msg.setSource(37415U);
    msg.setSourceEntity(190U);
    msg.setDestination(56540U);
    msg.setDestinationEntity(16U);
    msg.value = 0.266840967815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.13173337621);
    msg.setSource(31998U);
    msg.setSourceEntity(118U);
    msg.setDestination(52953U);
    msg.setDestinationEntity(181U);
    msg.value = 0.356655970165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.573757536506);
    msg.setSource(62233U);
    msg.setSourceEntity(100U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 3761830627U;
    msg.start_lat = 0.814442022329;
    msg.start_lon = 0.165150478213;
    msg.start_z = 0.439750528895;
    msg.start_z_units = 125U;
    msg.end_lat = 0.196887170704;
    msg.end_lon = 0.810406817774;
    msg.end_z = 0.00413269053395;
    msg.end_z_units = 76U;
    msg.speed = 0.612269767927;
    msg.speed_units = 203U;
    msg.lradius = 0.116577829505;
    msg.flags = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.524233243644);
    msg.setSource(24313U);
    msg.setSourceEntity(110U);
    msg.setDestination(52292U);
    msg.setDestinationEntity(227U);
    msg.path_ref = 19993714U;
    msg.start_lat = 0.309862259709;
    msg.start_lon = 0.496565680516;
    msg.start_z = 0.395699282816;
    msg.start_z_units = 7U;
    msg.end_lat = 0.560106134759;
    msg.end_lon = 0.174631310245;
    msg.end_z = 0.744056894782;
    msg.end_z_units = 25U;
    msg.speed = 0.503797231726;
    msg.speed_units = 164U;
    msg.lradius = 0.960221449981;
    msg.flags = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.282807966341);
    msg.setSource(24528U);
    msg.setSourceEntity(138U);
    msg.setDestination(5255U);
    msg.setDestinationEntity(121U);
    msg.path_ref = 1335349046U;
    msg.start_lat = 0.885873365653;
    msg.start_lon = 0.859918274377;
    msg.start_z = 0.772979637257;
    msg.start_z_units = 193U;
    msg.end_lat = 0.257759531692;
    msg.end_lon = 0.210510923876;
    msg.end_z = 0.628676794522;
    msg.end_z_units = 195U;
    msg.speed = 0.757812148354;
    msg.speed_units = 123U;
    msg.lradius = 0.481969878993;
    msg.flags = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.596219636499);
    msg.setSource(50099U);
    msg.setSourceEntity(169U);
    msg.setDestination(14964U);
    msg.setDestinationEntity(172U);
    msg.x = 0.0370650520555;
    msg.y = 0.150279935363;
    msg.z = 0.244872915071;
    msg.k = 0.656232565791;
    msg.m = 0.0285084269417;
    msg.n = 0.142575456508;
    msg.flags = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.711467943605);
    msg.setSource(49574U);
    msg.setSourceEntity(152U);
    msg.setDestination(11580U);
    msg.setDestinationEntity(42U);
    msg.x = 0.914240434049;
    msg.y = 0.885719355025;
    msg.z = 0.205945590636;
    msg.k = 0.112119766271;
    msg.m = 0.112529165034;
    msg.n = 0.338711652815;
    msg.flags = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.458060237591);
    msg.setSource(17448U);
    msg.setSourceEntity(207U);
    msg.setDestination(42720U);
    msg.setDestinationEntity(81U);
    msg.x = 0.182416059853;
    msg.y = 0.513505429901;
    msg.z = 0.809394103941;
    msg.k = 0.550600188632;
    msg.m = 0.328452921736;
    msg.n = 0.386292030367;
    msg.flags = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.577093287242);
    msg.setSource(24440U);
    msg.setSourceEntity(98U);
    msg.setDestination(20261U);
    msg.setDestinationEntity(243U);
    msg.value = 0.172816861982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.382002891338);
    msg.setSource(63524U);
    msg.setSourceEntity(212U);
    msg.setDestination(4152U);
    msg.setDestinationEntity(141U);
    msg.value = 0.179096652351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.989571443452);
    msg.setSource(17660U);
    msg.setSourceEntity(29U);
    msg.setDestination(62931U);
    msg.setDestinationEntity(54U);
    msg.value = 0.698337815695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.385207657853);
    msg.setSource(45924U);
    msg.setSourceEntity(28U);
    msg.setDestination(53850U);
    msg.setDestinationEntity(95U);
    msg.u = 0.668820623849;
    msg.v = 0.317824960394;
    msg.w = 0.0465087346503;
    msg.p = 0.699731007443;
    msg.q = 0.865061736319;
    msg.r = 0.948352137672;
    msg.flags = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.0358185980231);
    msg.setSource(31646U);
    msg.setSourceEntity(156U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(54U);
    msg.u = 0.486670900339;
    msg.v = 0.246817727188;
    msg.w = 0.377698702916;
    msg.p = 0.086049365273;
    msg.q = 0.707985431614;
    msg.r = 0.395936301996;
    msg.flags = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.477636931673);
    msg.setSource(14047U);
    msg.setSourceEntity(55U);
    msg.setDestination(44656U);
    msg.setDestinationEntity(26U);
    msg.u = 0.707315452684;
    msg.v = 0.502494256259;
    msg.w = 0.0111609126204;
    msg.p = 0.175313283257;
    msg.q = 0.479246658938;
    msg.r = 0.504576472887;
    msg.flags = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.8060459129);
    msg.setSource(54074U);
    msg.setSourceEntity(133U);
    msg.setDestination(63795U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 588119269U;
    msg.start_lat = 0.302838812818;
    msg.start_lon = 0.516931479791;
    msg.start_z = 0.414428535219;
    msg.start_z_units = 36U;
    msg.end_lat = 0.0919448777451;
    msg.end_lon = 0.820316574241;
    msg.end_z = 0.396783653031;
    msg.end_z_units = 62U;
    msg.lradius = 0.89427666414;
    msg.flags = 174U;
    msg.x = 0.316703494956;
    msg.y = 0.194114962382;
    msg.z = 0.36626532078;
    msg.vx = 0.508839807487;
    msg.vy = 0.546973592523;
    msg.vz = 0.226857377969;
    msg.course_error = 0.768824860096;
    msg.eta = 6116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.881718597879);
    msg.setSource(20830U);
    msg.setSourceEntity(252U);
    msg.setDestination(11368U);
    msg.setDestinationEntity(8U);
    msg.path_ref = 1296033622U;
    msg.start_lat = 0.637954920179;
    msg.start_lon = 0.460119901552;
    msg.start_z = 0.417818140768;
    msg.start_z_units = 137U;
    msg.end_lat = 0.550050828191;
    msg.end_lon = 0.995992882269;
    msg.end_z = 0.832061236137;
    msg.end_z_units = 229U;
    msg.lradius = 0.958740686403;
    msg.flags = 135U;
    msg.x = 0.873093475541;
    msg.y = 0.538497390911;
    msg.z = 0.872836318264;
    msg.vx = 0.848731206406;
    msg.vy = 0.735889831873;
    msg.vz = 0.381569150901;
    msg.course_error = 0.292876274412;
    msg.eta = 10494U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.634054919572);
    msg.setSource(115U);
    msg.setSourceEntity(122U);
    msg.setDestination(14685U);
    msg.setDestinationEntity(37U);
    msg.path_ref = 1163317250U;
    msg.start_lat = 0.479116153552;
    msg.start_lon = 0.657896570107;
    msg.start_z = 0.0800395810455;
    msg.start_z_units = 229U;
    msg.end_lat = 0.116244075079;
    msg.end_lon = 0.390519694341;
    msg.end_z = 0.475386144059;
    msg.end_z_units = 69U;
    msg.lradius = 0.298099245063;
    msg.flags = 170U;
    msg.x = 0.600245668144;
    msg.y = 0.132145943105;
    msg.z = 0.900290178638;
    msg.vx = 0.240753598223;
    msg.vy = 0.695598390709;
    msg.vz = 0.569648394143;
    msg.course_error = 0.334126933722;
    msg.eta = 294U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.740535171669);
    msg.setSource(25545U);
    msg.setSourceEntity(227U);
    msg.setDestination(17731U);
    msg.setDestinationEntity(251U);
    msg.k = 0.916495028132;
    msg.m = 0.956414981943;
    msg.n = 0.529151798219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.570614191694);
    msg.setSource(50216U);
    msg.setSourceEntity(2U);
    msg.setDestination(9270U);
    msg.setDestinationEntity(194U);
    msg.k = 0.634898009652;
    msg.m = 0.778867292964;
    msg.n = 0.244913826007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.237340697018);
    msg.setSource(58711U);
    msg.setSourceEntity(182U);
    msg.setDestination(58653U);
    msg.setDestinationEntity(80U);
    msg.k = 0.75588858711;
    msg.m = 0.697957169677;
    msg.n = 0.790480348986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.773410950535);
    msg.setSource(61767U);
    msg.setSourceEntity(244U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(68U);
    msg.p = 0.210964147316;
    msg.i = 0.206168816015;
    msg.d = 0.812851255191;
    msg.a = 0.0437367773098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.322196287428);
    msg.setSource(19837U);
    msg.setSourceEntity(233U);
    msg.setDestination(49680U);
    msg.setDestinationEntity(8U);
    msg.p = 0.300130779401;
    msg.i = 0.860489455908;
    msg.d = 0.40148017011;
    msg.a = 0.697594091312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.231472663642);
    msg.setSource(2277U);
    msg.setSourceEntity(71U);
    msg.setDestination(43710U);
    msg.setDestinationEntity(181U);
    msg.p = 0.860850304686;
    msg.i = 0.672530923286;
    msg.d = 0.309637316089;
    msg.a = 0.53176081976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0420774895065);
    msg.setSource(45465U);
    msg.setSourceEntity(184U);
    msg.setDestination(43171U);
    msg.setDestinationEntity(58U);
    msg.op = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.739865715108);
    msg.setSource(13506U);
    msg.setSourceEntity(226U);
    msg.setDestination(4522U);
    msg.setDestinationEntity(120U);
    msg.op = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.459104495364);
    msg.setSource(59345U);
    msg.setSourceEntity(59U);
    msg.setDestination(45451U);
    msg.setDestinationEntity(193U);
    msg.op = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.46562183514);
    msg.setSource(6788U);
    msg.setSourceEntity(174U);
    msg.setDestination(6586U);
    msg.setDestinationEntity(234U);
    msg.x = 0.704559427426;
    msg.y = 0.581527238885;
    msg.z = 0.514215139291;
    msg.vx = 0.740166918759;
    msg.vy = 0.259174437963;
    msg.vz = 0.520210097516;
    msg.ax = 0.625272420387;
    msg.ay = 0.192112612408;
    msg.az = 0.175043423134;
    msg.flags = 4372U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.08722406399);
    msg.setSource(33641U);
    msg.setSourceEntity(133U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(72U);
    msg.x = 0.267716443335;
    msg.y = 0.464049327081;
    msg.z = 0.386158676755;
    msg.vx = 0.474963207067;
    msg.vy = 0.427865586504;
    msg.vz = 0.750911476357;
    msg.ax = 0.847482486231;
    msg.ay = 0.048847732844;
    msg.az = 0.911520592035;
    msg.flags = 60830U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.993511318908);
    msg.setSource(39519U);
    msg.setSourceEntity(24U);
    msg.setDestination(29534U);
    msg.setDestinationEntity(247U);
    msg.x = 0.893232281074;
    msg.y = 0.577887766771;
    msg.z = 0.609705867636;
    msg.vx = 0.894587892051;
    msg.vy = 0.816202615682;
    msg.vz = 0.508530239375;
    msg.ax = 0.157029223816;
    msg.ay = 0.906567122464;
    msg.az = 0.809729903557;
    msg.flags = 65493U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.812041495971);
    msg.setSource(46617U);
    msg.setSourceEntity(233U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(132U);
    msg.value = 0.432301346447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.823026793734);
    msg.setSource(15021U);
    msg.setSourceEntity(184U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(106U);
    msg.value = 0.964419658731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.811083393299);
    msg.setSource(21687U);
    msg.setSourceEntity(50U);
    msg.setDestination(3584U);
    msg.setDestinationEntity(157U);
    msg.value = 0.694543302479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.0236842392703);
    msg.setSource(27497U);
    msg.setSourceEntity(154U);
    msg.setDestination(6107U);
    msg.setDestinationEntity(242U);
    msg.timeout = 58094U;
    msg.lat = 0.805162023049;
    msg.lon = 0.943409191026;
    msg.z = 0.241941094174;
    msg.z_units = 135U;
    msg.speed = 0.776396479127;
    msg.speed_units = 240U;
    msg.roll = 0.807332555607;
    msg.pitch = 0.591142098608;
    msg.yaw = 0.316132895622;
    msg.custom.assign("YXEEYZXWKMORHBQZYUCVANBJWTJLAPMDIWPAOIJVHPSERHUQFWQBXIDQLTGZAJNNEBJONZXYDIBEQODWIJVVOJRAGRBEMSUUQPYHHGSHFTZIBSQKMMFFRPYAHCZLDAYSSRXRWBMIGLXFLFONCZAZMLWDLEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.916028828949);
    msg.setSource(61137U);
    msg.setSourceEntity(169U);
    msg.setDestination(40197U);
    msg.setDestinationEntity(95U);
    msg.timeout = 44076U;
    msg.lat = 0.824218557155;
    msg.lon = 0.912347500454;
    msg.z = 0.305960019804;
    msg.z_units = 86U;
    msg.speed = 0.854446262658;
    msg.speed_units = 76U;
    msg.roll = 0.774231314689;
    msg.pitch = 0.955507828114;
    msg.yaw = 0.679971996585;
    msg.custom.assign("QILYQNSCSTRKGEFPUJJFQZNLNPLKVEBRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.54826821983);
    msg.setSource(55478U);
    msg.setSourceEntity(194U);
    msg.setDestination(74U);
    msg.setDestinationEntity(43U);
    msg.timeout = 9263U;
    msg.lat = 0.338294616033;
    msg.lon = 0.79549086743;
    msg.z = 0.192923821981;
    msg.z_units = 228U;
    msg.speed = 0.454129027713;
    msg.speed_units = 217U;
    msg.roll = 0.133281337872;
    msg.pitch = 0.758089944535;
    msg.yaw = 0.0236695375162;
    msg.custom.assign("LALFDZEXBWCCKMVYROWVIEMOGVDYGYQAQFLTMNAZXSANQFPHNNOKWCPUKXBTSXJMGASSEEYZNGTSIUBAVOYDEBVISFHCEJGPBUVVZJOHRROEHRXHKJXFRWFXHYBCAZDPIQQZVTULSDWDPJMQZOFATMGXLXLLVQNUCMZNERBGKRYKRKPNPWKUJOLUCPDWURPICFGDLIHXECSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.192918909924);
    msg.setSource(62211U);
    msg.setSourceEntity(162U);
    msg.setDestination(61731U);
    msg.setDestinationEntity(39U);
    msg.timeout = 48394U;
    msg.lat = 0.2832226268;
    msg.lon = 0.0889521786093;
    msg.z = 0.383470214592;
    msg.z_units = 29U;
    msg.speed = 0.116807773237;
    msg.speed_units = 78U;
    msg.duration = 60508U;
    msg.radius = 0.59395624785;
    msg.flags = 107U;
    msg.custom.assign("YWRRECIBAMADZZMLWLHJHUQGTSCBROBUQPLUNRHQOXADDFSKFUKNZYQOAXELMCZKMYJQWOWJMSAFQKFGELWVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.995960843592);
    msg.setSource(36355U);
    msg.setSourceEntity(160U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(167U);
    msg.timeout = 41653U;
    msg.lat = 0.452809172455;
    msg.lon = 0.658234907379;
    msg.z = 0.654207778017;
    msg.z_units = 74U;
    msg.speed = 0.771937055656;
    msg.speed_units = 245U;
    msg.duration = 4827U;
    msg.radius = 0.304598078742;
    msg.flags = 18U;
    msg.custom.assign("LTULSUPRGLEDXHIXWZUBCIEXLOQEOIEYYNKXOFRSCGANZCQNFWOQCBNIPTGVJEXATVLVJRVMAGMGJEYZFCRPYYURDWUWJGQKHKBHFZJMPSZURZIBIMPSYSUOMYHMHIPYEAXGMLBTWXLDHDOBNKJUADQSRCSKWNBDAAAVPOZHSWDEKDTVHOOKCZGQQMIZFKWLGEJMFVSFFVURTRVXXLNQTDBUBJFWNTPOQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.509812572329);
    msg.setSource(50149U);
    msg.setSourceEntity(34U);
    msg.setDestination(62190U);
    msg.setDestinationEntity(93U);
    msg.timeout = 28726U;
    msg.lat = 0.366735478401;
    msg.lon = 0.743018029026;
    msg.z = 0.899127327489;
    msg.z_units = 193U;
    msg.speed = 0.956718058339;
    msg.speed_units = 86U;
    msg.duration = 5627U;
    msg.radius = 0.881535800294;
    msg.flags = 115U;
    msg.custom.assign("VRVOIEIYLZIXGLYPNYPBOSAITEXTSWRELUXRWJXPQJOGXEURMIYQIMXBHAWWKTWWYQMUVPWOFKROJZCMHFKZUBGJCNWDEDECDSMBLSOYNPKZRGADRUEZDHLFOXJNTFAFDAHINPTNXVFPRVQWJFDFKYUVOUBSBGTHZBANOQTMGEMCIHUKAKNTUXNDEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.986536732525);
    msg.setSource(43363U);
    msg.setSourceEntity(220U);
    msg.setDestination(4546U);
    msg.setDestinationEntity(122U);
    msg.custom.assign("FXVRUJGPYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.8399061104);
    msg.setSource(61769U);
    msg.setSourceEntity(33U);
    msg.setDestination(18838U);
    msg.setDestinationEntity(3U);
    msg.custom.assign("RRMXVGZHLCMSOYEEZCRKGOSNYDMHYBIMYLVBUOTLMKRWQNJZHCKEXNLTUQPOAKGJVTKHSGFOLDITPXZJVMLDPVSBMDCTXHUXBAAJODJKJNHXDWWDEBOIQOIJABIUZRWOHEIMKSIWXJCDVAQOXPLUPQSPFZALAFZTBFZVYTHNTXGRELWDBGCCNUVMRMKISGWZVNUHIFRSFARCBCYYZUFQHKWFQGYEQPQAUUEVGQFTPPLCRNPYKJATD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.765553134946);
    msg.setSource(21346U);
    msg.setSourceEntity(215U);
    msg.setDestination(24550U);
    msg.setDestinationEntity(187U);
    msg.custom.assign("SLXMUPBWQQMOQQDXWFRFVDWEGONSIUNYGBXELWSTLEEFFPSJVKSAOTJLKCXJFHGMIHHYWRAKUUQCUOLMVFKAJTTBNJBOGJWVLDYNANFOMHZJIMPHXPREYFFZEIIONCXUCYZHWVAZZVKPOJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.934357555729);
    msg.setSource(45776U);
    msg.setSourceEntity(240U);
    msg.setDestination(58667U);
    msg.setDestinationEntity(79U);
    msg.timeout = 58917U;
    msg.lat = 0.0914050326454;
    msg.lon = 0.844594041277;
    msg.z = 0.989049265973;
    msg.z_units = 77U;
    msg.duration = 50595U;
    msg.speed = 0.234796405894;
    msg.speed_units = 230U;
    msg.type = 90U;
    msg.radius = 0.0729203829956;
    msg.length = 0.987510746289;
    msg.bearing = 0.3250184811;
    msg.direction = 10U;
    msg.custom.assign("VXBCBTMNFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.114366031091);
    msg.setSource(43663U);
    msg.setSourceEntity(209U);
    msg.setDestination(57175U);
    msg.setDestinationEntity(233U);
    msg.timeout = 62234U;
    msg.lat = 0.429147818785;
    msg.lon = 0.369509230479;
    msg.z = 0.109198946682;
    msg.z_units = 208U;
    msg.duration = 40312U;
    msg.speed = 0.699631228966;
    msg.speed_units = 243U;
    msg.type = 24U;
    msg.radius = 0.833683041235;
    msg.length = 0.539342017292;
    msg.bearing = 0.517934211637;
    msg.direction = 137U;
    msg.custom.assign("ZZPIDEAWSFPJFDQVVQDXGWUEAZIDUHDGVMFBEVKHIQBQHBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.964626443257);
    msg.setSource(18663U);
    msg.setSourceEntity(21U);
    msg.setDestination(28334U);
    msg.setDestinationEntity(151U);
    msg.timeout = 25972U;
    msg.lat = 0.799971415895;
    msg.lon = 0.756238670378;
    msg.z = 0.634950432214;
    msg.z_units = 85U;
    msg.duration = 56899U;
    msg.speed = 0.402545148838;
    msg.speed_units = 242U;
    msg.type = 52U;
    msg.radius = 0.346941974759;
    msg.length = 0.923697099143;
    msg.bearing = 0.878969187928;
    msg.direction = 225U;
    msg.custom.assign("YZVNNZJIUJJDHVBFXPHQTQIEDYWSODOVGZHXPASTGAYEFRCPAVOEQIRNAIOCKQIEFPHEOQEMUNGZBYXDBFYWLKDXKFLITNLNTQKOTNRTFXLWMHPNERDFUBTTUTFRJIMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.216781101224);
    msg.setSource(8630U);
    msg.setSourceEntity(128U);
    msg.setDestination(39886U);
    msg.setDestinationEntity(27U);
    msg.duration = 49892U;
    msg.custom.assign("ACVUXNHAHRTUPQURNOJUSRDCKOKUZJIKPMIIQQYCREUVZLAENQYCITPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.963233205968);
    msg.setSource(65388U);
    msg.setSourceEntity(120U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(73U);
    msg.duration = 30297U;
    msg.custom.assign("GDDOVFFYZQREKNSUGLPPNCHIGXDVVCDSGSOINMAWLQCHNXZSADUHVUBDGFRMMZJVKAVDAHNZSKRBIJITGMAEUAVCGQKCMTMWBRTCBQBWKRLDSADXLXQZLNULBVTRYXMIROCWQXBFLZQGBWYJIKVELIFTPQHHZTABSNAXIOFKETYGUUWTQPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.89563710299);
    msg.setSource(4117U);
    msg.setSourceEntity(173U);
    msg.setDestination(58180U);
    msg.setDestinationEntity(51U);
    msg.duration = 43174U;
    msg.custom.assign("SVVCYVCGKRHVSPQWLJDGKUCBTAYZAWNQCDSNIUXFIZPSEKPPUKZYSDTGDGLCMLUUTNDIMKZQYXUJIOLAWVGLDPZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.330739820441);
    msg.setSource(53744U);
    msg.setSourceEntity(228U);
    msg.setDestination(2470U);
    msg.setDestinationEntity(119U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.230886680622;
    msg.control.set(tmp_msg_0);
    msg.duration = 25318U;
    msg.custom.assign("AIDOEUWBGQIAGTCGKBZVYHKANQSPUEYLZSKRTSAIKVICXZNDTINFNCDSRHEGAQXJKOHWRLIQJQCRPSFJZUOMRGNZXMJFXXUSUTCMKOGRQUWZKPIJKJYXLHWVNEUMIVMAZOPVNTBCFBXIFRGQJOPPFNEYOBCHZNWXHYFVBTILEHWAFMMDEDFYXSABWDTEDJTLVPWLSUEDNMLMHYTPPRDYRBJVVGLYDJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.627767745396);
    msg.setSource(52738U);
    msg.setSourceEntity(161U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(38U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0773156726504;
    msg.control.set(tmp_msg_0);
    msg.duration = 26967U;
    msg.custom.assign("BEUKJBFSFKZZHYBDCHOWMMTYAIOCHVJFZXAODYKIGECKUSBGNTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.450166859519);
    msg.setSource(62977U);
    msg.setSourceEntity(214U);
    msg.setDestination(34145U);
    msg.setDestinationEntity(9U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.134520701581;
    msg.control.set(tmp_msg_0);
    msg.duration = 59339U;
    msg.custom.assign("YLVYLJOPSSXXDABBKKUSECNPYFHANHZMETSOTQYABUGXTWUZDPKXOZRGDGUQHVACDJHYKTFYPLZYMRLLWLEGCINNGUECQRPWNLIXJTQMXBCBOVEFMJMZORVOSZFQQFEYLQPTAAFWEIBIRUHVVAJHMQGCVDPXZXIRAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.807454810134);
    msg.setSource(48843U);
    msg.setSourceEntity(137U);
    msg.setDestination(2277U);
    msg.setDestinationEntity(165U);
    msg.timeout = 37314U;
    msg.lat = 0.229653086427;
    msg.lon = 0.174379493771;
    msg.z = 0.0292326491396;
    msg.z_units = 191U;
    msg.speed = 0.468209588112;
    msg.speed_units = 219U;
    msg.bearing = 0.251274861442;
    msg.cross_angle = 0.709747750465;
    msg.width = 0.169180655381;
    msg.length = 0.539805574933;
    msg.hstep = 0.226307893815;
    msg.coff = 143U;
    msg.alternation = 132U;
    msg.flags = 106U;
    msg.custom.assign("WTSCCLHSQPNPYVALKNKYWIFOMNPCMDEKRFJWSZUOACTXVVYHIUIFQWNJDQGTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.635970694946);
    msg.setSource(45877U);
    msg.setSourceEntity(146U);
    msg.setDestination(48915U);
    msg.setDestinationEntity(200U);
    msg.timeout = 45962U;
    msg.lat = 0.0571875931384;
    msg.lon = 0.629462442085;
    msg.z = 0.881187474741;
    msg.z_units = 190U;
    msg.speed = 0.877175158522;
    msg.speed_units = 237U;
    msg.bearing = 0.859480420628;
    msg.cross_angle = 0.387897028336;
    msg.width = 0.275659407917;
    msg.length = 0.944154870602;
    msg.hstep = 0.126085216339;
    msg.coff = 175U;
    msg.alternation = 12U;
    msg.flags = 240U;
    msg.custom.assign("WJJYPAYIAQEMRDABHZJTZPOGPKZMVLRHXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.636790022993);
    msg.setSource(6816U);
    msg.setSourceEntity(197U);
    msg.setDestination(30142U);
    msg.setDestinationEntity(35U);
    msg.timeout = 5847U;
    msg.lat = 0.498143299314;
    msg.lon = 0.759850213775;
    msg.z = 0.487483463824;
    msg.z_units = 179U;
    msg.speed = 0.80750431853;
    msg.speed_units = 185U;
    msg.bearing = 0.229864806372;
    msg.cross_angle = 0.277094626851;
    msg.width = 0.666922864135;
    msg.length = 0.0447080060221;
    msg.hstep = 0.623083141514;
    msg.coff = 172U;
    msg.alternation = 196U;
    msg.flags = 188U;
    msg.custom.assign("ZZHOPRSRATOCISDPBMMFIRYIDDPFCUHEHKHMJCOSJOJDQAYKZAJGIVBGXVTUBNYBAXGEVDDQIPHCNLFPUUUMBRLZATNGGEVQHSNGCEEFYLEEOQWDQKQYIUUTHOZKJQFBRLINBLJKCLASITCWMWKOZXBMSPNUCHHGVKIXSUPVPWEVKWAAFJSMRRLFCPWUCKXWTZZMAVWETVDMDSVBLQQYRZROQPRJYSGGYYJHNNWZATMXOTFBOJXKLNGTN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.830400744385);
    msg.setSource(61793U);
    msg.setSourceEntity(75U);
    msg.setDestination(1836U);
    msg.setDestinationEntity(221U);
    msg.timeout = 18793U;
    msg.lat = 0.932087089498;
    msg.lon = 0.37754908874;
    msg.z = 0.304340002924;
    msg.z_units = 117U;
    msg.speed = 0.167816661951;
    msg.speed_units = 198U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.223196245613;
    tmp_msg_0.y = 0.26852099006;
    tmp_msg_0.z = 0.238424618908;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XVXHVLYIOPROANNJFPTXAMDHAJULHCOKOUEZIDVGJTUMTBIUVGZSMFEYQKKEYBEDCYSCVPYMEFFTQRKFWCAWFOINQIILSXCRPBOSQQDDTBYNRGUSSXEWNFJHEWWNFGZMSBNNRHJHLXQWBEHDYZAVXRUWYHJGPLPKNZYIZCBOLZRKKEEAAMJBJQOZXGRBTSUSADQVMNYIICITUKTTCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.961151099286);
    msg.setSource(62747U);
    msg.setSourceEntity(199U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(154U);
    msg.timeout = 29666U;
    msg.lat = 0.422339283997;
    msg.lon = 0.0889360334511;
    msg.z = 0.585872231268;
    msg.z_units = 32U;
    msg.speed = 0.0188104299683;
    msg.speed_units = 155U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0956331439721;
    tmp_msg_0.y = 0.0136887581815;
    tmp_msg_0.z = 0.03266066;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MPHOZADAYBSVTGJPWILGQQSGWBPYGFGLACVDDZNLWEJNJXYAIBKQIRJXAJKOHOTSOBIRFRVXMMHMDQTEEPYNVBCZZSJB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.58618036339);
    msg.setSource(50741U);
    msg.setSourceEntity(173U);
    msg.setDestination(25242U);
    msg.setDestinationEntity(84U);
    msg.timeout = 20239U;
    msg.lat = 0.99646307211;
    msg.lon = 0.815088085396;
    msg.z = 0.954619966696;
    msg.z_units = 24U;
    msg.speed = 0.0713062309784;
    msg.speed_units = 181U;
    msg.custom.assign("NTDYSKYPNNICPJILGMKQIDWETLZELIFOXIFPJUHUQHRKUCSXSLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.0718794902676);
    msg.setSource(52635U);
    msg.setSourceEntity(207U);
    msg.setDestination(12285U);
    msg.setDestinationEntity(106U);
    msg.x = 0.21203228562;
    msg.y = 0.44702504249;
    msg.z = 0.31254093207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.865260922746);
    msg.setSource(11108U);
    msg.setSourceEntity(188U);
    msg.setDestination(10103U);
    msg.setDestinationEntity(230U);
    msg.x = 0.317510323869;
    msg.y = 0.346433720937;
    msg.z = 0.539579412404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.0379709948554);
    msg.setSource(16422U);
    msg.setSourceEntity(127U);
    msg.setDestination(50227U);
    msg.setDestinationEntity(246U);
    msg.x = 0.770510972071;
    msg.y = 0.227742873146;
    msg.z = 0.0815995651347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.76364612833);
    msg.setSource(34546U);
    msg.setSourceEntity(67U);
    msg.setDestination(24526U);
    msg.setDestinationEntity(87U);
    msg.timeout = 22816U;
    msg.lat = 0.424756204344;
    msg.lon = 0.866765618423;
    msg.z = 0.076182166489;
    msg.z_units = 3U;
    msg.amplitude = 0.125851221808;
    msg.pitch = 0.402970633174;
    msg.speed = 0.581404148127;
    msg.speed_units = 69U;
    msg.custom.assign("VPDBMVGQSKFOESQPGLARKURNSEHFWGWWZYTOFLSURIFZUJPMEULEXKYMCJEIZXMVSJDTGIUVSYNIXXCPLBLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.200598908279);
    msg.setSource(726U);
    msg.setSourceEntity(116U);
    msg.setDestination(15298U);
    msg.setDestinationEntity(28U);
    msg.timeout = 30831U;
    msg.lat = 0.869586336267;
    msg.lon = 0.253777127591;
    msg.z = 0.164613177319;
    msg.z_units = 172U;
    msg.amplitude = 0.939841089514;
    msg.pitch = 0.165790419556;
    msg.speed = 0.311148851619;
    msg.speed_units = 212U;
    msg.custom.assign("XNCYBXHQHGDYVZPXATXTXMOVWEMLKGNBPOGWYLMPYTJEIQKEAYLDOXMHCCEWHMNRJBIZBZOWUWUAGQSHSNZSJDYKEICTMHKYRAYWQAAKGTECABVVWTIJQFPVULKREEFSRGSHIIUJDLOTRIULBANFCLLJQFPOFCNWRXCUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.858567376321);
    msg.setSource(35246U);
    msg.setSourceEntity(73U);
    msg.setDestination(27656U);
    msg.setDestinationEntity(5U);
    msg.timeout = 836U;
    msg.lat = 0.130088969278;
    msg.lon = 0.159629427834;
    msg.z = 0.101451512682;
    msg.z_units = 202U;
    msg.amplitude = 0.417893074371;
    msg.pitch = 0.892164386457;
    msg.speed = 0.180273527347;
    msg.speed_units = 142U;
    msg.custom.assign("HTLAQDVBBFGNXEGUTAWYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.999170444852);
    msg.setSource(23708U);
    msg.setSourceEntity(60U);
    msg.setDestination(25731U);
    msg.setDestinationEntity(31U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.658142704949);
    msg.setSource(36479U);
    msg.setSourceEntity(244U);
    msg.setDestination(37274U);
    msg.setDestinationEntity(115U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.38248708585);
    msg.setSource(48232U);
    msg.setSourceEntity(19U);
    msg.setDestination(14432U);
    msg.setDestinationEntity(168U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.75094044584);
    msg.setSource(24517U);
    msg.setSourceEntity(50U);
    msg.setDestination(61414U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.294223115778;
    msg.lon = 0.821236486;
    msg.z = 0.741224228738;
    msg.z_units = 220U;
    msg.radius = 0.160337511109;
    msg.duration = 52495U;
    msg.speed = 0.490817996421;
    msg.speed_units = 54U;
    msg.custom.assign("OAKMVPOYSWTWZVGHNSUQYWDCXBURVEJNATAPXHXEQWVIQOPGNTPIBNHWBPJXNIQIVYBDYQJWZKSHGMFTPLEGJMBLZCYNHOQKQNQIFDEBPTETLQQEFOODYCAEUZZLTMATNMUYOKFHAKNCTWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.109566388349);
    msg.setSource(1325U);
    msg.setSourceEntity(135U);
    msg.setDestination(7806U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.394297242608;
    msg.lon = 0.147392795811;
    msg.z = 0.394146555371;
    msg.z_units = 18U;
    msg.radius = 0.39444800958;
    msg.duration = 45472U;
    msg.speed = 0.919124587957;
    msg.speed_units = 232U;
    msg.custom.assign("VJYWEDSHIDQGRFQFRTQGDRQTNJFIFBWWSDIVEAVAHMCPJPJKRKFSDLSLUCAVGUIMWNOBZETIAFXCAKOZQAHAIEHGOVCCWMYGZNMTPPXXGCNFNMXHLYLOULLPCLVMLWHTPDUEMSYLSXZCJHTRKZEOZUEWCKAVOUDEDKPBQFAJEVIKJHWBYFRXNZXYZMBWXXRJIOYLPKSQNRDSEBUJSYQUFAGHTYJNPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.962927187217);
    msg.setSource(54801U);
    msg.setSourceEntity(24U);
    msg.setDestination(17001U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.325536701698;
    msg.lon = 0.272856430564;
    msg.z = 0.302026185284;
    msg.z_units = 197U;
    msg.radius = 0.653849124209;
    msg.duration = 29325U;
    msg.speed = 0.329157160869;
    msg.speed_units = 82U;
    msg.custom.assign("CPJJQDAXKETHNSEJZZRVZKYWSVMDWEGRGOCCYKLENUSFFMXITMMVPIUDVJORNESAPYNFRNUHYQVCILSCOOGJZBQFCZMMGLKQHSLDSWKLMESO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.261465340964);
    msg.setSource(54560U);
    msg.setSourceEntity(250U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(105U);
    msg.timeout = 61759U;
    msg.flags = 231U;
    msg.lat = 0.656630418912;
    msg.lon = 0.504843144723;
    msg.start_z = 0.628472899753;
    msg.start_z_units = 188U;
    msg.end_z = 0.764795214951;
    msg.end_z_units = 166U;
    msg.radius = 0.443607549167;
    msg.speed = 0.0326788230017;
    msg.speed_units = 23U;
    msg.custom.assign("CSUIPMEQMNMHVITWNIJTFMFYASWBKOAFTRIWCMFWXUMQYNDSIGGDAVJBSUPHFIRYCLSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.563743741936);
    msg.setSource(685U);
    msg.setSourceEntity(168U);
    msg.setDestination(7949U);
    msg.setDestinationEntity(126U);
    msg.timeout = 42016U;
    msg.flags = 77U;
    msg.lat = 0.748958675387;
    msg.lon = 0.271114079489;
    msg.start_z = 0.4885663793;
    msg.start_z_units = 93U;
    msg.end_z = 0.513526100575;
    msg.end_z_units = 52U;
    msg.radius = 0.266243443016;
    msg.speed = 0.138660973521;
    msg.speed_units = 230U;
    msg.custom.assign("DREECKAHELVFNPBSESFBQZIZMNLAAVBVLPSPNJHQTCZAYKTQAPRBDSAQIXDOOHGKJYOKTXIAVTTGHIMFWZLSRQJRGHSCSNIPTQDOUNVOJQYBKCWBMGUMVJYTHDULBMWBMWIFLNSVDAZWSDKMZXPCRHZAPULYWHKCFUYKPLOJUCNIGLTYIUMNFXZHAPCECNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.68858282463);
    msg.setSource(7179U);
    msg.setSourceEntity(94U);
    msg.setDestination(28969U);
    msg.setDestinationEntity(110U);
    msg.timeout = 40050U;
    msg.flags = 68U;
    msg.lat = 0.0049566210437;
    msg.lon = 0.385426427151;
    msg.start_z = 0.462090083671;
    msg.start_z_units = 47U;
    msg.end_z = 0.547185482998;
    msg.end_z_units = 0U;
    msg.radius = 0.46086601149;
    msg.speed = 0.550965266177;
    msg.speed_units = 188U;
    msg.custom.assign("KPCRYVNXPIJYZGZSUIVVGLUAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.785074476625);
    msg.setSource(6277U);
    msg.setSourceEntity(247U);
    msg.setDestination(19034U);
    msg.setDestinationEntity(232U);
    msg.timeout = 37481U;
    msg.lat = 0.146860698713;
    msg.lon = 0.675768364123;
    msg.z = 0.0202106000285;
    msg.z_units = 221U;
    msg.speed = 0.548821514981;
    msg.speed_units = 114U;
    msg.custom.assign("IAMYWFQKUTDBPWLTKYGIKLCGKCJASREKJAJMAZFGYRXMRDXMOMISXZOLLHDGOQPBHERTMYWOSNUXHDJAZUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.652098647889);
    msg.setSource(44205U);
    msg.setSourceEntity(101U);
    msg.setDestination(21441U);
    msg.setDestinationEntity(89U);
    msg.timeout = 6988U;
    msg.lat = 0.927875261298;
    msg.lon = 0.716289747727;
    msg.z = 0.88704060119;
    msg.z_units = 227U;
    msg.speed = 0.209084899956;
    msg.speed_units = 64U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.679954460261;
    tmp_msg_0.y = 0.657872934062;
    tmp_msg_0.z = 0.584021711061;
    tmp_msg_0.t = 0.709610779177;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WLFBFHPYRSWXAPZDLOOMLQCDLEOSNSQMQJCMWIBORKDSYHGDTEJEIXEKSRMXFWFDIHZULMBQOKJVCUPTIXXJGOPXDKOBQJTIFWAJCZNJHPYCBVKETWOHEAVCFXVYTAQYPJRDPGJCSCOZMLTVVKHKEARW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.143190688515);
    msg.setSource(31672U);
    msg.setSourceEntity(98U);
    msg.setDestination(31923U);
    msg.setDestinationEntity(6U);
    msg.timeout = 39784U;
    msg.lat = 0.831187513247;
    msg.lon = 0.338317689197;
    msg.z = 0.171597983485;
    msg.z_units = 180U;
    msg.speed = 0.00260228204512;
    msg.speed_units = 25U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.961218440948;
    tmp_msg_0.y = 0.384613758435;
    tmp_msg_0.z = 0.65702089957;
    tmp_msg_0.t = 0.674932423752;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ATJMKNHXOIUGIPXAKKGFPTBVNLJSLVVTVUUAWNNNVKXUGBRVWYBOSLPQBCGIELLTQNBKFMIDVFURGDGNYYTBSEYPWEACTZZOECCLWGBKBMAAZXIFJIVZDOLHQPCHSHIBKXCMMREXHYNFACPOYVJUFVARKSRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.010737095022);
    msg.setSource(19393U);
    msg.setSourceEntity(59U);
    msg.setDestination(43822U);
    msg.setDestinationEntity(122U);
    msg.x = 0.415469664811;
    msg.y = 0.055547912966;
    msg.z = 0.0219070242018;
    msg.t = 0.618170109292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.355894470398);
    msg.setSource(23314U);
    msg.setSourceEntity(123U);
    msg.setDestination(40107U);
    msg.setDestinationEntity(172U);
    msg.x = 0.875557354662;
    msg.y = 0.120015967496;
    msg.z = 0.0414036343872;
    msg.t = 0.7056306692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.129232639969);
    msg.setSource(4214U);
    msg.setSourceEntity(68U);
    msg.setDestination(37447U);
    msg.setDestinationEntity(62U);
    msg.x = 0.1178066089;
    msg.y = 0.662193854173;
    msg.z = 0.577731760831;
    msg.t = 0.671531529558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.765413284299);
    msg.setSource(53425U);
    msg.setSourceEntity(219U);
    msg.setDestination(43909U);
    msg.setDestinationEntity(221U);
    msg.timeout = 35805U;
    msg.name.assign("CHUSXJLZSNOBWFWLLXEDYZSCVPHLTPZDGJZETBIZLTKBNPYRAFXMFFQXVZTFDVIOCUOEOVPUHWODLYRNKMNVGUJBFZAOKKTNBRTNDGXVQXDGUIJNRWINTGCUGFUBPKOQSHWCP");
    msg.custom.assign("PGWSMMQDTDSIMLQIYJUUVPEBOBCQICVWBYJPQZOQGTPABUPTVEYXYRISEAFNDLFHQSSZAOVGFHNGHAHBTXWSDPONPXKRZAVSHJUFSOCLERDHEMPDVEULCUYKWTDZUQFLWZSTGWUBMOJABRIKZBQIAFLNGJYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.14251351823);
    msg.setSource(54737U);
    msg.setSourceEntity(97U);
    msg.setDestination(24312U);
    msg.setDestinationEntity(235U);
    msg.timeout = 13281U;
    msg.name.assign("CMVBIYXRATONVTLQAJRLRGTESJCUUHYDAOMVQOFQAIXLSJZWSXOXYEAXYJHTSHSUKMBLUPYVYHPVCCEPBJ");
    msg.custom.assign("AMUNOEZQWLTPDKLAWRVJMYWAJJTTDUYHMQCUILDDILKCDHXPONKWNZWCBAUVCMKETVVVRBHJXTDPNOSPMSFNMCYRGIVUYRHDHIBEBMYZFKLNJETIQXEYGFZLDGQGZPWKHGVWPQBYEOMPFMSKOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.0524191949634);
    msg.setSource(48666U);
    msg.setSourceEntity(199U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(180U);
    msg.timeout = 22469U;
    msg.name.assign("GLYMPPRFWXKQOSOIUOJMTTIHUUCQBAKHBJMDISEJVJWGXOXUPCLFTTGOYRMIGEXHZYTTIWMKEILWJVFAKBDLXWAOJDZVDNURXZRAPKZFZQVDSEGQCWRNHWVDMRHMDVLWALCYSCGYFHFGULOWPSEVKKNBNLHQBYNZNZQLOFJNTXERAPPCEOKGFOSSCAESTZDUJBXYMABCTEUTCEQVNWQBALDJUKYXBHZMSGRPNJZYKHIHPRQUSNFAVFGYQXPDCM");
    msg.custom.assign("VUFLGXRGHQBBDDLEZJFFTGEAYOMMDBUHOPOFYVLVFZSLGNVVICJXTVWYTWRAROHDPWTKCKDZWTOYWPEJOXJGQJZXZUEDKGSSCHALEOFLYVUVBWQJKFUYBNIGZBAJDHCAKZQUXRUXFEBXCMIMHWMQRMKMMLJWPQYDEYNHWKRQLXSITXNOVSPMDGAPXBNGBNUIOPRZTYSEJQCTSRIPNKJAVNRHTKGCFZPDQAETSUIULPQCBEFSCIANZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.361920052424);
    msg.setSource(38783U);
    msg.setSourceEntity(64U);
    msg.setDestination(51431U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.611206712585;
    msg.lon = 0.604509563475;
    msg.z = 0.774819047526;
    msg.z_units = 118U;
    msg.speed = 0.248493134917;
    msg.speed_units = 254U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.376579062416;
    tmp_msg_0.y = 0.588104795227;
    tmp_msg_0.z = 0.521612757389;
    tmp_msg_0.t = 0.695995436233;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.263856774227;
    msg.custom.assign("MUKYUVLNKDQXODMSMKPOHULJEPDEXDUMATNSWAWQYBUTGDORYYRKPCACYFMGRTIWDBOFMNABZZOKLVHYHNDEEMWGZJPILFZIBZQODNYQXEHBCSLOPUWZUVCGGCSCFFWKBWJFCPFRNYXGHWQUDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.884196261385);
    msg.setSource(0U);
    msg.setSourceEntity(142U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.908236824978;
    msg.lon = 0.459968939377;
    msg.z = 0.455712670653;
    msg.z_units = 246U;
    msg.speed = 0.142674146634;
    msg.speed_units = 80U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65244U;
    tmp_msg_0.off_x = 0.508638306104;
    tmp_msg_0.off_y = 0.364865290671;
    tmp_msg_0.off_z = 0.399073377217;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.838462312853;
    msg.custom.assign("YOGBULHNAPBDFXNIIPHCGCZEZRGSNQOJBMRASVMLAUOSBAEQWGCZHVSRUKEVPRQTRIUNTMPCGTLCOQXJEKCZWVXLRSKOPYWNSRCDQFTOBWMNBPYZVAEDRJZCJUCKZUEQQLXJHDUWOHJJMRABUWXXYXFKFOXYYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.855299901782);
    msg.setSource(32020U);
    msg.setSourceEntity(70U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.471020964202;
    msg.lon = 0.854172175909;
    msg.z = 0.351812715937;
    msg.z_units = 143U;
    msg.speed = 0.070517247668;
    msg.speed_units = 160U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.572578300162;
    tmp_msg_0.y = 0.0568739329847;
    tmp_msg_0.z = 0.823691304852;
    tmp_msg_0.t = 0.347003173383;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.736404336438;
    msg.custom.assign("RLAKHXYDXWXPFFKMHIJNJTIVYMBFDDQDOBFRPCEJWYGCHAPVWMZONIIILQTBOSDAXNPLFLQXQXOUIUGJOKVVZKSVBHNMOTVRSGJZWKSGECHZEBQEWAEVSUWPRTWMFWUZEUISUPTBBMDFKECNAEGGFPSHPOAKUTKQWJKVJXULBSYXTJBBUAIUQYZEPHLMHTLFXZEGDTJXAJNIQNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.302642706857);
    msg.setSource(35918U);
    msg.setSourceEntity(202U);
    msg.setDestination(1416U);
    msg.setDestinationEntity(105U);
    msg.vid = 5851U;
    msg.off_x = 0.195449097996;
    msg.off_y = 0.557213844479;
    msg.off_z = 0.40515994722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.756228321718);
    msg.setSource(574U);
    msg.setSourceEntity(111U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(78U);
    msg.vid = 40226U;
    msg.off_x = 0.598327845589;
    msg.off_y = 0.973756782246;
    msg.off_z = 0.983343672671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.779173822396);
    msg.setSource(2910U);
    msg.setSourceEntity(241U);
    msg.setDestination(16345U);
    msg.setDestinationEntity(70U);
    msg.vid = 26530U;
    msg.off_x = 0.722061238581;
    msg.off_y = 0.0243400611389;
    msg.off_z = 0.960430205208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.404692437942);
    msg.setSource(3970U);
    msg.setSourceEntity(15U);
    msg.setDestination(9318U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.853411362274);
    msg.setSource(43383U);
    msg.setSourceEntity(221U);
    msg.setDestination(59352U);
    msg.setDestinationEntity(26U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.613107294808);
    msg.setSource(59946U);
    msg.setSourceEntity(199U);
    msg.setDestination(14431U);
    msg.setDestinationEntity(106U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.179425862078);
    msg.setSource(47208U);
    msg.setSourceEntity(215U);
    msg.setDestination(64484U);
    msg.setDestinationEntity(194U);
    msg.mid = 27313U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.97417819173);
    msg.setSource(9389U);
    msg.setSourceEntity(14U);
    msg.setDestination(58916U);
    msg.setDestinationEntity(180U);
    msg.mid = 28411U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.527013381843);
    msg.setSource(36201U);
    msg.setSourceEntity(199U);
    msg.setDestination(910U);
    msg.setDestinationEntity(179U);
    msg.mid = 41415U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.935775691021);
    msg.setSource(25778U);
    msg.setSourceEntity(212U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(250U);
    msg.state = 14U;
    msg.eta = 60898U;
    msg.info.assign("NCKICZTBADKLBTAZAXFIIBIEEQWDYSDJBSMFVUILQJXASHADWFDVFBELOLPHSMNLJQVZYGYSTRWGOXWTEINUPRNCZJHNNRZPCCEHLUOJVJKZORKBTWYRPCGOON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.607495179677);
    msg.setSource(28614U);
    msg.setSourceEntity(114U);
    msg.setDestination(46247U);
    msg.setDestinationEntity(61U);
    msg.state = 186U;
    msg.eta = 57667U;
    msg.info.assign("JYGANGHMQVRERYENBZNTDPXYQACLXUOQJXQUTLPWCECUBUYGDIKSFTTEZISAHOOLCOFLLDYHIBTRRBUZDMNBQXTBTUBBNIDRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.573219886297);
    msg.setSource(49976U);
    msg.setSourceEntity(2U);
    msg.setDestination(41259U);
    msg.setDestinationEntity(219U);
    msg.state = 165U;
    msg.eta = 3741U;
    msg.info.assign("YRCHBMSOXDDMTEEXCICIHKUCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.608597362033);
    msg.setSource(54611U);
    msg.setSourceEntity(42U);
    msg.setDestination(25586U);
    msg.setDestinationEntity(252U);
    msg.system = 50247U;
    msg.duration = 33970U;
    msg.speed = 0.309974519322;
    msg.speed_units = 238U;
    msg.x = 0.615099018723;
    msg.y = 0.837817187767;
    msg.z = 0.446718083792;
    msg.z_units = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.508963778076);
    msg.setSource(28180U);
    msg.setSourceEntity(223U);
    msg.setDestination(28497U);
    msg.setDestinationEntity(71U);
    msg.system = 49470U;
    msg.duration = 9970U;
    msg.speed = 0.179735464524;
    msg.speed_units = 78U;
    msg.x = 0.0920981833322;
    msg.y = 0.32337896735;
    msg.z = 0.782893450372;
    msg.z_units = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.372035303209);
    msg.setSource(23757U);
    msg.setSourceEntity(8U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(130U);
    msg.system = 20224U;
    msg.duration = 147U;
    msg.speed = 0.725738367877;
    msg.speed_units = 187U;
    msg.x = 0.0562529082054;
    msg.y = 0.666236029261;
    msg.z = 0.0485131542226;
    msg.z_units = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.319194612135);
    msg.setSource(37813U);
    msg.setSourceEntity(18U);
    msg.setDestination(33035U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.137329756367;
    msg.lon = 0.527566942427;
    msg.speed = 0.369979915737;
    msg.speed_units = 190U;
    msg.duration = 2145U;
    msg.sys_a = 62050U;
    msg.sys_b = 25296U;
    msg.move_threshold = 0.0200168235589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.831851231842);
    msg.setSource(47138U);
    msg.setSourceEntity(81U);
    msg.setDestination(969U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.926951274389;
    msg.lon = 0.730958043411;
    msg.speed = 0.377634849973;
    msg.speed_units = 147U;
    msg.duration = 29307U;
    msg.sys_a = 22229U;
    msg.sys_b = 41814U;
    msg.move_threshold = 0.436813839785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.149146985956);
    msg.setSource(63914U);
    msg.setSourceEntity(6U);
    msg.setDestination(18668U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.707121726533;
    msg.lon = 0.0739778623696;
    msg.speed = 0.120647968583;
    msg.speed_units = 248U;
    msg.duration = 59918U;
    msg.sys_a = 37050U;
    msg.sys_b = 517U;
    msg.move_threshold = 0.211109680162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.754826677136);
    msg.setSource(8465U);
    msg.setSourceEntity(119U);
    msg.setDestination(7563U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.12061731525;
    msg.lon = 0.397625097737;
    msg.z = 0.255041595305;
    msg.z_units = 174U;
    msg.speed = 0.395648535086;
    msg.speed_units = 39U;
    msg.custom.assign("YFCQHIXEVUELYJBFPECTFHWHMDVLTHNTUZGOJVOTGXRSAMNDYAQSISJKZHZQFVKCURUTIFQSJUIYQYPRZFKUBAOJPPCBWCHIRNLUGXEWMWTQIVMGDQBYXYELDMNOLPSWLJZUOXVDAOSTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.193190025076);
    msg.setSource(10554U);
    msg.setSourceEntity(210U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.608782989726;
    msg.lon = 0.528263059795;
    msg.z = 0.323163732627;
    msg.z_units = 151U;
    msg.speed = 0.998056480686;
    msg.speed_units = 139U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.630908181533;
    tmp_msg_0.lon = 0.857107980782;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ETVIGKPPIDMPCDIOXAHSULBDIMGWLZAXMBXPBKHYKZRSQPNILGNVBUUWKDFTLOWPFVIJYRYGCUYFOLDHPIKIVPJKJUMZJNCSVNJSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.733479158116);
    msg.setSource(22118U);
    msg.setSourceEntity(79U);
    msg.setDestination(45018U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.0327649932707;
    msg.lon = 0.346817337961;
    msg.z = 0.043899472922;
    msg.z_units = 89U;
    msg.speed = 0.0236438650021;
    msg.speed_units = 238U;
    msg.custom.assign("JQNLVKPFTZBLXKNSTIIHIVEACGUHKLOAOPAFVBCGVUYISOHDXISNDBEFFRAXWCRCUZEXIUJHTJAQDJJKWDILNKPOCWZVFWNUZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.633533987493);
    msg.setSource(33375U);
    msg.setSourceEntity(132U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.0444941564777;
    msg.lon = 0.175442743466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.732578416712);
    msg.setSource(51791U);
    msg.setSourceEntity(121U);
    msg.setDestination(34646U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.375526815176;
    msg.lon = 0.12363723554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.725660949481);
    msg.setSource(29490U);
    msg.setSourceEntity(15U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.0915331931578;
    msg.lon = 0.75250102356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.423942903506);
    msg.setSource(9294U);
    msg.setSourceEntity(233U);
    msg.setDestination(30167U);
    msg.setDestinationEntity(195U);
    msg.timeout = 15546U;
    msg.lat = 0.745971673067;
    msg.lon = 0.363293620719;
    msg.z = 0.882413048047;
    msg.z_units = 31U;
    msg.pitch = 0.999405771734;
    msg.amplitude = 0.431981474743;
    msg.duration = 558U;
    msg.speed = 0.852229236519;
    msg.speed_units = 54U;
    msg.radius = 0.305871237863;
    msg.direction = 16U;
    msg.custom.assign("UULKDXQDEVMQMSANQRMIJUJLIQDYFWJAGEUHIVXYCNUZXYZIOKEWGZENRSWLDAYPXVZPHFXCEQSWTTYRJOAHGLYKTNLYGBBJHEKYGPJDRZOQTMBUIQDWTMDSKANPWASQOKKJFAKLFVZAXHCOHLVUPSWBOVFANOBHPZCNCBWIAYUMNGUIEQRZNBWJZYPSTLXTGPMFFCSIBOFOTEDRPTCVKXXKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.333604147604);
    msg.setSource(44187U);
    msg.setSourceEntity(210U);
    msg.setDestination(36613U);
    msg.setDestinationEntity(63U);
    msg.timeout = 31462U;
    msg.lat = 0.417706296594;
    msg.lon = 0.836628223943;
    msg.z = 0.383064757994;
    msg.z_units = 27U;
    msg.pitch = 0.692202125055;
    msg.amplitude = 0.885068074418;
    msg.duration = 55023U;
    msg.speed = 0.379758909151;
    msg.speed_units = 93U;
    msg.radius = 0.340842212801;
    msg.direction = 239U;
    msg.custom.assign("HYRMMVDCOGEKYVPFFOTFKBTRPGJJXECEOCBAISACAJCWUFMKYMPJRMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.835105216469);
    msg.setSource(8094U);
    msg.setSourceEntity(238U);
    msg.setDestination(973U);
    msg.setDestinationEntity(103U);
    msg.timeout = 14111U;
    msg.lat = 0.601197017434;
    msg.lon = 0.749777671323;
    msg.z = 0.142687221764;
    msg.z_units = 212U;
    msg.pitch = 0.127582475395;
    msg.amplitude = 0.839972429125;
    msg.duration = 12652U;
    msg.speed = 0.439595947757;
    msg.speed_units = 224U;
    msg.radius = 0.377225410859;
    msg.direction = 16U;
    msg.custom.assign("QXVCOWJPJWDNKPYFSCUVHJZIKHEICMRGQGFHCKXPUFWZEZKHOKJYCEXMOJDFVTXYQOGOBYHUVYKEGFEADXTTAVTOQEVYUXHXSTSCNCDFIVWSIMKUSNFGNRPGBGEWTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.557830595989);
    msg.setSource(4256U);
    msg.setSourceEntity(14U);
    msg.setDestination(55876U);
    msg.setDestinationEntity(96U);
    msg.formation_name.assign("RIWESDEVBTGVGTGDSJBOUVDDIUFOWLYRWCSWEUNBOBDHZJXCTXPSKULNXZLCRWAQQTLBOQQFICYAZXHBXMFJAHIRPUATMRGHVVDSKQAVOXOHNKQEJXIRCAPPQHZVHTTQBRSCKFMITZMUYVGMBBSMNWMYGVIQNXNJJNPWNZYSATGEAKLLIFNSOREG");
    msg.reference_frame = 140U;
    msg.custom.assign("YXYGUQCECEBJIKRGCFNAWILVHATAEHZPVRVOCMDJXQDLPPAGLMBIUMGCZLTCJPUIFMXATTSGQHZMDEVITHTZMBZTONGKUWRYSKIXJDKLSEJCBKFVXWQNUSLQZOFRMMPDWJHWRRAXJOTQBUPFORNWVBHCQSZQWZNSDESLEIBPIDRMPSVFFFBLWRNCBLFVFNYUXUVNOTKYIGXJPUXGKAGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.397403212181);
    msg.setSource(35394U);
    msg.setSourceEntity(204U);
    msg.setDestination(29435U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("CYNIXKROJCKIGOMAYQZNLRETAMBKQ");
    msg.reference_frame = 19U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44080U;
    tmp_msg_0.off_x = 0.0419476757774;
    tmp_msg_0.off_y = 0.885799348047;
    tmp_msg_0.off_z = 0.691734059892;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VGSKMAWHWQOSJPBVJXUVLNWKRCMBUACICJXADMUXNLFLGDCAHZHXFJZGEHHTIYIQPRUIVDQAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.641878976066);
    msg.setSource(33929U);
    msg.setSourceEntity(231U);
    msg.setDestination(11056U);
    msg.setDestinationEntity(168U);
    msg.formation_name.assign("YYOXQIXPAEQKXQLYCBUGBCSWOPWTHJFQGGKITVRHDWLCSBMUUZHBFULRZARFVFAZHNIMKHILYPLOPZKZKCADAWRCGJPYBGLFFTUAWBCTJTYZDLJJJFMILNLNXQBMPNDREXPIHEXRYXZYEHSHGV");
    msg.reference_frame = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26676U;
    tmp_msg_0.off_x = 0.748084746055;
    tmp_msg_0.off_y = 0.666716752229;
    tmp_msg_0.off_z = 0.12461845524;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HEWVABNKHZVFISCKNIQBCNMLYPEEXZRMGLUMZJSGZXPCCKVEMSPACCZBKZPAGRQESFLFIXOMNABDWTPFJJYPTAEUWBTFHUTGVGEYOLYAXNWSNQIQUQQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.107220156071);
    msg.setSource(12362U);
    msg.setSourceEntity(223U);
    msg.setDestination(58089U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("ISXYSOXOOIJEFBZUOZNBUHQSYCOWXKJDRAMPCCWQLTBMGKLKHOTZIVLTEXZTHZARMRDISCNMNTSJUKXBVLCKIPVPFHYUWNGWDEUXLEFUSQHWYHWVHR");
    msg.formation_name.assign("ITUSICULSCRLMYPULOPRDXTNTVKBQOLHIWBGEANYFGYFLLRQGXBVBKMHQCFPRDFWQORVQYEVFPOKXIAQBINGEELEPVVXHGAQUBBFDASZZDNJYPMMDKCOVKHZQHFQJGTLUUIUQXTRTDDSMZYALSTHRKEXFPOYMJS");
    msg.plan_id.assign("EAEZHFHGPTXVIJPOMHRKLQJPPFWIHMWFKKHGOJRIIHESSPIZRMWSXUPRZUVGLDJMTJOVGSBLGNQWYAOUWXMNTTHDICVQKQAYSAVQRVBYEXDPBLVIFOIVUBZOBWPNMACFSUQBKZIHDDULBXFKCJWYZXNLGCLTXXUOCQRJCFZDIMNEPNWZXDYNJNTBGTJCBRXMCNOSAKQWQOGCSAVHQUYSTAFUEZBYRZKDMTY");
    msg.description.assign("XIFERZGDSGOYZISUZLJKFZZVLWDKUODGNZNXGBXQJUHNPIAALJZKFCSXBFN");
    msg.leader_speed = 0.91147211894;
    msg.leader_bank_lim = 0.777751995997;
    msg.pos_sim_err_lim = 0.562837501661;
    msg.pos_sim_err_wrn = 0.244622700596;
    msg.pos_sim_err_timeout = 10482U;
    msg.converg_max = 0.351015414406;
    msg.converg_timeout = 14128U;
    msg.comms_timeout = 31030U;
    msg.turb_lim = 0.358378411872;
    msg.custom.assign("JXSUBJTOEDQXFMHYIDCEGIYNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.440062308476);
    msg.setSource(43412U);
    msg.setSourceEntity(222U);
    msg.setDestination(52653U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("CEQRNIMTWLUUBDOJMVDYLNNOFVMEQDSQBYDZPXRNXPKRVAXNREUQHBEVBESSBURETBKKOKXCJVDBPUINECDHZAKOUGAFDKYQZBJJSWGFEOAGODDRMXQJATAQ");
    msg.formation_name.assign("TDQJDWWAGOYDJIUHFFPOUQJOEFQZIJCXOXNFGDCSDZFRZKJBVNSBIMTGZFYZZZSQUOGEWWMTVAKLAVCWOLGPVTEENHASNXLARJGB");
    msg.plan_id.assign("GWVIIJRVPLXALEYYOHHJSXJZFJSMGCTNYRLXFADOQMMKVGFMVVDCIPKTZTCEMVFPFXRPQUYURMGVZGKHWNQRPADUJLMTHQNCANAHMIUEELSJIQEPEPNHQRSQHTZWCPNEXVWZBXWFRIJWCWKDQFOYRHBGDKINCLDTBBDNUALPZLUWOJDRSQPNWFDAOUEGKGDNXAIEMBSLHCHYMSTKVOJKWZTOQBGTYBXZXKEOSRJUBYUCVFBBLSIO");
    msg.description.assign("AGLXZZPXGLAZEVQYYBJLLEPQFBMPHAVCHGDTTSRYXEALHZUTAUCIENSASOHC");
    msg.leader_speed = 0.954105816607;
    msg.leader_bank_lim = 0.408413432559;
    msg.pos_sim_err_lim = 0.710798835136;
    msg.pos_sim_err_wrn = 0.218347205186;
    msg.pos_sim_err_timeout = 49350U;
    msg.converg_max = 0.90501028233;
    msg.converg_timeout = 29588U;
    msg.comms_timeout = 41861U;
    msg.turb_lim = 0.0403789038839;
    msg.custom.assign("GYEEMMAMGNKBNQVZTNHSCQKEGQPKYOPYHYRSOAFTFCLZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.499928603955);
    msg.setSource(58679U);
    msg.setSourceEntity(102U);
    msg.setDestination(5055U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("TQYOOVNMCNGCYBKIVQRDMDZPPTLAVNUUXEKYGIZNQPDMTGOBHHYYNNPMPIJONDUKSWARAUXXCBWRLEWIAVALSTKNJEZTBUCSSUQWJZFEFXSABFQGOQXBTFYUKQUGVIVMSQTJPFSFTKKDVZLDBYARHZIHNGLEZEWMDPPHJUWCJQBBFLZHYRLXDJGKOSJVRXBAEEFCLHSW");
    msg.formation_name.assign("ISNJBRPMOCKLX");
    msg.plan_id.assign("WLYAPSFRBTCZADZHUPDGAYRQLIYRULFDCGJBUCBXHMQMPEGYMNGPZCOQBFSUVKHQDZZCCJKBDZBSMKEBWPVDENSTNFLXNROUWXOPLNMXHFTIQJVWHPTFDJLIDMNAWSNEUKBOAEFYUVHEJACZTVQHKEGXMGNVEJVYDOIONYTPAVGG");
    msg.description.assign("IYUGHJDKAZZZRJYTWPBQIIHXUJZZYJLZXBRYZBSDOADUNWPCCFCQGJAWVFSPUFQGDQORPOXLSHNMLTYZESGEGIIXKNCLQUFMITMGDASQLRIIQWKCMKRFHSTEBFWCOMKVYXHKDHEHINBOZTGWNKEEORTWWBMXTVJVDUAGLVDXNRC");
    msg.leader_speed = 0.648759917208;
    msg.leader_bank_lim = 0.954180626253;
    msg.pos_sim_err_lim = 0.837919321116;
    msg.pos_sim_err_wrn = 0.387040690678;
    msg.pos_sim_err_timeout = 60060U;
    msg.converg_max = 0.85468343162;
    msg.converg_timeout = 44687U;
    msg.comms_timeout = 21338U;
    msg.turb_lim = 0.392833938506;
    msg.custom.assign("LKTDMBDJZLWAGOARRVWREJAHFFLMLXHQQJOMURUJRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.0833117031249);
    msg.setSource(59549U);
    msg.setSourceEntity(93U);
    msg.setDestination(18978U);
    msg.setDestinationEntity(73U);
    msg.control_src = 38197U;
    msg.control_ent = 238U;
    msg.timeout = 0.597936070944;
    msg.loiter_radius = 0.0452455975934;
    msg.altitude_interval = 0.469173967227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.525685364326);
    msg.setSource(32812U);
    msg.setSourceEntity(191U);
    msg.setDestination(61932U);
    msg.setDestinationEntity(248U);
    msg.control_src = 62238U;
    msg.control_ent = 198U;
    msg.timeout = 0.0002699146863;
    msg.loiter_radius = 0.89586140076;
    msg.altitude_interval = 0.297005567721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.0980713243206);
    msg.setSource(60976U);
    msg.setSourceEntity(42U);
    msg.setDestination(50225U);
    msg.setDestinationEntity(184U);
    msg.control_src = 4698U;
    msg.control_ent = 2U;
    msg.timeout = 0.0245944838381;
    msg.loiter_radius = 0.357824218581;
    msg.altitude_interval = 0.594064059686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.968278246123);
    msg.setSource(19179U);
    msg.setSourceEntity(180U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(73U);
    msg.flags = 38U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.835322630653;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0759463379193;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.313572122386;
    msg.lon = 0.321161288227;
    msg.radius = 0.303185950766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.375310076632);
    msg.setSource(13548U);
    msg.setSourceEntity(68U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(164U);
    msg.flags = 15U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.457820906243;
    tmp_msg_0.speed_units = 223U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.121152652676;
    tmp_msg_1.z_units = 55U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.475690653639;
    msg.lon = 0.778526280824;
    msg.radius = 0.363064013019;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.148787121465);
    msg.setSource(57330U);
    msg.setSourceEntity(93U);
    msg.setDestination(32528U);
    msg.setDestinationEntity(76U);
    msg.flags = 153U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.351204748432;
    tmp_msg_0.speed_units = 164U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.135004064074;
    tmp_msg_1.z_units = 251U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.581715748934;
    msg.lon = 0.476572893947;
    msg.radius = 0.033535326991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.496720450737);
    msg.setSource(35789U);
    msg.setSourceEntity(218U);
    msg.setDestination(15960U);
    msg.setDestinationEntity(224U);
    msg.control_src = 343U;
    msg.control_ent = 151U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 8U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0066678375372;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.100510178367;
    tmp_tmp_msg_0_1.z_units = 25U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.622078640859;
    tmp_msg_0.lon = 0.186490933471;
    tmp_msg_0.radius = 0.870752569405;
    msg.reference.set(tmp_msg_0);
    msg.state = 34U;
    msg.proximity = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.326106205692);
    msg.setSource(61343U);
    msg.setSourceEntity(80U);
    msg.setDestination(63658U);
    msg.setDestinationEntity(137U);
    msg.control_src = 20801U;
    msg.control_ent = 229U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 115U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.531086221348;
    tmp_tmp_msg_0_0.speed_units = 30U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.626118669879;
    tmp_tmp_msg_0_1.z_units = 202U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.287223732471;
    tmp_msg_0.lon = 0.387499800631;
    tmp_msg_0.radius = 0.31030570033;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.446692775451);
    msg.setSource(311U);
    msg.setSourceEntity(208U);
    msg.setDestination(42998U);
    msg.setDestinationEntity(56U);
    msg.control_src = 39164U;
    msg.control_ent = 105U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0385637567318;
    tmp_tmp_msg_0_0.speed_units = 86U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.251803506206;
    tmp_tmp_msg_0_1.z_units = 8U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.554286922866;
    tmp_msg_0.lon = 0.464622235422;
    tmp_msg_0.radius = 0.0504426988168;
    msg.reference.set(tmp_msg_0);
    msg.state = 53U;
    msg.proximity = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.484810514572);
    msg.setSource(33078U);
    msg.setSourceEntity(100U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(0U);
    msg.ax_cmd = 0.569597396654;
    msg.ay_cmd = 0.947986467189;
    msg.az_cmd = 0.5792838721;
    msg.ax_des = 0.997521001074;
    msg.ay_des = 0.561341858966;
    msg.az_des = 0.994055200157;
    msg.virt_err_x = 0.919932421934;
    msg.virt_err_y = 0.0805488320883;
    msg.virt_err_z = 0.139830510879;
    msg.surf_fdbk_x = 0.0106986473911;
    msg.surf_fdbk_y = 0.196768204163;
    msg.surf_fdbk_z = 0.766778499863;
    msg.surf_unkn_x = 0.244809119508;
    msg.surf_unkn_y = 0.230644650104;
    msg.surf_unkn_z = 0.702094045857;
    msg.ss_x = 0.691381451311;
    msg.ss_y = 0.896819171591;
    msg.ss_z = 0.285097922392;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YCAOBVLPABKAWHRDILZBAGIVPGQJFEOCYMJSUASXLQWKFVRKEAOKYOHCTQPLKHZLXGNDIHGYBAGSJCKFERCPHMOXTSCJPKCFRXCTLUEVZZIXTEFDPUWDAISONRDLEGRWDEGOJFIJEQNTPXEJUSTPYUMPNHIAGSTOKEQMIBDQWRSBFYYUVWVOFRCRZUJHXFXJQQTWYMUIUMQZYMIJNBUALXWZLQZZTVK");
    tmp_msg_0.dist = 0.896639076028;
    tmp_msg_0.err = 0.353130605133;
    tmp_msg_0.ctrl_imp = 0.9387519209;
    tmp_msg_0.rel_dir_x = 0.227502862284;
    tmp_msg_0.rel_dir_y = 0.988403732562;
    tmp_msg_0.rel_dir_z = 0.644103151417;
    tmp_msg_0.err_x = 0.189908710731;
    tmp_msg_0.err_y = 0.485953297204;
    tmp_msg_0.err_z = 0.968612849299;
    tmp_msg_0.rf_err_x = 0.262028098342;
    tmp_msg_0.rf_err_y = 0.842514588899;
    tmp_msg_0.rf_err_z = 0.194083014414;
    tmp_msg_0.rf_err_vx = 0.497986137254;
    tmp_msg_0.rf_err_vy = 0.576585440586;
    tmp_msg_0.rf_err_vz = 0.932395978117;
    tmp_msg_0.ss_x = 0.170607126479;
    tmp_msg_0.ss_y = 0.106966756614;
    tmp_msg_0.ss_z = 0.678322422499;
    tmp_msg_0.virt_err_x = 0.0218135916076;
    tmp_msg_0.virt_err_y = 0.470483429557;
    tmp_msg_0.virt_err_z = 0.970994076735;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.0662047230501);
    msg.setSource(56083U);
    msg.setSourceEntity(130U);
    msg.setDestination(17262U);
    msg.setDestinationEntity(202U);
    msg.ax_cmd = 0.117370446589;
    msg.ay_cmd = 0.793711895761;
    msg.az_cmd = 0.175692217485;
    msg.ax_des = 0.452918789441;
    msg.ay_des = 0.357675050385;
    msg.az_des = 0.73911092785;
    msg.virt_err_x = 0.0185663139688;
    msg.virt_err_y = 0.00389397052114;
    msg.virt_err_z = 0.402001948301;
    msg.surf_fdbk_x = 0.661593077416;
    msg.surf_fdbk_y = 0.326408562683;
    msg.surf_fdbk_z = 0.629149250352;
    msg.surf_unkn_x = 0.402763443998;
    msg.surf_unkn_y = 0.804474511377;
    msg.surf_unkn_z = 0.456731572002;
    msg.ss_x = 0.604289903658;
    msg.ss_y = 0.131123612476;
    msg.ss_z = 0.88492681585;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WXIPUMKXAQKSBPQJDRGDTUHEZPRPYOCVABIKGSCFYRJSDXDTJTPZYMSVCRFWVDCBZWBEPCZHARYGKKFNHPNYZOZSSTOEXZLLTGSGSLHQJLKGFWGDOEVKXLBVUNDUPNFNYJBOQQVWTUHHMOQZIYCAWMIYIBKFLSAXOXRVWBMHYFJQLCTGTXRCOOBNEOJDRGMRJSGNALLMDHQWZNFUPAMTXM");
    tmp_msg_0.dist = 0.696285848883;
    tmp_msg_0.err = 0.944929270848;
    tmp_msg_0.ctrl_imp = 0.494678367802;
    tmp_msg_0.rel_dir_x = 0.702746242401;
    tmp_msg_0.rel_dir_y = 0.611477606639;
    tmp_msg_0.rel_dir_z = 0.0180900698611;
    tmp_msg_0.err_x = 0.774615703513;
    tmp_msg_0.err_y = 0.523034731666;
    tmp_msg_0.err_z = 0.298187276174;
    tmp_msg_0.rf_err_x = 0.302990621807;
    tmp_msg_0.rf_err_y = 0.559978025407;
    tmp_msg_0.rf_err_z = 0.896188993168;
    tmp_msg_0.rf_err_vx = 0.266181877099;
    tmp_msg_0.rf_err_vy = 0.397360396656;
    tmp_msg_0.rf_err_vz = 0.800105224016;
    tmp_msg_0.ss_x = 0.912387642216;
    tmp_msg_0.ss_y = 0.75905745644;
    tmp_msg_0.ss_z = 0.25332417984;
    tmp_msg_0.virt_err_x = 0.612942791185;
    tmp_msg_0.virt_err_y = 0.0311166343119;
    tmp_msg_0.virt_err_z = 0.892313474385;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.689340308454);
    msg.setSource(5273U);
    msg.setSourceEntity(144U);
    msg.setDestination(63475U);
    msg.setDestinationEntity(179U);
    msg.ax_cmd = 0.783700712197;
    msg.ay_cmd = 0.910487694337;
    msg.az_cmd = 0.342064235006;
    msg.ax_des = 0.307102772532;
    msg.ay_des = 0.942579504035;
    msg.az_des = 0.919161373639;
    msg.virt_err_x = 0.49667023318;
    msg.virt_err_y = 0.364586896917;
    msg.virt_err_z = 0.636356180669;
    msg.surf_fdbk_x = 0.715006588003;
    msg.surf_fdbk_y = 0.345570137958;
    msg.surf_fdbk_z = 0.080382824933;
    msg.surf_unkn_x = 0.148567412014;
    msg.surf_unkn_y = 0.591926356058;
    msg.surf_unkn_z = 0.525980120271;
    msg.ss_x = 0.32048533697;
    msg.ss_y = 0.136023457699;
    msg.ss_z = 0.631352874007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.803622612222);
    msg.setSource(39107U);
    msg.setSourceEntity(72U);
    msg.setDestination(33165U);
    msg.setDestinationEntity(241U);
    msg.s_id.assign("LVLXDZONHGTFGGQMRQBCOALXYUDRGVBVGGMUSMBPKDFPJZTCEKUDJNKXOMEQBFYDSNOMAVIXRNYZCOKHGXSHWTXFWSUJLHZCMLWHTWTQZKTEISSZCMVQDWGXRSZEAGYPPIXNOATIZJJJFAPPFKFFPQMONTFEHLCICFVYPGJACICVV");
    msg.dist = 0.880778003529;
    msg.err = 0.77182830403;
    msg.ctrl_imp = 0.969224559641;
    msg.rel_dir_x = 0.893052752131;
    msg.rel_dir_y = 0.358767695495;
    msg.rel_dir_z = 0.287875147879;
    msg.err_x = 0.391318517627;
    msg.err_y = 0.689257208658;
    msg.err_z = 0.23231780471;
    msg.rf_err_x = 0.140255352242;
    msg.rf_err_y = 0.250727051846;
    msg.rf_err_z = 0.656577918696;
    msg.rf_err_vx = 0.40343821148;
    msg.rf_err_vy = 0.481194119697;
    msg.rf_err_vz = 0.0281601953976;
    msg.ss_x = 0.167599399901;
    msg.ss_y = 0.0786232486459;
    msg.ss_z = 0.0782556490691;
    msg.virt_err_x = 0.278660193058;
    msg.virt_err_y = 0.967168218801;
    msg.virt_err_z = 0.90258850988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.0206346728064);
    msg.setSource(7668U);
    msg.setSourceEntity(32U);
    msg.setDestination(54291U);
    msg.setDestinationEntity(37U);
    msg.s_id.assign("PSFWXXLFFPSTYDARSTUDHPGNUCMDZNSVIAKEVEARJWZMW");
    msg.dist = 0.858451791958;
    msg.err = 0.985531369247;
    msg.ctrl_imp = 0.354734676492;
    msg.rel_dir_x = 0.367393201296;
    msg.rel_dir_y = 0.848384269439;
    msg.rel_dir_z = 0.43091006584;
    msg.err_x = 0.457887173935;
    msg.err_y = 0.0858412361744;
    msg.err_z = 0.878675492363;
    msg.rf_err_x = 0.022740507007;
    msg.rf_err_y = 0.699989888888;
    msg.rf_err_z = 0.733551645125;
    msg.rf_err_vx = 0.452661876925;
    msg.rf_err_vy = 0.577827900464;
    msg.rf_err_vz = 0.724492619249;
    msg.ss_x = 0.851294794386;
    msg.ss_y = 0.202034556311;
    msg.ss_z = 0.861034078656;
    msg.virt_err_x = 0.818154125795;
    msg.virt_err_y = 0.292313251103;
    msg.virt_err_z = 0.815465674809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.806604142802);
    msg.setSource(17031U);
    msg.setSourceEntity(128U);
    msg.setDestination(28852U);
    msg.setDestinationEntity(139U);
    msg.s_id.assign("ZXZZOPETUIMJIUHHLEFMNOWDSDQGMKQIWYCSAMJBMVOEQXUQYWQUDBACRJWGTKTCKZMJL");
    msg.dist = 0.682098547782;
    msg.err = 0.170824918332;
    msg.ctrl_imp = 0.961860602953;
    msg.rel_dir_x = 0.19215598818;
    msg.rel_dir_y = 0.68118237923;
    msg.rel_dir_z = 0.485073360315;
    msg.err_x = 0.41491226267;
    msg.err_y = 0.685543045679;
    msg.err_z = 0.577201294565;
    msg.rf_err_x = 0.958008543497;
    msg.rf_err_y = 0.514210834538;
    msg.rf_err_z = 0.254461192203;
    msg.rf_err_vx = 0.728893021042;
    msg.rf_err_vy = 0.0857200815199;
    msg.rf_err_vz = 0.551545114639;
    msg.ss_x = 0.69694341829;
    msg.ss_y = 0.58443070633;
    msg.ss_z = 0.333507134529;
    msg.virt_err_x = 0.135209911922;
    msg.virt_err_y = 0.935939844066;
    msg.virt_err_z = 0.201669877737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.907531280786);
    msg.setSource(32301U);
    msg.setSourceEntity(80U);
    msg.setDestination(44951U);
    msg.setDestinationEntity(193U);
    msg.timeout = 41616U;
    msg.rpm = 0.993874240241;
    msg.direction = 14U;
    msg.custom.assign("ZPAGWROTRKPAQJYBKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.16438677196);
    msg.setSource(41881U);
    msg.setSourceEntity(46U);
    msg.setDestination(39202U);
    msg.setDestinationEntity(218U);
    msg.timeout = 45057U;
    msg.rpm = 0.128412244325;
    msg.direction = 235U;
    msg.custom.assign("LQCDYUDNSRCLXPGYIHHRUOSXXYLHFENWQTGRUGRSRBNEPVCNIOATFKMUSFXEPJWGAYEBLWSPJBVZXEAYTAVYURHVMRNBZGSJETHDDZUYSOYDCNQCPYWBZBPFWFVSCFVURVIHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.922831725835);
    msg.setSource(17506U);
    msg.setSourceEntity(68U);
    msg.setDestination(7634U);
    msg.setDestinationEntity(120U);
    msg.timeout = 15691U;
    msg.rpm = 0.501132003113;
    msg.direction = 155U;
    msg.custom.assign("SEBFODAYZWIBYVTUZHQFPBFILCSJSRANSKRMXSNWGWFUXXIJVCCCYVXPWQXNZQZWJNHDHMQMNLAPAVDDGLGWDZMNKLNPFIGARMDXRRPSXHLJAYEZJAIYDUSUPITYDEHXSEMRHLPMFBKNOKHZVSUUAFIOTKFEBMJQIGMBYKTKBLWEJFZTYNJQHEIJHVOKCYOVNRBCMWLGEUWAPPCUQQFZBRCTITVCOZVLWGEKECLTKPAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.296332714214);
    msg.setSource(47510U);
    msg.setSourceEntity(227U);
    msg.setDestination(30657U);
    msg.setDestinationEntity(67U);
    msg.formation_name.assign("VJENOQMREUJIPDAPXBBRVWFTAROTJCUUXCHDIBBFHDOSNKBSNWFHYBZNTWGAYSLHUWZSGKUNZPRINXWGHRNLVLSOCHKBUJZLXUDZOCZMYJTMASRUXAPOJMIXCREZFIFKJXKHATKUPIFEYGHFKNQLKQDTVBXI");
    msg.type = 10U;
    msg.op = 55U;
    msg.group_name.assign("MTQWRACMDUEMQCJIOMHQLTFDQMPHVMGNPSUNZFPETHFVRDMEVSVCHIWYRODBFUGMNSGCDWAKYLMJLEVXURCIQNPLFAYWWZAODULETGXZZELUVPYZGZXLCASZAHJXKBFBEILPJUPHBKPZJGGRBNATCSELXOSNFCDOYWNJOTVOLGDJNXBEQBWRRTVEWGSWPVXZOIGSUKSRRKIHVDSYPTCXBIMOBIYFWAUHJKKXXNJATQRZABIQFIJYKUCQOHDYY");
    msg.plan_id.assign("KGEQFLZVWFRBNAVVKJNDHXIOGMFKNIJPRBDZEKMIJFKKYCFIWZUCCMJKWGIXNZLXYTNOOAILGEVNVQAMISUXUCXCECCAUIWIAGAZTYRBNCYGSJKRLV");
    msg.description.assign("TZPXICDKFIOOQHIYVINIOAEDLBCWTYEORQBQRRQJCVFOAPNNGKEQMKDGUMVZULAZFQXDYFMGUYOHSPIEDWDBHEWLAZBYLRNGTJVKIWCDZRNTZWSTWIXXECKZFEHZYXPOGXSGBFUTARVSTQSJFROZULHSCPSMYKMDAUPKAJVBPYRDSTQGKIGWRAGRMHHUJXJAYPCSVXFBZBMDHVEKNMNGWLMHJCBPHLMYWOTJLCEQUXINNNJJCF");
    msg.reference_frame = 144U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31586U;
    tmp_msg_0.off_x = 0.174823965798;
    tmp_msg_0.off_y = 0.757271461321;
    tmp_msg_0.off_z = 0.933973878299;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.659206788231;
    msg.leader_speed_min = 0.996102776474;
    msg.leader_speed_max = 0.227700947283;
    msg.leader_alt_min = 0.806170859516;
    msg.leader_alt_max = 0.904381388307;
    msg.pos_sim_err_lim = 0.00847904774458;
    msg.pos_sim_err_wrn = 0.203882620427;
    msg.pos_sim_err_timeout = 25875U;
    msg.converg_max = 0.0454311990475;
    msg.converg_timeout = 22158U;
    msg.comms_timeout = 1560U;
    msg.turb_lim = 0.948747740172;
    msg.custom.assign("QNVGFSSQAACCWKGKDHVVBOLWWCBMOKDIDYVUZQGBGULIKRWFDWEMGTLOXQOBKZJFJNVPIEZUUEHHQJRVSNDADXZYVMACJQPIUKOAUSYXBFHEZPCSVAAVXOBHYRMQEUWDYZLQPCILBMNIGIYATNIHZJCGXPLTKPTBUORJXZWXYRSMZBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.277846189337);
    msg.setSource(963U);
    msg.setSourceEntity(40U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(78U);
    msg.formation_name.assign("POVBBMEAFAZOFZDAHIXLRRCASLOSQEGLAPKQXKJSUXHVBKLSIUXTCEOFDHWANZHSAECVYOCDRUTSBIPPLQBPWYUOIJJUGXGTSYGURWICZPAZPZFTGMWKKGUMSHTJQDNFJYONMLVQQLBSGLW");
    msg.type = 76U;
    msg.op = 215U;
    msg.group_name.assign("GRAJDXPGRGMNLFLHKHCAHQCPLSXHTFQJBLMCCJIVTSRPUSEKIWHCQBQZDPLSBRJRMZWEDEVMFGANWCBTLZOSEASMWNBPAHPDZPJGKJFOVEXOGNRUYUTMIUBFMCJMNFFDDKHRMZPIZOWLXUSYNQRZXXSQUIEIYYKYRJTEUCKZYEOGOAKTKKUIWVEXIFRPTYYQIHOGTVMG");
    msg.plan_id.assign("HIYJNRUDDPZYRHAVUCWRTYSZEQVFXPTJVSTNPSEONYNODMXFITCCWKNBFNXNKJHIIQSLPHWBIEARXUARENIGFCBIJBUEASCMDYVDHWTDZAMJQRCKDHOCGLFEMTLZJDBPVOCBYKAFZUQWWGDTMKM");
    msg.description.assign("BZLMPHUZYOHQQNSWRGJQYQJDWOVZTNMRULEAINOFJHBIMHTOESHK");
    msg.reference_frame = 126U;
    msg.leader_bank_lim = 0.968520606405;
    msg.leader_speed_min = 0.895289781398;
    msg.leader_speed_max = 0.939693406971;
    msg.leader_alt_min = 0.486618254487;
    msg.leader_alt_max = 0.771663664053;
    msg.pos_sim_err_lim = 0.89474125611;
    msg.pos_sim_err_wrn = 0.0220984442306;
    msg.pos_sim_err_timeout = 63837U;
    msg.converg_max = 0.505535335878;
    msg.converg_timeout = 14519U;
    msg.comms_timeout = 22199U;
    msg.turb_lim = 0.81130988648;
    msg.custom.assign("KXPWIUUKCWXCCFRZKNFCHMYDYHGNHGHADLEZVVYXFHZNSCYUQAEBPXGLNWKGEDHTEPJRZVNXIJZSPEBWSBKGWFUNXBBFORLJZQDPOEQQVXHCYDDTKNDVYVQEDSOTREUSPZFOFWUJLWMIGIYJKJQWEMMTNVHGBCWLUMBZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.038039950812);
    msg.setSource(17770U);
    msg.setSourceEntity(2U);
    msg.setDestination(964U);
    msg.setDestinationEntity(125U);
    msg.formation_name.assign("ZNUHYWJNCZREXPWMAZQUYTGNALOLKBQHXGOQVDGIIPYTXMHGKIMMPWZVJNODDJROGKKPPVTNJADZCQQSVTVDEIGVYLAXZDIBOPKWSYBXVACQSMVKSWBTIPDJUHBUCZEPYLURTQRPERLYFYPTDFFQQJGIVUEMHNHFBOXAKFCOMIW");
    msg.type = 206U;
    msg.op = 196U;
    msg.group_name.assign("AMKWUMOKZGAKJBRWAFHTPASXNSRWYNHIDUHPYKOJPSHVZLSXZPVVANWWHRLYDJCNQDKFWYDVEMWIZOUSJVITJBLIDCHPPPKJZDTOQYXCMHTLTELUIFKLQQIZWRXVYRNEOXCTDGEPGVSWAUQOJOMCKXUBLZSGHOBZPNVXSAQNUIQICJITBJYBEXBCDCDUYLYWTMNAGNRFTE");
    msg.plan_id.assign("RPHSVXOCVJBJDBOTJDIVTYXEQDOKOKCGVGWIFWSEJITLNMAHDCSAYAVMHGNU");
    msg.description.assign("CBAYYALBZPYOQDBIAEWQVHNAVFMPATEJJKHIGCYGCRRWLHOTKFRFJZHLIALCMZSKMZHREHUBRPSGAXGDKYDTRCUQIRNSKYDUSWXVNZUXWQUJKIXLTZQKMQQGCFWNOEEDQVPXDMYWLIILFNLXGMCTWURZAQDHVEPFULUEOQWXFVEINEBSDDAJPZJJCJYNUVOBGRSKTJBMPNCWRIMIOYMH");
    msg.reference_frame = 240U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49639U;
    tmp_msg_0.off_x = 0.336003198082;
    tmp_msg_0.off_y = 0.0731978471792;
    tmp_msg_0.off_z = 0.364742852753;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.499955344587;
    msg.leader_speed_min = 0.735032960521;
    msg.leader_speed_max = 0.15135406662;
    msg.leader_alt_min = 0.760022806314;
    msg.leader_alt_max = 0.667373131387;
    msg.pos_sim_err_lim = 0.428561818098;
    msg.pos_sim_err_wrn = 0.0187039289084;
    msg.pos_sim_err_timeout = 55636U;
    msg.converg_max = 0.14924204774;
    msg.converg_timeout = 12089U;
    msg.comms_timeout = 38548U;
    msg.turb_lim = 0.349138901064;
    msg.custom.assign("NSCNODJLNQYWZBCXJRDUYFHXDORVVVBTHSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.801976531179);
    msg.setSource(58158U);
    msg.setSourceEntity(180U);
    msg.setDestination(25571U);
    msg.setDestinationEntity(103U);
    msg.timeout = 35831U;
    msg.lat = 0.078611242718;
    msg.lon = 0.42911162473;
    msg.z = 0.0325223604267;
    msg.z_units = 150U;
    msg.speed = 0.172034595072;
    msg.speed_units = 115U;
    msg.custom.assign("OWCXGYRCWOYCQBOEDHPOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.508281167535);
    msg.setSource(36875U);
    msg.setSourceEntity(26U);
    msg.setDestination(45845U);
    msg.setDestinationEntity(200U);
    msg.timeout = 14789U;
    msg.lat = 0.273223183052;
    msg.lon = 0.528702762676;
    msg.z = 0.53011807747;
    msg.z_units = 30U;
    msg.speed = 0.285844515921;
    msg.speed_units = 50U;
    msg.custom.assign("CBGBIOOLKXSTCNDDOEVYVIZUDKBVUYTFSUTED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.354613924947);
    msg.setSource(51932U);
    msg.setSourceEntity(121U);
    msg.setDestination(35666U);
    msg.setDestinationEntity(228U);
    msg.timeout = 52917U;
    msg.lat = 0.923604575123;
    msg.lon = 0.794574672866;
    msg.z = 0.579379007624;
    msg.z_units = 75U;
    msg.speed = 0.860523228571;
    msg.speed_units = 190U;
    msg.custom.assign("WHTQNDAWSRWOMXCMPRGGIUKKHCUFVHSZPZXXTWSJIEQOMJOPEAVDLIQYD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.95660413502);
    msg.setSource(57816U);
    msg.setSourceEntity(7U);
    msg.setDestination(702U);
    msg.setDestinationEntity(56U);
    msg.timeout = 154U;
    msg.lat = 0.320863600593;
    msg.lon = 0.658048735407;
    msg.z = 0.675847541203;
    msg.z_units = 189U;
    msg.speed = 0.278958096944;
    msg.speed_units = 194U;
    msg.custom.assign("YPPGCHTWHNMPFFUEIUTNGVWPCNBRSQQQVJMIMRJLBRSWAGMXDWOZUZYGNQUPTAHQYFELKELJGEYUXOLYTVONALRVKBSLODZDLDJSHKDPCIQRMBTCRSVFJSQYYHIIJFPWDTPBWIVQJUIEXXNCAXMKSIIZWOVJZYDPFYOZTGDCLQEAXHTNURPUXWCOMAKMCUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.674303858462);
    msg.setSource(16698U);
    msg.setSourceEntity(151U);
    msg.setDestination(55455U);
    msg.setDestinationEntity(141U);
    msg.timeout = 56115U;
    msg.lat = 0.243574574183;
    msg.lon = 0.973889083766;
    msg.z = 0.474379419549;
    msg.z_units = 236U;
    msg.speed = 0.507808569377;
    msg.speed_units = 24U;
    msg.custom.assign("AOVQBBAPZNFGLLWRHNMEZIOBMWOYGSNPGKQOTERMWABSSLJZZJEDGQCWVVGTCHMYIOFCTCLLUPKKYUTYUIGCRXRNECEKQNSWFRYTMXPSDPQRWTIDEOFVYVZJKBGCPOYSHXSQSAIHTLWAARMDIEFILRJBHVTBHQFTVJDNZKXDCUZXVJJAPHUKUAPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.432223971249);
    msg.setSource(46333U);
    msg.setSourceEntity(196U);
    msg.setDestination(1939U);
    msg.setDestinationEntity(234U);
    msg.timeout = 21739U;
    msg.lat = 0.542406495019;
    msg.lon = 0.922026714851;
    msg.z = 0.794843039588;
    msg.z_units = 91U;
    msg.speed = 0.379073918786;
    msg.speed_units = 66U;
    msg.custom.assign("XVXUHSDOBDLRHARKBVGNMGYZJUKCBJTFXSFFHOJLOJQQYYRUJUCMEKRNXERSLNPSAZCQIQAWGTYZDDHFGQMBZTNTSGUNBIHXWNRHAFTTDWKXRGHEBABZVVLCELZYOKSYXYQLVQZWSZWROUQRABSTIUEFEWFUXMZGPQVTNDAJEJMQIUNAMCOHETDDMIUKNCLCJKSIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.753905231775);
    msg.setSource(14783U);
    msg.setSourceEntity(50U);
    msg.setDestination(56893U);
    msg.setDestinationEntity(204U);
    msg.arrival_time = 0.833035496076;
    msg.lat = 0.169459178911;
    msg.lon = 0.694366927753;
    msg.z = 0.731394551575;
    msg.z_units = 90U;
    msg.travel_z = 0.842232768282;
    msg.travel_z_units = 46U;
    msg.delayed = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.491307914869);
    msg.setSource(42312U);
    msg.setSourceEntity(226U);
    msg.setDestination(61192U);
    msg.setDestinationEntity(242U);
    msg.arrival_time = 0.563789241362;
    msg.lat = 0.827906434812;
    msg.lon = 0.652952384175;
    msg.z = 0.493270497256;
    msg.z_units = 253U;
    msg.travel_z = 0.621419895389;
    msg.travel_z_units = 26U;
    msg.delayed = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.794071026546);
    msg.setSource(52900U);
    msg.setSourceEntity(168U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(180U);
    msg.arrival_time = 0.520565919874;
    msg.lat = 0.51232467655;
    msg.lon = 0.886226876828;
    msg.z = 0.955601554296;
    msg.z_units = 149U;
    msg.travel_z = 0.688798046241;
    msg.travel_z_units = 220U;
    msg.delayed = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.58448500687);
    msg.setSource(18343U);
    msg.setSourceEntity(5U);
    msg.setDestination(4502U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.709000255908;
    msg.lon = 0.688718584654;
    msg.z = 0.32897882918;
    msg.z_units = 109U;
    msg.speed = 0.76782820026;
    msg.speed_units = 198U;
    msg.bearing = 0.241436118891;
    msg.cross_angle = 0.662708291905;
    msg.width = 0.505888229692;
    msg.length = 0.360835102115;
    msg.coff = 157U;
    msg.angaperture = 0.526473746276;
    msg.range = 62719U;
    msg.overlap = 203U;
    msg.flags = 199U;
    msg.custom.assign("PMKZPUIOWNTAAGZPHEMZIIWNXIBCHQAPPQDSSCJVIFMUVKDVLNBYDAERDDYWLXRDZCJXSBJLKOZXPVQRQWKVYGVLONFZGOEFBRJNWNKQLCQXUBEZMYFSDJETYFAQBLMDSNIIFODNPAQZHKHSUTPLUKSJUOGIBCXQCVXBHCTMLKVWKLOFGBJTHCNSSTAH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.737169020806);
    msg.setSource(29743U);
    msg.setSourceEntity(166U);
    msg.setDestination(45965U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.531421696568;
    msg.lon = 0.255299209272;
    msg.z = 0.235911886174;
    msg.z_units = 253U;
    msg.speed = 0.0470686906937;
    msg.speed_units = 161U;
    msg.bearing = 0.153235708138;
    msg.cross_angle = 0.910677420022;
    msg.width = 0.0187389873839;
    msg.length = 0.703112851216;
    msg.coff = 49U;
    msg.angaperture = 0.429751042729;
    msg.range = 54541U;
    msg.overlap = 243U;
    msg.flags = 118U;
    msg.custom.assign("IQBENHWPNUMZGYMUGNXOEXAJRCHLSSUIZWGDQSVPVRUETLWKVJFLVANPDYXTFDIRWMSEMHGWBJFZROHCKOXSBTHDILECKOFKMHXLQMUKGVQLTTBFSGGZMXAFAWKAZTLOKAZBXHHYCZEEIINAGJTPBOVSBYJKOZMQZVDQMLVJPJXDPDHJYBLDPDYLTNYYOXSVRCEPPUCRSQRANUIJTFCFBXWEWIGQKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.636048040247);
    msg.setSource(36026U);
    msg.setSourceEntity(65U);
    msg.setDestination(4824U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.88101345171;
    msg.lon = 0.897583855736;
    msg.z = 0.659691816536;
    msg.z_units = 149U;
    msg.speed = 0.324158882007;
    msg.speed_units = 191U;
    msg.bearing = 0.317113492637;
    msg.cross_angle = 0.960642039185;
    msg.width = 0.278849542339;
    msg.length = 0.73912590996;
    msg.coff = 141U;
    msg.angaperture = 0.851499511998;
    msg.range = 4476U;
    msg.overlap = 12U;
    msg.flags = 168U;
    msg.custom.assign("ITJGYWQTHLRNKFWQINNAKWNAOFZIQRNSOXYAYMKNCMIUODQJBDROZLTCWNAOVXDJLBKKMUJVSOTQSOFWKAPLVJUCJYUALMBGICDPPMZZNLTJVEOMZBZPYTFRISWSXHFZYSUCKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.283441684085);
    msg.setSource(38992U);
    msg.setSourceEntity(252U);
    msg.setDestination(27720U);
    msg.setDestinationEntity(202U);
    msg.timeout = 28429U;
    msg.lat = 0.0749047725616;
    msg.lon = 0.428426324133;
    msg.z = 0.00664879797618;
    msg.z_units = 108U;
    msg.speed = 0.13011219776;
    msg.speed_units = 176U;
    msg.syringe0 = 165U;
    msg.syringe1 = 96U;
    msg.syringe2 = 23U;
    msg.custom.assign("RYVFSZGDVIIKWJPUCQAIHJZFKCRAEFRUIBADMKPEBQKQBNKZBDFSOQIWONCXCVJJEGNMEJTNVZKMRBPWPPAHLNWTQZUYSKQWWYEDPDHVAFTVYLTDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.843587631844);
    msg.setSource(60498U);
    msg.setSourceEntity(90U);
    msg.setDestination(35273U);
    msg.setDestinationEntity(101U);
    msg.timeout = 10180U;
    msg.lat = 0.880347231516;
    msg.lon = 0.313210565703;
    msg.z = 0.18823707336;
    msg.z_units = 235U;
    msg.speed = 0.489346570561;
    msg.speed_units = 29U;
    msg.syringe0 = 177U;
    msg.syringe1 = 76U;
    msg.syringe2 = 150U;
    msg.custom.assign("NNPWGOYSWGHFAESJIGXOZCPHRCREXDOFQXQSLPYVDZVSCEZNZZEKIEOAMZRRXKXBCUUEQXXJVNQDJQFNFAICWHYLPTAHNCLTWRVDICAUXDBBELVGWMYATOCLGHKBOJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.740668381235);
    msg.setSource(21365U);
    msg.setSourceEntity(133U);
    msg.setDestination(17283U);
    msg.setDestinationEntity(33U);
    msg.timeout = 51355U;
    msg.lat = 0.218530640443;
    msg.lon = 0.963792665067;
    msg.z = 0.373050069989;
    msg.z_units = 196U;
    msg.speed = 0.131801080472;
    msg.speed_units = 173U;
    msg.syringe0 = 28U;
    msg.syringe1 = 183U;
    msg.syringe2 = 118U;
    msg.custom.assign("XYLFTVGNMITBVGNASBHZDKWXCZKGSYCKPEEHWASLFEQNLNFBSWGUPZLRTVUYALDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.732847181837);
    msg.setSource(58567U);
    msg.setSourceEntity(111U);
    msg.setDestination(15444U);
    msg.setDestinationEntity(91U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.227935393171);
    msg.setSource(6064U);
    msg.setSourceEntity(50U);
    msg.setDestination(60242U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.117628483466);
    msg.setSource(43309U);
    msg.setSourceEntity(158U);
    msg.setDestination(52779U);
    msg.setDestinationEntity(167U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.581844288913);
    msg.setSource(60368U);
    msg.setSourceEntity(159U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.453781205158;
    msg.lon = 0.0697926037597;
    msg.z = 0.200442507229;
    msg.z_units = 173U;
    msg.speed = 0.618804259878;
    msg.speed_units = 8U;
    msg.takeoff_pitch = 0.351682747851;
    msg.custom.assign("DSTXXEUGILXVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.190601672482);
    msg.setSource(30236U);
    msg.setSourceEntity(129U);
    msg.setDestination(31653U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.608349641236;
    msg.lon = 0.685144510525;
    msg.z = 0.0980104284705;
    msg.z_units = 251U;
    msg.speed = 0.274745053154;
    msg.speed_units = 79U;
    msg.takeoff_pitch = 0.360700896307;
    msg.custom.assign("HMRIUZVNEDMKGELNNRDNVXLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.731047765933);
    msg.setSource(36748U);
    msg.setSourceEntity(211U);
    msg.setDestination(23845U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.623006268633;
    msg.lon = 0.132222841534;
    msg.z = 0.70065553414;
    msg.z_units = 227U;
    msg.speed = 0.840010605217;
    msg.speed_units = 109U;
    msg.takeoff_pitch = 0.600410549964;
    msg.custom.assign("QRBAKFQRIENNATYPCDKSXGEWZEHMDOZSOUTKWQZFOZADAOCPZSAPSOUPHFQWIHSWPDELHMWFZYPVPYZARXYVKPLWCCLQVLATQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.291339703862);
    msg.setSource(42693U);
    msg.setSourceEntity(13U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.896396078225;
    msg.lon = 0.791626340882;
    msg.z = 0.20277572561;
    msg.z_units = 173U;
    msg.speed = 0.0183301821218;
    msg.speed_units = 134U;
    msg.abort_z = 0.923030950883;
    msg.bearing = 0.826646092511;
    msg.glide_slope = 246U;
    msg.glide_slope_alt = 0.924456447912;
    msg.custom.assign("ISVCDLXRQWXQOAJVZEOKROKJZEEODZVBWOUKXXNELFGVBFUISHDRTMBKJBJBRTIQAUFKSVNAYPMTCFBPFYWLVIJWRMQVTXDPVLRIRPQCILDPUWABNJJXGPPSNUGDISMCHKDOTCYYKCBHSWZAAOWPRGQEZUZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.703379264443);
    msg.setSource(26788U);
    msg.setSourceEntity(227U);
    msg.setDestination(17300U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.858154759834;
    msg.lon = 0.322372682785;
    msg.z = 0.469101696705;
    msg.z_units = 148U;
    msg.speed = 0.668970339088;
    msg.speed_units = 106U;
    msg.abort_z = 0.547955907083;
    msg.bearing = 0.53378780725;
    msg.glide_slope = 19U;
    msg.glide_slope_alt = 0.401642568511;
    msg.custom.assign("BEWONCCMPOWCPVRYFJPDAZECASMQTBAAXKWJYGZHNYWPWRWUPQGKAISVDVELHBHLFORSZIEXEYDLGZQOBFFINLHVFLWFGTDXACQZZNTSYDBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.242239344403);
    msg.setSource(44179U);
    msg.setSourceEntity(7U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.803538830625;
    msg.lon = 0.861851066897;
    msg.z = 0.851258935029;
    msg.z_units = 81U;
    msg.speed = 0.228963138071;
    msg.speed_units = 99U;
    msg.abort_z = 0.537939244269;
    msg.bearing = 0.0612409942985;
    msg.glide_slope = 133U;
    msg.glide_slope_alt = 0.214701095051;
    msg.custom.assign("FLOVUQKDHOYYWBDDOPZBXISINAVCRBLRYZQZULJQZOMJXGHEAIRCXFLWKXMKSEWTDLARTRERAQFRBIXJEMSFBJPYNCGUAIOFGWOBWYSVDPJGSFMGHRHOGAXKAEGIPWCCKPWYHPUHFTDIJTYWQAKXBDVZNJKRMPREVNVCTSVFMOVCUEWEEUSG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.762564786906);
    msg.setSource(34188U);
    msg.setSourceEntity(72U);
    msg.setDestination(36759U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.277879034624;
    msg.lon = 0.736062212657;
    msg.speed = 0.944590710163;
    msg.speed_units = 14U;
    msg.limits = 97U;
    msg.max_depth = 0.682593926601;
    msg.min_alt = 0.6289370742;
    msg.time_limit = 0.333152676351;
    msg.controller.assign("FNDCIWOSYAHIIBZIRQEYHXLMUTVKRSXIDQVSPOOGUXMW");
    msg.custom.assign("FWONHHFXXJOZIDWRCPKUWBNMKFMNEZRBISLRPLASKDTGAFNFYUNCVCDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.883481944003);
    msg.setSource(2264U);
    msg.setSourceEntity(73U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.317016272374;
    msg.lon = 0.48799042769;
    msg.speed = 0.447046691817;
    msg.speed_units = 179U;
    msg.limits = 58U;
    msg.max_depth = 0.66296505025;
    msg.min_alt = 0.921037787049;
    msg.time_limit = 0.790262721913;
    msg.controller.assign("YRWRSNFVUHCZPSAXZFBDBZQZREELHLZDYNJUAECBJLVUKEXCLTNLSSSMNHGROUURKTAXWBVRTGBEERHCXAEMLVBAJAKAZAKFIWMIVXFXFSSVAUXRYHFJVUZKMVGODXOTBULDYKOBOFEMOIQPOJXNXTVZMGSHBSTC");
    msg.custom.assign("ACIFUXZEKHIPWIKTAFNXXGUBKTNCKOBXYQUOMESFLKEGSOALRZVVDHHJYJHLBSQZQKWPMQEDPMSZYIBVMSEITIJBKRVIJMRKYCAMDDCPQJQMVYSLWJPFXFVRWWOBHMXOYWLVWFROGJHNXTLPCFSHAKXAGNUSENDFOYNTPUUJUPUBZPZYWBIREQTLSMZDHUCCOZFCTJJNOLIGVYKZTQSGLRALIONERWBVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.0749350553536);
    msg.setSource(17470U);
    msg.setSourceEntity(141U);
    msg.setDestination(2936U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.842500364527;
    msg.lon = 0.667292831274;
    msg.speed = 0.123395035707;
    msg.speed_units = 204U;
    msg.limits = 43U;
    msg.max_depth = 0.378606228851;
    msg.min_alt = 0.0052376823856;
    msg.time_limit = 0.241617685948;
    msg.controller.assign("OANQRIKFFOWCRBYCYQYJGGIGJKLYLXDNAHECJRNMSZKGFUPZMKHZPEPRPFVUVEUXGXNULJWDDORYOPTQXBK");
    msg.custom.assign("MTWNHAUHJXVPJORZGOISGMDHYFBKZOWCQKVWLRHYQMTREAAZUQKRRUHEKJUCAIAXBOIOECCKFESNNANWOUQJEFPQGWDFVYIEXQQFNOLEBSXMOZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.442540267076);
    msg.setSource(4444U);
    msg.setSourceEntity(133U);
    msg.setDestination(39841U);
    msg.setDestinationEntity(69U);
    msg.target.assign("ROAVQPWBSKYBFLREFXCEFUZFTNYJFLNRDUKHZNTVZPQJHDWBAGCQPKJIPLHCMGGMCNJGINCNRTOUMHQDAFNBHBTUPLEROGQWKOLTPCAKRUEIKRMWKXTMLEMS");
    msg.max_speed = 0.0598554526768;
    msg.speed_units = 63U;
    msg.lat = 0.846532659665;
    msg.lon = 0.902672900648;
    msg.z = 0.447119412553;
    msg.z_units = 207U;
    msg.custom.assign("LBXMZZJCHXOJNACMUWTHQLUSUTRQWOHFHAANVYOROMTPOCONGZAVGRCRNUAZISTLSXDQDSBEHHKZECOBXJPVRAULZUMDWMXFUVHEHWQZSKSGEGPJCJRLDEQWLCEBUVPHDHQQKBFNISRCVTDUQNYUFFTFDAEBPAGNA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.408854608424);
    msg.setSource(64773U);
    msg.setSourceEntity(229U);
    msg.setDestination(13032U);
    msg.setDestinationEntity(69U);
    msg.target.assign("QORDQRMCTIVZHGWHIPJUCXBMFUCLXSCEKBUICPYNRBXENVOVZBJKZZSAFKJNOVKNJIBFQIHHJDLOCGIWXAUEWLQNAVGIREPJJHYUOKVBSMDEPPMAKYUXICBFUVRQDLVADHYLESZGQUUWVCYFTGTYMBKSSXGRRGOWWGNGXFEBSDSRYNYJMFIAHOZSCDFMPZTPAQPBHCJFDXNDTRZ");
    msg.max_speed = 0.635440763084;
    msg.speed_units = 74U;
    msg.lat = 0.311063575149;
    msg.lon = 0.579641951642;
    msg.z = 0.854692484137;
    msg.z_units = 15U;
    msg.custom.assign("GJEVMCXEPTHTBPPWEGQPUKFQGBGEAVCMHGDVNVCSTTBBIHNVYWJGLAIMSJSUSDQFXIQAKTJDLSWUREKGGXLTXDEEQNZRFKYZTWDYBXOBXOSZDFQRNYPKCJEDKNLDDIHYACKOWRMLZMZHSNOALFHZYIYJSOZXHCKOPYJQFJXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.339484477885);
    msg.setSource(40741U);
    msg.setSourceEntity(239U);
    msg.setDestination(23321U);
    msg.setDestinationEntity(109U);
    msg.target.assign("LOYYGTACCWZBINNDHOWXGMNICIMSRHNGTWSYQYEAROOIESQPLHYPEMHQOQWTOCBLQOPPCVXJRZGKJRVNLINKZJWKGXSYGVAMBTXPZHFXQTLDUPDDWLMKRUKAKAAKUSUIGLIWTSJQXJSZUWZEEFAECSUFYDHUJDJBDJMESYVVYNEMRVFRBPGKGXJWEHVRIFTTDFUZIMGXZDIRPBFVSBTOZCQBLBPFEFODMCALBWFH");
    msg.max_speed = 0.556166627727;
    msg.speed_units = 212U;
    msg.lat = 0.221903160472;
    msg.lon = 0.696476593099;
    msg.z = 0.472290382246;
    msg.z_units = 235U;
    msg.custom.assign("CUDDDMKVYYJZCEYRPERYORPDTOOTPCRVJWJFJBFHFOXNNHZLZAKYFTMIVEULWSWSBNAKJGGNKFOULOWNLPUBLIBAQKQSETXMDQQHJIUDDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.606708567845);
    msg.setSource(20993U);
    msg.setSourceEntity(108U);
    msg.setDestination(59411U);
    msg.setDestinationEntity(182U);
    msg.timeout = 63168U;
    msg.lat = 0.518589921538;
    msg.lon = 0.335954331511;
    msg.speed = 0.0197338614143;
    msg.speed_units = 226U;
    msg.custom.assign("GYCVONDTNISNOEXKOTGUEEWASHZKAQBMRKWZPJJVCNDCKTFOULXFRDATDVZAFHRZYKJPQHNJXIVFTKFWIPGYBCJNHQZASDYBAHGQEJRCTPIMAOZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.643520871814);
    msg.setSource(49087U);
    msg.setSourceEntity(15U);
    msg.setDestination(42747U);
    msg.setDestinationEntity(47U);
    msg.timeout = 61463U;
    msg.lat = 0.670468729878;
    msg.lon = 0.385049567954;
    msg.speed = 0.416775660386;
    msg.speed_units = 166U;
    msg.custom.assign("BYKKOFGXESNDCNGIHQTHTGPMHDPBRQBOZNPCXOPGJDZYEMWKAFXNIPUAFOKYBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.457403892962);
    msg.setSource(19841U);
    msg.setSourceEntity(189U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(122U);
    msg.timeout = 3646U;
    msg.lat = 0.828140057932;
    msg.lon = 0.220108597237;
    msg.speed = 0.707052865154;
    msg.speed_units = 77U;
    msg.custom.assign("WXOJTFDOKBEITLBIIXESUZVPFUHHUSTDTDTXMHHJVYLSQKXECNRJVVODACQGHNPRMAUJGBOQABRDBJVFCRYEAAMSMNNZPOVUWJCKCPGMFWORXTYRCSVLNWMPFJRIPWJHAQUCIBSTKXIQQMEMBHQGKYJNEOHZZXFSFLQRKWIEGTWLMGGPYLGWFQWKAUACDUYCSQLPGYIEGYOXYRDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.527647569384);
    msg.setSource(9675U);
    msg.setSourceEntity(253U);
    msg.setDestination(41447U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.830057861565;
    msg.lon = 0.469193117596;
    msg.z = 0.963334971561;
    msg.z_units = 192U;
    msg.radius = 0.435018897513;
    msg.duration = 8856U;
    msg.speed = 0.890843437422;
    msg.speed_units = 27U;
    msg.popup_period = 61179U;
    msg.popup_duration = 15000U;
    msg.flags = 166U;
    msg.custom.assign("MSSTINFHWNCHCVWZYYFFRAGQHUABOFSMWYKJCEGZNNQMWUSQNSAXWAYUJAXLPWCPBKRRGBIMNYNDDKPLQTSMDFHAXAAKRMVQLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.58167739807);
    msg.setSource(6067U);
    msg.setSourceEntity(98U);
    msg.setDestination(9091U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.617256330718;
    msg.lon = 0.30076393212;
    msg.z = 0.223112936567;
    msg.z_units = 238U;
    msg.radius = 0.751428974419;
    msg.duration = 64440U;
    msg.speed = 0.65869640076;
    msg.speed_units = 152U;
    msg.popup_period = 57135U;
    msg.popup_duration = 11437U;
    msg.flags = 94U;
    msg.custom.assign("ANKGUXRYYFUAZLSFXQXYWIRCNQTLVCSVECMPXJDMAXJXUJQSRYSOLBPZVFJGDYACKKUBRHHLXTHFKFCORWIDEWJJTTKDHFRUNXOBAUPSSBVHEBOYDWJLEHMRMWNGCAFBTDSQCXQPZZIRZBLDGGHBELHIYLHUCUODFMIEVDAMWVWKOZQVBNQVEQABOIRKHTOMPCDFMLFCISWKSYTAPIVQQYLZGGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.511863704748);
    msg.setSource(30259U);
    msg.setSourceEntity(174U);
    msg.setDestination(14140U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.961132229328;
    msg.lon = 0.987386148972;
    msg.z = 0.954743332355;
    msg.z_units = 162U;
    msg.radius = 0.699166997989;
    msg.duration = 57597U;
    msg.speed = 0.153910150501;
    msg.speed_units = 14U;
    msg.popup_period = 16899U;
    msg.popup_duration = 7503U;
    msg.flags = 180U;
    msg.custom.assign("NAUAAVPKSUVJHFOUJVPLTBVLZINIIJVPWZTWEQUOAPEFWKWEDUXKWKLQRTCYHYKIUXCMHLDELBCFOUFCTCRMBJIWQDEQXFLKTNYIEZBQMOWGMUGGMLCHPBSQBOOXNDQVPPFCDGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.897078216948);
    msg.setSource(13307U);
    msg.setSourceEntity(224U);
    msg.setDestination(2969U);
    msg.setDestinationEntity(153U);
    msg.timeout = 27195U;
    msg.lat = 0.36270654804;
    msg.lon = 0.143322534091;
    msg.z = 0.0840457500435;
    msg.z_units = 167U;
    msg.speed = 0.155558747306;
    msg.speed_units = 88U;
    msg.bearing = 0.341525135357;
    msg.width = 0.264616403092;
    msg.direction = 157U;
    msg.custom.assign("WDJDBIPFJCIVAQVALIFYFJYQACQURSKPSHUWNRNNHGAECXJMEMWQDVBMTZUMEIJOKECCZTZYGUFSUHZOTKCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.83266393661);
    msg.setSource(38902U);
    msg.setSourceEntity(228U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(59U);
    msg.timeout = 37717U;
    msg.lat = 0.239991663351;
    msg.lon = 0.523357188323;
    msg.z = 0.819856360341;
    msg.z_units = 209U;
    msg.speed = 0.796394459343;
    msg.speed_units = 0U;
    msg.bearing = 0.382461609052;
    msg.width = 0.342065139839;
    msg.direction = 79U;
    msg.custom.assign("RAUIQUBMITRXCBXIALGFPIZLPQZJXEWBMJWSFSZEJDDCGOXYTPHGPORVUZISVDASURKLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.732759016708);
    msg.setSource(59085U);
    msg.setSourceEntity(90U);
    msg.setDestination(46889U);
    msg.setDestinationEntity(20U);
    msg.timeout = 46376U;
    msg.lat = 0.178646805803;
    msg.lon = 0.549748200017;
    msg.z = 0.48349607616;
    msg.z_units = 69U;
    msg.speed = 0.714797588608;
    msg.speed_units = 17U;
    msg.bearing = 0.638772885876;
    msg.width = 0.53756249704;
    msg.direction = 75U;
    msg.custom.assign("HXZQEQNXJIIEGJGRVNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.849981056765);
    msg.setSource(5166U);
    msg.setSourceEntity(199U);
    msg.setDestination(22643U);
    msg.setDestinationEntity(214U);
    msg.op_mode = 16U;
    msg.error_count = 223U;
    msg.error_ents.assign("LJWVRYMKGOZTECARJTQSUMIJXYQZPEZGMYEBDRGBRSQEQQXCVCVSCVZKQNBBGOLVNFPDOARVPEUJNTZDXWRNFFPOWXCTACUBWMSAKSNAGHE");
    msg.maneuver_type = 31485U;
    msg.maneuver_stime = 0.840311013306;
    msg.maneuver_eta = 54880U;
    msg.control_loops = 1095445590U;
    msg.flags = 167U;
    msg.last_error.assign("FNUVTXWWTFCXHVFRWYEGYSWQIBUPYJREFQIIHDUHSFZXSJBZMAFGOCIRTSKNKXJMIGPVDLYMPNIDXUWJWAUKZRLOVYYYBGRFFDJSAAQPRLQZBMCUGIZKIAOULESMAKRATQERKOVGZQBCPCNFLNCQEWQMZNXDBWCESKIMUHJTKSADSQHVEC");
    msg.last_error_time = 0.688694503637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0151544605036);
    msg.setSource(42758U);
    msg.setSourceEntity(132U);
    msg.setDestination(533U);
    msg.setDestinationEntity(126U);
    msg.op_mode = 143U;
    msg.error_count = 115U;
    msg.error_ents.assign("MJYDINYZKUMFCVBUDIRPAWEFJVTWJAAU");
    msg.maneuver_type = 35889U;
    msg.maneuver_stime = 0.596811563935;
    msg.maneuver_eta = 8898U;
    msg.control_loops = 4099077076U;
    msg.flags = 236U;
    msg.last_error.assign("LQWANPXQVZGYBFZMXYMDNGZAAGPCKUKWWTJOOIKVGFLFWXOWBIOFMVLPREWZHSHOZCCXYNSBTJYCBLBUCDNXXTJMWQTVSHZATBLXITRHRELPLNFGDYVRGXNGRGZYHNKKKBPTJGQEODFMIYLAHVOL");
    msg.last_error_time = 0.983813415905;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.921752667981);
    msg.setSource(30477U);
    msg.setSourceEntity(165U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(2U);
    msg.op_mode = 149U;
    msg.error_count = 43U;
    msg.error_ents.assign("EZUXZAWWOUCHGFFMFOIDINBLENHGKALOIKQPJRQBWGBQCQCGMVODSGSQLADKYBWRUROGALZSZEVKAPSKOJQRXMPIZUMDLWUIZANHXHTTCXWYB");
    msg.maneuver_type = 32097U;
    msg.maneuver_stime = 0.933624997543;
    msg.maneuver_eta = 61574U;
    msg.control_loops = 2498009627U;
    msg.flags = 79U;
    msg.last_error.assign("TJCSNQKRMWUZVAJOWXKRRAGCYLSKUCOWILWHQIXFZLNYESZGPDQJVTBRWDSPNCEICGDQRTLREIVHNES");
    msg.last_error_time = 0.83884605972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.507699040557);
    msg.setSource(42666U);
    msg.setSourceEntity(72U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(73U);
    msg.type = 21U;
    msg.request_id = 4741U;
    msg.command = 23U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("YFZKAPNWDJGGCZRPWEKEXJKLBXVWDNUTHDOOHXHQVNZWUXXKMQAMCKMHSSJVCKGJODJQPVGPALRPBTPRARLQRIUNTSANHBDQYYTVZYFLAFEEHZANBLISLDYZETDVIOSSKTOOEBFGWZQQJTUMZDYQFX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47665U;
    msg.info.assign("BBQSLPMVLDFVWHIOJJUFVGCYWTLOIPMQUTMKNZIHQZPUPMDHKYGZGNHTHYTFCMQJVHTQDRLEMRFMJABVSIWKKXOIOUHEIXFNDVKBTUAABHVNFUEMXDANSTXFCXPSALODJDSSPYRRPKBXONZBCQVSASMGAEYZLOXEXGJGDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.131240504019);
    msg.setSource(38003U);
    msg.setSourceEntity(236U);
    msg.setDestination(39996U);
    msg.setDestinationEntity(108U);
    msg.type = 27U;
    msg.request_id = 1773U;
    msg.command = 236U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 39294U;
    tmp_msg_0.control_ent = 231U;
    tmp_msg_0.timeout = 0.346741713843;
    tmp_msg_0.loiter_radius = 0.348534060157;
    tmp_msg_0.altitude_interval = 0.728399297743;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21180U;
    msg.info.assign("HRAATKUJQIFXOWXXLIEPDVZBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.0558402683199);
    msg.setSource(50632U);
    msg.setSourceEntity(222U);
    msg.setDestination(16116U);
    msg.setDestinationEntity(203U);
    msg.type = 137U;
    msg.request_id = 450U;
    msg.command = 232U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.959367656801;
    tmp_msg_0.lon = 0.768319510821;
    tmp_msg_0.z = 0.167337723896;
    tmp_msg_0.z_units = 52U;
    tmp_msg_0.speed = 0.693454124033;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.start_time = 0.542069659439;
    tmp_msg_0.custom.assign("OYWUQZPPVHINYWVSGKXHHIEOLYGJDLUZBRKTQAQYJAEQZFYXUDCGHECOCAMASKAGBPRJDDKLXTVXZCWKJUVXISDMZRQBUEOHASFMNTZCWLRCPHMWPUKGPSVOFIJNCWFBMTWSKPGBTVLAXLFTXJXXTUMIONAZDUMSLOQGNRHWSJOLBHUIRNRYBFRCFKYHNBKZCDVBIEEGTOEVGYSNDZQPOEMGMVNVJYDRIIMIQEYPWQSJBCDFTTRPH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39726U;
    msg.info.assign("NTOPFWENQZOWJYEYIORMTSHYNAEEPLSKDDPWBCDTHFIFFQTYRVZJBKKNCDGKJCKWSIZXNSSDUAPHUDYKKHAJDNSRRBRBTXLZOMCGHQZQXWTCJZGUBGGBOIUAWEXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.681492987962);
    msg.setSource(45862U);
    msg.setSourceEntity(33U);
    msg.setDestination(13307U);
    msg.setDestinationEntity(4U);
    msg.command = 167U;
    msg.entities.assign("AALYYAUZTQPNYHZJKHMDZQUYTFWIJNGSPEBXRFZUFFIHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.255836133423);
    msg.setSource(14741U);
    msg.setSourceEntity(51U);
    msg.setDestination(41031U);
    msg.setDestinationEntity(83U);
    msg.command = 28U;
    msg.entities.assign("SWYZVBZKFETCXODERBQGYSJSEXTZCGJVOBLHHOWYZSYYCTABVZCYUGJNMJRJARGXFORQGXRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.479550279787);
    msg.setSource(10700U);
    msg.setSourceEntity(39U);
    msg.setDestination(11389U);
    msg.setDestinationEntity(179U);
    msg.command = 183U;
    msg.entities.assign("POPBILADKDYRISPBZCJTASM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.472116228121);
    msg.setSource(31188U);
    msg.setSourceEntity(210U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(34U);
    msg.mcount = 84U;
    msg.mnames.assign("XKDALQQPGWBTIMUSFHSQUHSXCCVRHTKIQPCAAUDYINHKYZNTRDHXEGKNFFHNFNYDJQALECMGVZPHDODDHEXVQPBJZOZUTEUDWAWQWLEGQIIVKIJCJGDOBXBZRJPWXKSTKRFHCWOAQFTPYMTNXFUZTRJRSBKYT");
    msg.ecount = 51U;
    msg.enames.assign("LIRWDLVPYIUEUDWXIHUGTDHHAUXHBBAKPGZOAGDPUMNZAHORZGTRJXPJFRYCOGZMQEIFEUEHICYSDMWOXLKZOQKCLYKULNZJETVDKAKSIPHYCQJKFXVKSRAXNQGNUXCSCRTPIFNFOMCMWGKOLLHBPJBETKPFYWYPBJQBIVFWZCZGYFRMJWENLSVMJUJXWGBELNVIOMRXYATSASRLUVOCIQFMDNYDZHTFJ");
    msg.ccount = 190U;
    msg.cnames.assign("VTRRDUODMQJDKHIPAZGMQNPDIPSJTAYNQGWFPLNIKLVVKIOCBCTOGQCBRXFKPDBRYXGKLAHMFGTFUJJJUZDKXSAJQVPAXBICMTDERQVUZKSU");
    msg.last_error.assign("ZSBYZFUGLPPLECPQOFPMNNMIKALASUTAVFNYNYWCCZWHYTEQNLBAMCTFDCPIKEPGMKJTXBDHUHAGRRLUUSQKWLDMFJSQQKAYMVPRKORDWEIVVRNDFSJETQXKJGMFSSHTMIQYCBOYXHFCBPWMKEGTXZIXENGUJXLKDANOPKLDAULLMIGIUBRYVQXOB");
    msg.last_error_time = 0.535828629118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.825891664648);
    msg.setSource(6791U);
    msg.setSourceEntity(183U);
    msg.setDestination(20070U);
    msg.setDestinationEntity(244U);
    msg.mcount = 36U;
    msg.mnames.assign("IYCHAWMLFTSZWGMILKTJPCTUJRMODRJHQCUZHYQIN");
    msg.ecount = 87U;
    msg.enames.assign("GJYQDPWPYPTEBQQJRFFHJRDIMHFZZEAWNKWQVIUWEMKNT");
    msg.ccount = 238U;
    msg.cnames.assign("OXQSKZWDYQZCRIJTFZOVOECNHUCZUIPUGRIYWLDNXCMTLMONVJEKKHSHLZEABUKWUBYMBNYGMVITVDFGHJJLWEJUKXXPPMGSWCBDFTBWQIHCURYBAGIRWOVBODKL");
    msg.last_error.assign("MKPLHYMBKFJLMQHXMOLEUSHNZVOJTWXMPPIDSKBXTNOXXIOFQDTHKZVGDSECBRPWTWALMWNGNPJEEPTKWGRFMSSJXGLBNFUUDQJFCREAGKUGJYMOSQNCQAJFQVZULYHHLPAILKAPZDAPUHVRJWLHVRHFYZIUXMBENWIQCGDNSBOFR");
    msg.last_error_time = 0.359390904187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.718478800598);
    msg.setSource(40611U);
    msg.setSourceEntity(144U);
    msg.setDestination(19768U);
    msg.setDestinationEntity(75U);
    msg.mcount = 204U;
    msg.mnames.assign("FWGUJAKVTTQMNUBPKCIBJUKGIPCVOXTCJZWEICOIZMNYSWROGCTYPIYHMLVDXBDOBJWFQBLHSJMVSIPFSVENDMCDUHBPETUTBWDIVFYOZNSRRHMMZXJLHTUFGPJWKUXCDAJWYOACRXPPDSWNFUYZHQBSNHEQRLRDKGWNRRAQMZWTVJOYMFASXVPGLZLVBHEEI");
    msg.ecount = 142U;
    msg.enames.assign("YXUQACQUMEXJJZTZGKDGLCAVHXHCIAQZMSENDDRNBNWKORZEBMLEOYKWIPFVMZNQGPJBCIRYFHZNTVBUURPYILDOHSBUZVALWLQHDKXRHQGOSMQIJEQCKRPVRRDXUSXINDGXUESNFLPYYAPCUAGGXFCYJRBZVNRZEWXLOBQEFMGDNMTUOSATSTIVYJKLIHUTKEWXSKYVCHQJPMWMESMDANFCOHCKYOOP");
    msg.ccount = 50U;
    msg.cnames.assign("XMDUFAFSWAGCNXGQWOQKTNUAWPFVHTLOXFLIIRDELMKJDUECWQYNJYLJBCPAGNBJIZHFUBHRIQJEHCZZNXRVDWLCYMHLXTEBOSFKLGXLZEZTJXBYUZFNNYYCVQTWNNITWTCMOKOSQTKPQRFVBUSJRZPEIITCGOAKVKYQBMIESYVRMBSUXWGPEKHIJVASPEPRMHDPFCTGMHOASLDPZIYYAWFHUKHRSPREOMVVMJJODG");
    msg.last_error.assign("XJSNDCGZZZIHRQQGHVAUSWPDHKYLJYBUHWEGXBFMWANSMLEJXAONCPUYBLCVXAEHUXTLKVDSHLWFGBYKDHKTYDUVVXTXGQQZBAUQEUIWOFGSEINTTHEKUGPSEQWBVPCNKRMBIVTSDDRJVCZAMJQRUFCNCPAHJLUQQWXVXCEIKRTEYOIROMLYJOPGGMCPRVYFPMLROMHJMOWBNADJZZBSOORI");
    msg.last_error_time = 0.790930307815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.131975979048);
    msg.setSource(9433U);
    msg.setSourceEntity(205U);
    msg.setDestination(40259U);
    msg.setDestinationEntity(239U);
    msg.mask = 242U;
    msg.max_depth = 0.0707919628338;
    msg.min_altitude = 0.106496271641;
    msg.max_altitude = 0.708582857512;
    msg.min_speed = 0.30952664123;
    msg.max_speed = 0.786267736757;
    msg.max_vrate = 0.906723996737;
    msg.lat = 0.760841600906;
    msg.lon = 0.167924354301;
    msg.orientation = 0.657235263082;
    msg.width = 0.426673657622;
    msg.length = 0.0122735790627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.968279937275);
    msg.setSource(33650U);
    msg.setSourceEntity(34U);
    msg.setDestination(31536U);
    msg.setDestinationEntity(142U);
    msg.mask = 124U;
    msg.max_depth = 0.476786928907;
    msg.min_altitude = 0.205221344856;
    msg.max_altitude = 0.165220720218;
    msg.min_speed = 0.569752170983;
    msg.max_speed = 0.449783668937;
    msg.max_vrate = 0.149720007094;
    msg.lat = 0.840131657199;
    msg.lon = 0.63061625347;
    msg.orientation = 0.393642778302;
    msg.width = 0.517826901524;
    msg.length = 0.192027377567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.226569199065);
    msg.setSource(48550U);
    msg.setSourceEntity(22U);
    msg.setDestination(25084U);
    msg.setDestinationEntity(219U);
    msg.mask = 185U;
    msg.max_depth = 0.125675822113;
    msg.min_altitude = 0.375323562399;
    msg.max_altitude = 0.643072907276;
    msg.min_speed = 0.864753567824;
    msg.max_speed = 0.155624635287;
    msg.max_vrate = 0.749330121426;
    msg.lat = 0.790421618227;
    msg.lon = 0.766151173128;
    msg.orientation = 0.840838761462;
    msg.width = 0.718792786434;
    msg.length = 0.953641272372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.991503577916);
    msg.setSource(8901U);
    msg.setSourceEntity(31U);
    msg.setDestination(1483U);
    msg.setDestinationEntity(220U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.361820956788);
    msg.setSource(34082U);
    msg.setSourceEntity(42U);
    msg.setDestination(43901U);
    msg.setDestinationEntity(125U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.603879188315);
    msg.setSource(1164U);
    msg.setSourceEntity(223U);
    msg.setDestination(28641U);
    msg.setDestinationEntity(57U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.795779647399);
    msg.setSource(18277U);
    msg.setSourceEntity(185U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(24U);
    msg.duration = 3040U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.228033558522);
    msg.setSource(3556U);
    msg.setSourceEntity(201U);
    msg.setDestination(39334U);
    msg.setDestinationEntity(219U);
    msg.duration = 37549U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.759894939291);
    msg.setSource(27035U);
    msg.setSourceEntity(114U);
    msg.setDestination(20128U);
    msg.setDestinationEntity(61U);
    msg.duration = 9972U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.0633593248777);
    msg.setSource(19394U);
    msg.setSourceEntity(11U);
    msg.setDestination(58785U);
    msg.setDestinationEntity(82U);
    msg.enable = 244U;
    msg.mask = 984207258U;
    msg.scope_ref = 1046078865U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.209794779722);
    msg.setSource(8168U);
    msg.setSourceEntity(203U);
    msg.setDestination(5530U);
    msg.setDestinationEntity(64U);
    msg.enable = 239U;
    msg.mask = 1904184526U;
    msg.scope_ref = 4291001155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.490127311753);
    msg.setSource(48080U);
    msg.setSourceEntity(208U);
    msg.setDestination(466U);
    msg.setDestinationEntity(185U);
    msg.enable = 132U;
    msg.mask = 254433645U;
    msg.scope_ref = 624745184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.245944128526);
    msg.setSource(46195U);
    msg.setSourceEntity(65U);
    msg.setDestination(42761U);
    msg.setDestinationEntity(36U);
    msg.medium = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.22140536825);
    msg.setSource(14067U);
    msg.setSourceEntity(65U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(22U);
    msg.medium = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.663810186867);
    msg.setSource(46393U);
    msg.setSourceEntity(118U);
    msg.setDestination(38756U);
    msg.setDestinationEntity(191U);
    msg.medium = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.552179206218);
    msg.setSource(10691U);
    msg.setSourceEntity(250U);
    msg.setDestination(32113U);
    msg.setDestinationEntity(93U);
    msg.value = 0.251593813302;
    msg.type = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.523801784204);
    msg.setSource(14341U);
    msg.setSourceEntity(149U);
    msg.setDestination(9939U);
    msg.setDestinationEntity(105U);
    msg.value = 0.92178958852;
    msg.type = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.206926516772);
    msg.setSource(33340U);
    msg.setSourceEntity(113U);
    msg.setDestination(49966U);
    msg.setDestinationEntity(139U);
    msg.value = 0.18370460732;
    msg.type = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.448640266898);
    msg.setSource(9106U);
    msg.setSourceEntity(28U);
    msg.setDestination(55572U);
    msg.setDestinationEntity(9U);
    msg.possimerr = 0.196330136777;
    msg.converg = 0.430543572047;
    msg.turbulence = 0.25121591316;
    msg.possimmon = 244U;
    msg.commmon = 70U;
    msg.convergmon = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.392537993519);
    msg.setSource(65094U);
    msg.setSourceEntity(181U);
    msg.setDestination(9808U);
    msg.setDestinationEntity(152U);
    msg.possimerr = 0.2611206634;
    msg.converg = 0.0593403019692;
    msg.turbulence = 0.7604602498;
    msg.possimmon = 172U;
    msg.commmon = 99U;
    msg.convergmon = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.125701197341);
    msg.setSource(12256U);
    msg.setSourceEntity(185U);
    msg.setDestination(65506U);
    msg.setDestinationEntity(173U);
    msg.possimerr = 0.119524892355;
    msg.converg = 0.901557755068;
    msg.turbulence = 0.452290241106;
    msg.possimmon = 3U;
    msg.commmon = 118U;
    msg.convergmon = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.212973961162);
    msg.setSource(55545U);
    msg.setSourceEntity(82U);
    msg.setDestination(27817U);
    msg.setDestinationEntity(137U);
    msg.autonomy = 147U;
    msg.mode.assign("RJEBIOAXRNAAGJKDIQYXBQVEEBSYPGPGRVPGYPKPVHHYLIYHTBGASZZHDWNGUKZTRMCCBTDSOGMKMSWWYOJPJWIKKDUUZWOOTTFIBXFKCNYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.703173842586);
    msg.setSource(15009U);
    msg.setSourceEntity(252U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(244U);
    msg.autonomy = 196U;
    msg.mode.assign("ORVRWGYMPOFNIJMLFNYEYNVZOQLZXLIHWTQABQNCEGXKTTXNLAEBHCRBJBKQLFGQZWHZBFJSJZSKESGWUBVUHMCDENRMIZNVQQQHGRSHGVKADKMCDCZNWMNKAWXLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.822315715566);
    msg.setSource(14884U);
    msg.setSourceEntity(168U);
    msg.setDestination(6998U);
    msg.setDestinationEntity(121U);
    msg.autonomy = 217U;
    msg.mode.assign("QVICJRKGNELPPRWQSGHDFNGEAFCIOUIYTEKGYHFABYWYQXJIPWSZJBBAVNQICPTTZMMBRSGJLBVMFBZPDZZSRQUJRNSLHXOAWVBVSYCLWCRLTUMXLZHWHYNOMMSKUAURDAIDHCQHFUIKRIOMECGJBSWLOALALDPZNQVZMFROYOMFWDFTXGQZPPSUVNLQGJBADXTCOIEEEXXWHKVPUTNHUNKOKCBTTEERUVEKYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.842157420941);
    msg.setSource(24181U);
    msg.setSourceEntity(219U);
    msg.setDestination(23628U);
    msg.setDestinationEntity(50U);
    msg.type = 129U;
    msg.op = 183U;
    msg.possimerr = 0.571848042199;
    msg.converg = 0.940444951907;
    msg.turbulence = 0.0508422882889;
    msg.possimmon = 8U;
    msg.commmon = 182U;
    msg.convergmon = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.864052559952);
    msg.setSource(9269U);
    msg.setSourceEntity(189U);
    msg.setDestination(32476U);
    msg.setDestinationEntity(50U);
    msg.type = 137U;
    msg.op = 237U;
    msg.possimerr = 0.213810805695;
    msg.converg = 0.716118399643;
    msg.turbulence = 0.317722793149;
    msg.possimmon = 223U;
    msg.commmon = 44U;
    msg.convergmon = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.724072638371);
    msg.setSource(58313U);
    msg.setSourceEntity(105U);
    msg.setDestination(47908U);
    msg.setDestinationEntity(163U);
    msg.type = 161U;
    msg.op = 89U;
    msg.possimerr = 0.143619694569;
    msg.converg = 0.391330358945;
    msg.turbulence = 0.13251942007;
    msg.possimmon = 1U;
    msg.commmon = 209U;
    msg.convergmon = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.213085729033);
    msg.setSource(51338U);
    msg.setSourceEntity(187U);
    msg.setDestination(22521U);
    msg.setDestinationEntity(234U);
    msg.op = 102U;
    msg.comm_interface = 234U;
    msg.period = 35750U;
    msg.sys_dst.assign("AKGPSMCKUKMMXXVNYUEQWGWDULZWIHMLPGPJYGHCFEMBIHQEQAKHGCALDPEODBBKGWHZPWSVZQRJVDXLWQZJHWJNVAYDTAEFIJNATZRAGCWOSBFLLOBYSXMCDFVMQFINVDBLSBRPCGBOKQLXEAXUKIRXYETXUXJHUUMUFTYOBANHIIBYYASRDJVTPCRSNWSGIOONFERVIPNCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.276184066729);
    msg.setSource(3009U);
    msg.setSourceEntity(144U);
    msg.setDestination(21953U);
    msg.setDestinationEntity(239U);
    msg.op = 161U;
    msg.comm_interface = 134U;
    msg.period = 8245U;
    msg.sys_dst.assign("JUSBTHEVRVZQHKULXJGYNSBPGIBDQIDLIKCFXKAPCQHFCDFQDBCSKUKLWQAFBWOAIJTDVBTPSAGLWIDMQAOWPUFCVJDWWEMIZGGBGBEGROEPURFYLGROUKPYMVZCUVHLYKNMWIFNNRVQJLXXVXHATARZVMAYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.323471884881);
    msg.setSource(5533U);
    msg.setSourceEntity(2U);
    msg.setDestination(51164U);
    msg.setDestinationEntity(209U);
    msg.op = 181U;
    msg.comm_interface = 224U;
    msg.period = 34940U;
    msg.sys_dst.assign("MJDINQVLHLTYGRBFGSWTZZBZUQRAWPCODCQPITJSXDKHTXBYVBKMHTLYFSEWLBWKIYCBIMRGEFPQDORC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.955591523734);
    msg.setSource(52014U);
    msg.setSourceEntity(24U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(93U);
    msg.stime = 3305924141U;
    msg.latitude = 0.633473993623;
    msg.longitude = 0.462458572215;
    msg.altitude = 16461U;
    msg.depth = 61436U;
    msg.heading = 41951U;
    msg.speed = 30461;
    msg.fuel = 116;
    msg.exec_state = 93;
    msg.plan_checksum = 62921U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.228184531963);
    msg.setSource(7827U);
    msg.setSourceEntity(13U);
    msg.setDestination(18202U);
    msg.setDestinationEntity(7U);
    msg.stime = 2895114160U;
    msg.latitude = 0.699550921075;
    msg.longitude = 0.162665843439;
    msg.altitude = 12757U;
    msg.depth = 26776U;
    msg.heading = 23876U;
    msg.speed = 16208;
    msg.fuel = 61;
    msg.exec_state = 43;
    msg.plan_checksum = 37686U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.836740247988);
    msg.setSource(11915U);
    msg.setSourceEntity(55U);
    msg.setDestination(16422U);
    msg.setDestinationEntity(252U);
    msg.stime = 961431532U;
    msg.latitude = 0.945020901964;
    msg.longitude = 0.531865785455;
    msg.altitude = 65351U;
    msg.depth = 46768U;
    msg.heading = 52256U;
    msg.speed = -7008;
    msg.fuel = -69;
    msg.exec_state = 95;
    msg.plan_checksum = 54232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.411417050949);
    msg.setSource(13552U);
    msg.setSourceEntity(43U);
    msg.setDestination(7051U);
    msg.setDestinationEntity(128U);
    msg.req_id = 17738U;
    msg.comm_mean = 68U;
    msg.destination.assign("RBAEFMLLHXYBNDGROKGUIUEBZLDMGDODMIKCGTKFJDUTOMMHOWQNZJREUROUQFDNLRKQHVJKUTPSGAJNEENZMDMBSF");
    msg.deadline = 0.247914484761;
    msg.range = 0.279040592205;
    msg.data_mode = 13U;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 24483U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RXDZVYJQTCLBJLESCGJNOSCHUIRVHMYIKISKQMMYBGPWLAVXVXBKCKOUCRXGIOKZFSFDNTHKWCTTVENSJPUZKMHELCSGRGZLFTREWSNMYWNMQIUAYHQJFAUPYHJLIXGAKFGDATPCUEOAPFPFQOZOSKTVLHMDQYBOTOHKRVMGWJABIRACDVNLFMXZWEIGASQHVBDNNYQBWNPXSUFZEQPDJDPHEJRMRTLAUYIWQCZPETZFBNUZXJUDBLEVX");
    const char tmp_msg_1[] = {-87, -28, 87, 6, 109, -79, 8, 66, 70, 10, -61, 106, -90, -34, 74, 63, -120};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.555047514485);
    msg.setSource(53613U);
    msg.setSourceEntity(184U);
    msg.setDestination(1965U);
    msg.setDestinationEntity(54U);
    msg.req_id = 63466U;
    msg.comm_mean = 195U;
    msg.destination.assign("MQBFNAIAFQKTNGCDZDOMBTEQRTGIOPCPYRCAZVZJXWIGNETKXAFZGHHYKENLADIOYKYCKJWVGRYOBVRGUYURXSUCJOBUEWTSPDYMTLHXBSFPDKZUGFQISZLWQHUMTFXGHEFYKQDRZJXAHYDMYMLEPGTUMALJBFTICWNKURLVALCUKMAOFCSLXJMDHBNWGWQLPJXVWZZLNNCWE");
    msg.deadline = 0.0310789124437;
    msg.range = 0.488470071639;
    msg.data_mode = 222U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.176647769764;
    tmp_msg_0.beam_height = 0.757915243161;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EWBRNUDZXACDRGFQJOMQMSOVXKJSYTJKXIBWCBKAKFPMZJCPZONYNFGEWJAFGUKCWBXRFECYKTKTVVLEJRNTOAQPIBPLLYZDTGQHVXNPEJDQSROLLECSIYXFAEZUVIQPDXOMORRGBEWRBSTU");
    const char tmp_msg_1[] = {122, 5, -1, -75, -90, 65, -96, -39, 65, -57, -29, -16, -44, -19, 67, 87, 37, 82, 81, 72, -71, -29, 123, 102, 56, 109, 22, 35, 88, 108, -50, 120, -87, -82, 82, -57, -69, 87, -21, 122, 46, 71, 48, -22, 4, 98, 111, 70, -9, -68, -125, 83, -3, -17, 40, -74, -54, 7, -123, -59, -17, 34, 78, -70, -18, -30, -39, -48, -67, -111, -61, 60, -89, 118, 42, 39, 71, -29, -57, 110, 9, -17, -36, 48, -38, -53, -9, 40, -128, 41, 20, -20, -89, -90, -64, -61, 120, 111, -50, -78, 7, 44, 16, 61, -20, -16, 31, 10, 50, 29, -45, -110, -72, -57, -49, -43, 87, 125, -107, -127, 83, 5, -43, 101, 76, 22, -41, -119, 34, -13, 104, -1, 12, 24, -71, -11, 78, -74, 40, 56, 100, 4, -31, -100, -41, 43, 7, 5, 90, -44, -71, 16, -81, 66, 126, 77, 58, 50, 88, 125, 82, 98, -118, -121, -69, -23, -72, -11, -86, 110, 26, -12, 113, -68, -118, -20, -20, -39, 47, -111, -73, -3, -96, -104, 91, -65, 125, 81, 101, 32, -107, 26, 64, 48, 22, -10, -112};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.398253357302);
    msg.setSource(27737U);
    msg.setSourceEntity(6U);
    msg.setDestination(54384U);
    msg.setDestinationEntity(33U);
    msg.req_id = 49550U;
    msg.comm_mean = 130U;
    msg.destination.assign("QRDZPARTRKQZJQBERPYANARLLDAQSIEJYIMQNYTZUHUABQPLMFUMJRKGKXMUHGGBWWZLUFDYZLOCEEIVYELMMPT");
    msg.deadline = 0.871097936158;
    msg.range = 0.754811994255;
    msg.data_mode = 155U;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.0304907606187;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BQDGWUJOWOEJXCZALCULEENEKTVAQWDPLYEHGBDSKTUKVVAIHRPUACTUAJLKJDTBPWKIYVGUOSXEQBYNTVWEZXBILSFGRNXRPOCKF");
    const char tmp_msg_1[] = {-17, 123, -84, 72, -84, -25, -101, 65, 73, 1, 83, -128, 55, -105, 103, 46, -111, 94, -15, -19, 81, -68, -25, -36, 118, -71, 77, -111, 104, -111, 83, -32, -17, 34, -93, 83, -123, -35, -3, -106, 5, -99, 122, -108, 54, -13, -82, 57, -87, 109, -106, -126, -78, 14, 17, -41, 1, 25, 33, 124, 23, 48, 66, 2, 34, 58, -59, 57, -70, 47, -41, -56, 99, 88, 9, -42, -82, -46, -53, 112, 24, -41, -94, 82, 29, 47, -36, 116, 90, -86, -57, -49, 116, 28, -60, 0, -13, 50, -46, 108, -83, 27, 123, -14, 76, 63, -69, -110, -105, 102, 60, -6, -15, -98, 113};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.973397502561);
    msg.setSource(38373U);
    msg.setSourceEntity(238U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(159U);
    msg.req_id = 27197U;
    msg.status = 38U;
    msg.range = 0.961413770575;
    msg.info.assign("RPOZMTYQBOIADLQKWLIIEBRJOWWUGVAYDRBQZOTQTGIREVGHZNBXXCUHMKQKJCSAPPHZJTWEHDOGVJCGNYMVFVANNPVIFECJJSUJFQGRZZXWWHKAIQXKLRLSBMGIWHPQVTHPFWERCRGNLYPEXFFBXMZDQZBTCIOSNYQMLBCKNWVMSJLJDAUNAVSGWPCZXORBVXYCSHUULPMSYUXLOHRAFDMFTNNHLCFKPUSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.458822024852);
    msg.setSource(40838U);
    msg.setSourceEntity(106U);
    msg.setDestination(58244U);
    msg.setDestinationEntity(49U);
    msg.req_id = 41617U;
    msg.status = 176U;
    msg.range = 0.105190782784;
    msg.info.assign("DNITEUWRCJENPCGDLHGIBTPMYDPZIZAYKIZPXNZOFEDXSXPULLQTMQOHNPIJSAGSBAJAXQGWVNJYTILGVATVQBDYPMOMTRKKXNJPZFAVQOBFBRCKYIZRSKCJQWJBSVHUVFEFOCEANQEWFLTOHBFUZODCACHMNEXCTMFGDMQGUYPLWYKQCZBXDAELIUVRNJFQYTKNIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.731769296008);
    msg.setSource(21154U);
    msg.setSourceEntity(31U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(37U);
    msg.req_id = 46430U;
    msg.status = 198U;
    msg.range = 0.122826934696;
    msg.info.assign("PRGSQQWOLXNOXROFXAEDGKGWCFGSIFRGQZWNYMTHFMUYTUQIFDGYMAZUMCOAZEVIGZKJSTLHEPHBKNOBOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.475074853299);
    msg.setSource(62724U);
    msg.setSourceEntity(96U);
    msg.setDestination(28228U);
    msg.setDestinationEntity(208U);
    msg.req_id = 49587U;
    msg.destination.assign("POGERNGIZBIDDWANZQTNKXMNSMYYYMIGVJEJTKNFWHJFSSNOUXPHMJWTCUWEFHALLXZKFHWQQAJJCGF");
    msg.timeout = 0.754902573756;
    msg.sms_text.assign("LOAQWGCFYURGFVETTJKYJEJTWAVFSZDRBHHOWYEOYHBTGXTGIEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.87216660271);
    msg.setSource(15020U);
    msg.setSourceEntity(22U);
    msg.setDestination(25814U);
    msg.setDestinationEntity(131U);
    msg.req_id = 9936U;
    msg.destination.assign("LKZLLAGPUXZOIAEOCENUTBVUGLKCFLJQMCCFQPALWFERDKYIAXNGOLNIVJIWINOHKQDZSZCUNVPAGWEVPXTGOCDYKJF");
    msg.timeout = 0.611178161096;
    msg.sms_text.assign("ZKGUIDIFVWWTUOTOEGWBWGLBLYNLZPKOMHWNJMDFZZRJLATYAPBZXDUVDYYTEHPBDPIQIFMHCHOKYROUJJHBODFHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.838684937918);
    msg.setSource(16934U);
    msg.setSourceEntity(135U);
    msg.setDestination(55901U);
    msg.setDestinationEntity(249U);
    msg.req_id = 1111U;
    msg.destination.assign("RXDVIFFWWJXEDUWOXWJBOQAJCEGPVVRKNHQCLULUAVJKPTPKOOTINJVSFFQVLFMKTMDPRSLYCZICAFBGLNKWSNIPAMOSRMNMGCVWDDKYKAWGQOBXSEETLXGPJUZHXTDEQAKYZNCMDMZVBUAXNBETNHHGMFECTWYYWZAUPRIREFZMFDHGOXMKHUDQAQ");
    msg.timeout = 0.320179619338;
    msg.sms_text.assign("YCUWMJNHXVEOSREXWEMZHVPONVPKPLFQPZWSTYQPUKQZVOZACQWFYRUZACUDXCJTXBCTZJHOTJWXORMRDIRUSYONGTWPJFALTOJATAMKSQLSBDLDCMEBNAXOIIIXURGRYNJVVGENIPGQZWXVZALGDRXHGHVYYFBLNWCWSGIDMYYNFDDRUIWGBLHZSJBEGNHQECQUEVITKLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.0202444526802);
    msg.setSource(28249U);
    msg.setSourceEntity(186U);
    msg.setDestination(30714U);
    msg.setDestinationEntity(163U);
    msg.req_id = 20281U;
    msg.status = 26U;
    msg.info.assign("BKWGVKEYNFNHVNBHISJMDYNBRWTPAOHDWSDUMIERCLTXSCPFEMTXNCRPLOXWBLBFZVCAAFAALYRREYTUNQHNHOZQTEGGNILLTKHKFJDRQJWPPFOWHFRLZEJJDDCPEXWBPJHZLIMQGGUGVUWVSCKGSNLOUYQKNAWUYBGFTQRYBTZYXKVJSUSG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.446672653795);
    msg.setSource(62080U);
    msg.setSourceEntity(27U);
    msg.setDestination(24478U);
    msg.setDestinationEntity(73U);
    msg.req_id = 11419U;
    msg.status = 163U;
    msg.info.assign("FKEOQRDRYZWVSYYDTTOBIFUMFKYDGIVRLUJTEGLCTJVLBSRJEQAWXBCCTUNHHOXONKZBHNLTPCHAFZSZGSNSMXBKPOQIGBDMLMLLRCAVEEKPFJEINYBGRWGOVBFXAIWKRCKFOESQHSUDWNWYZXVMGHIPAMQJCEQSHFAYUJVFDGNPMXPIYQLUHCQJRIDBSIXBZWKDCHHGZTTCZJVDJWPNPNPATYXLXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.984861084234);
    msg.setSource(908U);
    msg.setSourceEntity(105U);
    msg.setDestination(18446U);
    msg.setDestinationEntity(224U);
    msg.req_id = 14360U;
    msg.status = 123U;
    msg.info.assign("CWFJZNSKVATRBWJISNKYPERGDGMSKIRNDCONPKCOSLUWSMOZXYQTLFWJSFDMMOORDQKOCKZPUNHZFBGNVUTHVGTUDVDEQCTJCEOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.565518492968);
    msg.setSource(35921U);
    msg.setSourceEntity(183U);
    msg.setDestination(18350U);
    msg.setDestinationEntity(47U);
    msg.state = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.0916185578994);
    msg.setSource(4930U);
    msg.setSourceEntity(71U);
    msg.setDestination(17707U);
    msg.setDestinationEntity(47U);
    msg.state = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.116317403598);
    msg.setSource(51224U);
    msg.setSourceEntity(176U);
    msg.setDestination(60030U);
    msg.setDestinationEntity(83U);
    msg.state = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.122977635568);
    msg.setSource(61065U);
    msg.setSourceEntity(92U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(68U);
    msg.state = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.534518497228);
    msg.setSource(60825U);
    msg.setSourceEntity(107U);
    msg.setDestination(12737U);
    msg.setDestinationEntity(140U);
    msg.state = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.321662295364);
    msg.setSource(21200U);
    msg.setSourceEntity(130U);
    msg.setDestination(6247U);
    msg.setDestinationEntity(247U);
    msg.state = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.157197974566);
    msg.setSource(18278U);
    msg.setSourceEntity(75U);
    msg.setDestination(5451U);
    msg.setDestinationEntity(96U);
    msg.req_id = 56613U;
    msg.destination.assign("XJPWHWLTFYVAMPDVPXRGTMVNMXLCMCDQJDYLCJVIYXBJNRZBTOSTSNNEUDALQRLBHWWKFFYDQOKXKQMJIYGTBACKAYPDOZRUXICJIGVXHZZRCPHVRFINKABSSWSUXQZQKZHHQUEONUPIYTAJRFBRTBYNSOHIXE");
    msg.timeout = 0.369044104529;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("IJYPXNZLBOTVVSEMDCYQJJGBKNHUWDNWVPHFQBDSUFUWOPXQHSVZQHNRIIXXIHFIQACEE");
    tmp_msg_0.plan_size = 51076U;
    tmp_msg_0.change_time = 0.64249424397;
    tmp_msg_0.change_sid = 30713U;
    tmp_msg_0.change_sname.assign("NZCPXHRPEGEPHUQUCQOYDSHVNPSFCNBWNFUJUVLQACONKQTQPDTHXIOBRISNAVVAXPCFMBMQFLFRDOMUPGTZKGRBMRGUWEWZCNVMXC");
    const char tmp_tmp_msg_0_0[] = {11, -114, 32, 3, 104, 85, 13, -8, 24, 71, -18, 51, -102, 42, -12, -61, -13, 90, -18, -64, 22, -57, -126, -73, 35, -127, 18, 111, -108, 50, 97, 74, 92, 89, -86, 38, -90, -106, -108, -86, 90, -59, -98, -74, 9, 113, -66, -77, -11, -21, -40, -93, 7, 33, 34, -124, 115, 18, -128, 42, -68, -3, 72, 108, -38, 95, 6, 11, -58, 26, -72, 117, -99, -48, 9, 124, -53, 123, -79, -84, 68, 38, 49, 23, -108, 30, -123, -99, -39, -106, -46, -7, 17, 74, -126, -41, 101, -44, 34, -11, -24, 51, 64, -80, 83, 113, -51, -114, -125, -22, 27, -49, -78, -105, -42, -107, -127, 1, 16, 34, -22, -61, 123, 74, -91, 53, -120, 56, -30, 15, -69, -86, 104, -25, -38, 54, 126, -50, 32, 18, 5, -84, -32, 24, -32, 65, 31, -107, -32, -73, 27, -73, -115, -48, 49, 104, -6, -24, -11, -29, -39, 64, -23, -98, -98, -104, -109, 0, -7, 102, -94, 64, 71, -105, -61, -123, -40, 40, -39, -110, -61, -112, 18, -78, -104, 101, -3, 79, 78, 119, 89, -114, 71, 36, 80, 40, 109, 46, 78, 8, -111, -11, -13, -82, -20, 63, -43, -120, -125, 52, 81, 62, -90, 105, 16, 46, 90, 57, -47, 9, -38, -41, -31, 72, -28, -72, -21, -111, -62, 80, 76, 72, 50};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.393125179863);
    msg.setSource(53969U);
    msg.setSourceEntity(182U);
    msg.setDestination(50121U);
    msg.setDestinationEntity(172U);
    msg.req_id = 5622U;
    msg.destination.assign("UAKCFZKEIA");
    msg.timeout = 0.613582294548;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 14463U;
    tmp_msg_0.lat = 0.316152017014;
    tmp_msg_0.lon = 0.942140420698;
    tmp_msg_0.z = 0.928291165485;
    tmp_msg_0.z_units = 214U;
    tmp_msg_0.amplitude = 0.801892329707;
    tmp_msg_0.pitch = 0.704576288046;
    tmp_msg_0.speed = 0.628140071852;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.custom.assign("RSXZQIVIIXORJWBFBBXKXYHWYMDJXIDNXQWMUZTSTSFFPSKLXJCYUUEGQUDGLLRUNWVJIOYCCKZZMBLYHKQNEUEUCAPKPPHIDREPTONFYLVPHZQVVBMTVBM");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.559258907119);
    msg.setSource(1856U);
    msg.setSourceEntity(24U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(208U);
    msg.req_id = 53552U;
    msg.destination.assign("IAAPSVZOYFWGFMTEHUTLXHBHSOOHXQDXCYCILQXRDYIOLMVPZHVHYTKYBKCNCFREEDDGAXFHOXJADTMMVJWQWNFSTWYIVPKQJGWTZBEKUAJKZXXGJBUFWISPKZXCDSMVZYBDWOINRPPBSGIRFLVKJWIBGOUUHLHNRFHSTVVPUQFKSGWBNMQRLAVCYUSABEAAEZJKNTEOQLDGAPWRCYGILQUJRRGUTPJQMCXFBNOE");
    msg.timeout = 0.235815132057;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 162U;
    tmp_msg_0.frag_number = 161U;
    tmp_msg_0.num_frags = 118U;
    const char tmp_tmp_msg_0_0[] = {95, -63, 41, 109, 95, 113, 4, -121, -28, 86, -27, -107, -68, -28, -101, -71, -1, 116, -71, 50, -18, -13, -125, 22, -11, 76, -86, -4, -63, 23, -46, -74, -15, 48, 119, 62, 116, -45, 104, 89, -105, -124, -49, -96, -37, -12, -67, 49, 55, 28, -4, -56, 98, 109, -80, 1, -11, -116, 79, -32, -92, 115, -32, -100, -73, -63, -9, 35, -75, 38, 74, -54, 88, -35, 6, -68, -109, 103, 62, 125, -11, -87, 6, 74, -105, -103, -81, -90, -99, -91, -58, -28, 21, 119, 113, -28, -24, 64, -47, -114, -89, -72, -66, -60, -23, -62, -3, -128, 47, 125, 119, 59, 25};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.399809126006);
    msg.setSource(6531U);
    msg.setSourceEntity(209U);
    msg.setDestination(36801U);
    msg.setDestinationEntity(103U);
    msg.req_id = 30388U;
    msg.status = 138U;
    msg.info.assign("ZHEVKAQXGUSHSZIIJMIKGXDWTLXJUQNJMYXEHXYOXTJOPDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.038390416028);
    msg.setSource(63766U);
    msg.setSourceEntity(231U);
    msg.setDestination(15828U);
    msg.setDestinationEntity(167U);
    msg.req_id = 24682U;
    msg.status = 96U;
    msg.info.assign("CPJUWEZJRXKFQYKMACQWKDCRJTSMCPDIBTLOGJSHTATVFPDQIHTUAZRHHECLMMJULYWDJMWXKBQOYJUBAPGONTSVAFBPVMEVOXVYSQEHYGSBPZMCRBXELVOEFRYKQNUKNOPZRLFCSXQBUIZTVYCFAFHEIAEGGZJWMEPRTJQNWCNQIUGPOHXWSDQKASLIKLXVYNRAHGHTKPMFDRVIBXMKJDAZGDULTHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.59274588692);
    msg.setSource(52659U);
    msg.setSourceEntity(110U);
    msg.setDestination(7536U);
    msg.setDestinationEntity(184U);
    msg.req_id = 62934U;
    msg.status = 91U;
    msg.info.assign("JFURILZYIJHFUGWBXHTEFTKOYQZGCDABVBWCBMFJHUGPOXOMCHPWQYNCXOKIZQCQWJIZNMKVRSFGYWBHHTSAMQPKZYEHRUGCLNEURKOTXRFAZXEIDTXUFCGQRDNFIPLDVYBMSVWRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.138326447322);
    msg.setSource(25114U);
    msg.setSourceEntity(237U);
    msg.setDestination(54829U);
    msg.setDestinationEntity(159U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.757248544782);
    msg.setSource(55030U);
    msg.setSourceEntity(118U);
    msg.setDestination(28752U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.767226853652);
    msg.setSource(36513U);
    msg.setSourceEntity(112U);
    msg.setDestination(61398U);
    msg.setDestinationEntity(56U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.869672915211);
    msg.setSource(2825U);
    msg.setSourceEntity(231U);
    msg.setDestination(29063U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("MLNNJRLOADKEFLOZUKUUQRHTIMGYRPFGGHJCRAWFGAZAFLUZTCNBTIWZHVODDICLSZLOYHVAVHAEPKQSWDEHSZSQUY");
    msg.description.assign("KLJWMVOIAMLBMHYWXOCLDYBWYBXDSODZKWCTEUGODTFQLKPXQJVHVEHFZABFYJMPOTEMCZHLITXESXONURBXJYMYVNGQZBNYTCQTRJUOACSXAPYLSQRITKKBUAXMNFFILZCNDAESEZLWHJAMWMKSEPYGFHDRUJVQGVFUEARJFICNTLPQJCIBFPGSPREHYVUDRQINBHAJKSNFZRASRWNOPGIKHZXKWHWUGDZODSCB");
    msg.vnamespace.assign("UMGIDSKRPEYFSELAVJUXMPNVCOKXCCHGNOIIZMKPGSOFTVTRSCFFQBFNXJQDNHQEQNZLDOP");
    msg.start_man_id.assign("MLHBZHUICZENPWXHVDFEMKJSAUQKXFYWNZJURSQKTVSUIQPYLINMLBMZJOOWKNSJEDICWQNLYWVYKZHMFPTVREPESLCJTYEXHGBACLTVWVOOSBRQCNTWKUNTJHMSZYLGHOKPRUTFPOUKYFKXAHJYGTDRWNJCZGLLAVPIYRAQBIBHAKEBDRB");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("QRAVIEUTASLIQBZGCCUEMHYKWACDEHNSRYJOLUTBWQYVGLSZWVYSJEVNGNRGFKZEDYGBYVWHUQHLDQOSIFLFBAITIHN");
    tmp_msg_0.dest_man.assign("YXFCVJGBRWHTSRTAULRTJFNJOLJXIBRMRFZKHQDBKICMJETKMPRDDUMSROVWPIFGKLULQMQHAWFOFINUPYAQEZDSCQRHXPNTNATNAVIMRCYAWDIZSXAZSWFNNLXAKSYOUGQKKYMJ");
    tmp_msg_0.conditions.assign("MQRCMYOOAUDHCAYQLLEDIKILFPBVBEBIYNVIHODNXSITDHWLRREHZJRENCXAUIIGPWZTGNJFQCJWQYMAPXGSTSDQJCJCGCIGQTPRLBNERSYBLZBCPNXPARUORXHXHSKSKAGVTPVHNZFEABQTNQZOSDFWVMFJWOEKSVWEUMYPFBMZYNVZHEDNEXRJQOOBMZWJWKWTRLHVSFWUUVPBXIMLYDKJKUYKMXJACFOFTMFUXUZLTYK");
    msg.transitions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.0137673160872);
    msg.setSource(46911U);
    msg.setSourceEntity(92U);
    msg.setDestination(32667U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("SICQLJMELOTCWECACPKZRQWXTZLA");
    msg.description.assign("LVXSFFYSVNQMHBGJBWLKJGBCGQVXDWZSXIGFJWCNXBKTHSWARMQLCIIBIBSUJIDBXXCPUJMQHVOOUKQXTXZKYHNUDZDIPCERNNIVPVCEPYMUYCMYEXQDRSWTHTFIZECFGRYHUTAKJQRQIGDECR");
    msg.vnamespace.assign("VATLUDKBNBMQGNQMKXFGXZL");
    msg.start_man_id.assign("MUBLEWEWPRPEIQCHSAQKNSILBJISEHZPIIHJKER");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 186U;
    tmp_msg_0.error_count = 180U;
    tmp_msg_0.error_ents.assign("LXTJATWJDVXZFSKMXCVRFMTPAYCZCOQRCMLKNDFJEBWVEODDIANOVRJORWUQEIEETPHUFKMYSHYGITLEFZLBPTHDNVOHTNBGILMWQFWWOUBQAJSZEIPSGL");
    tmp_msg_0.maneuver_type = 35980U;
    tmp_msg_0.maneuver_stime = 0.0529646554144;
    tmp_msg_0.maneuver_eta = 6769U;
    tmp_msg_0.control_loops = 1672081294U;
    tmp_msg_0.flags = 207U;
    tmp_msg_0.last_error.assign("WUCHIHIEBXMAFHEGQHGWKADXUJTBJRPTILRMRWFDJVATCWVPGMOENIYEQDYSSJGZFMWVYKISWPUYDUZNBAUZMHHBNBLZBUYTKTRNZASVIOXPJFFECNYYFGDVKWXBILKGJAMVUKSZGMQQDGJYJOVOFKCZECCFCCSPIDQEUTXFQKRVQRANOBSQUIXO");
    tmp_msg_0.last_error_time = 0.106856492551;
    msg.start_actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.883816794973);
    msg.setSource(14380U);
    msg.setSourceEntity(159U);
    msg.setDestination(30034U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("GLBNQDBEITDXVGKMWRLAJZLVFECPAHACKUFCXRWJENUYJHPVJOOYDHMZXJZBQNNWLFJFVOGUNYGTEFVZCFLYBIOGTBJHRMOKVHCSFQKENOOASKDSNWCJRPITVCRIIIMXWFISGPGNZMLKXBLMSKFRCJDQQEGRDAHPNUUYLQVJBTTAOTAXMCZZEBNADBFHTOQPRIXWIDWMYTUHKYYRSQUZZODMUYEKSESXQC");
    msg.description.assign("IXSXBCWNHLZIGOAQAJIWYGZIFHDFQKNVVPNJZXKRRNQRHJMAVAJPVMYACSYBUKREN");
    msg.vnamespace.assign("ZARSCTRMTPUVBMDQDKNHEZHZLBRINWNWCBPEXSWITCIKSVEFOJLFPZSJHIHVUOJKEYYVNTGQXZIGGGANWAGVYTBALKOMOUEQTFQITPZYUWSPQPXDIHDBYKQLQRMPOXBYQMSGVLMMWOVNIAXCDAOEYDIEEHRRFXQWPFRDFYBUDTBKSYJCLYRHKPFNOGGDTCRHVRGKLEZVBEZTGXJDUQINOXAMBSKZLNOMHJWUFFKUX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UXFGTOEPSGLRTYTVFYBTELVEKHTCXJCNKPRHGUUBHOZPXAHLQYKMAGHDFMGQCOPUCMRKGOHZCEZTAFNCDKTDDEMMBLAJKSWFYBOMIWUUAQ");
    tmp_msg_0.value.assign("DWOXVIWPVMYBOSGOZGVWKFYNNJE");
    tmp_msg_0.type = 88U;
    tmp_msg_0.access = 52U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EKYIRTGHMWJAVJYSOLKQHIUXMTUJJUEIDBWSDBTFMZBQDSLYKDCDHALHVYUPZHMPDWLSJKUPFTCWZLAHXGILKUFYCRPXWVXZHNVIMTOBXOGVGZWBCJVKFRIBVTYJPRNNFNPCXROUTAXQAEZKTIPIVFENHQKEMQHQMCSKRBQJQDHFDNFJVVSWRWTWSNZXIIAWXMKOACLLFUOEUZOYDDCOSMRNENPSCXOEQCMZRGPGYAYGQLGS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TGYJKFJNCYIVZTHPNWNIJVWGIALSC");
    IMC::FormationPlanExecution tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.group_name.assign("UNTVJWVDIABBQFVWZBXEXUYAEFBJNCTABQTDGHAKUKRNTUSNJUAZCNMIOSLHMQZBDMPEKFKGOCYSNJWVLERSHGPDTJVDUXGIUZYDLOCNUIRZ");
    tmp_tmp_msg_1_0.formation_name.assign("YCHXMWJUQUBUAELKCEGBEXDHKBZTFRYPXKPISIJOLPCYOFOWNXIQGRAAPGBOCVEGGNYPZDJWVPENVINUNSXMOJTFQTDNVICHYYAMKEFKTOFTJAHWXLBUQZSWQHZDZPCHKBPYVWURRHFALJMUVZKRVVMT");
    tmp_tmp_msg_1_0.plan_id.assign("DKBRIKJMYNQRKEWTEHCBEYNYWHPAHHWJFPMZBUELHQUWGFPQFJZFCSPJSTMOPATYGZZISUXLXROP");
    tmp_tmp_msg_1_0.description.assign("RMRWHXDQGWIDGCFIKJTPOZACIQYNHXMUMEDZGRCRKSCDCTJIPKQUQYPOJYBEYLFQOZCAIFUPPJTUEWVESLXBRGYQAFTFVCNPUBSNRSBJAXHCXAGNBSGKTKGAZLJ");
    tmp_tmp_msg_1_0.leader_speed = 0.249866612892;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.257962932911;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.595638823698;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.71852443596;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 9508U;
    tmp_tmp_msg_1_0.converg_max = 0.276816943117;
    tmp_tmp_msg_1_0.converg_timeout = 38273U;
    tmp_tmp_msg_1_0.comms_timeout = 56655U;
    tmp_tmp_msg_1_0.turb_lim = 0.15351853685;
    tmp_tmp_msg_1_0.custom.assign("WQYCNDSPAZWCXMCFDQJSGVLFXHCKSPEZOUEZDCYOTEINXGTPAFSMGQVNXTWHVUZWUKEFCMIRUIJJCPLILXBFIHHXZGWZOGOKDULMZEOEXJCHMWJKRLZYOWFVAAINX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::QueryEntityInfo tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 95U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LLAAMGVAXCWJYQKZWTHVMBVWMONXJXTCHOLVVDNKESHOXQKOWEMCRBFUNBFNQSSSCCEBVXOIRGTDINMQRVTQSYRJRJWNWLFDXM");
    tmp_msg_2.dest_man.assign("BDEOBQRALVSIYSIWEWOXQUYRFYNLKPNGGURKKGKPGFRWIYTYSCKVBRIMLDHQOSEJIYGCEOCJNKHJHPIUCRAFVBJXFIMTGOGUSZHXMDIFV");
    tmp_msg_2.conditions.assign("IKWRXADFCPMWJPMNZRWIXYUJAUOOSKQQKCYADVZBTHTJESCZWTXNJKQQWVEMJEIVOZSPKLUKTEHCQASTTEORLYRXXJLLRYSLNTDUQXZODFOLRHPFHBXGEZWMSBHUHGBJYYWMNKTJTBYVDUBPDYGZFZRRVSLFDFJQBANGNEZAGUMUKGIMIKOIHGOASXGPOVYQSC");
    IMC::Acceleration tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.time = 0.305989437826;
    tmp_tmp_msg_2_0.x = 0.723910183854;
    tmp_tmp_msg_2_0.y = 0.65288032836;
    tmp_tmp_msg_2_0.z = 0.258829561467;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.667663245561);
    msg.setSource(6382U);
    msg.setSourceEntity(161U);
    msg.setDestination(38711U);
    msg.setDestinationEntity(238U);
    msg.maneuver_id.assign("NVJPXDKQIMDWZCLRTAQMUNAEGF");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.429039067781;
    tmp_msg_0.lon = 0.164174913477;
    tmp_msg_0.speed = 0.742698749487;
    tmp_msg_0.speed_units = 145U;
    tmp_msg_0.duration = 51251U;
    tmp_msg_0.sys_a = 17769U;
    tmp_msg_0.sys_b = 59641U;
    tmp_msg_0.move_threshold = 0.95673100647;
    msg.data.set(tmp_msg_0);
    IMC::CustomManeuver tmp_msg_1;
    tmp_msg_1.timeout = 20177U;
    tmp_msg_1.name.assign("CYFVCFTHESYNLRLSXAYMPWFEIGRRQSTEKRCGISIGYLUANWJNCQUFUQHZNCOZLKYZIQBQICXTUPHHLPBONLYQO");
    tmp_msg_1.custom.assign("XMZCZQDHCKIPSNIAZQTJYJKRFSDKGWWLXFREZDVEBS");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryEntityInfo tmp_msg_2;
    tmp_msg_2.id = 95U;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.394438945601);
    msg.setSource(44888U);
    msg.setSourceEntity(142U);
    msg.setDestination(61438U);
    msg.setDestinationEntity(218U);
    msg.maneuver_id.assign("KXYEVMGGUMCYULAJWZOAJAWXQDMUWZHMYAKITDMKNEPQJORYESBSFZQR");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 53208U;
    tmp_msg_0.lat = 0.178944350305;
    tmp_msg_0.lon = 0.500740773448;
    tmp_msg_0.z = 0.910778293541;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.510949218898;
    tmp_msg_0.speed_units = 96U;
    tmp_msg_0.syringe0 = 153U;
    tmp_msg_0.syringe1 = 28U;
    tmp_msg_0.syringe2 = 188U;
    tmp_msg_0.custom.assign("TFXEJHFLJOSUBXNJFRIJQTXTQROBBCAMNVFCVHJMNBKFOAYCHZCWEYXIRAIPETTFPYSOQHGURAWHDSIKWZMPRPIXYCGDADUM");
    msg.data.set(tmp_msg_0);
    IMC::SystemGroup tmp_msg_1;
    tmp_msg_1.groupname.assign("LDWAPLVRSNOOHZAEGZLXOXYDUDBIFFUSLKNDTFKYCNLJZBGQDHABSEKKSM");
    tmp_msg_1.action = 138U;
    tmp_msg_1.grouplist.assign("XURWUEZTGYWTCAASIYPQAEFNJ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AngularVelocity tmp_msg_2;
    tmp_msg_2.time = 0.889225887732;
    tmp_msg_2.x = 0.00368532430412;
    tmp_msg_2.y = 0.551324369565;
    tmp_msg_2.z = 0.361310654012;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.296780632599);
    msg.setSource(24923U);
    msg.setSourceEntity(141U);
    msg.setDestination(18874U);
    msg.setDestinationEntity(122U);
    msg.maneuver_id.assign("CZQJWNQEFCZDOSIARXSTQBYNTJOPJFXTYGGTLPBTKWVYDDPTZZMSFHWTBWBUMRQLIKGMWCJIPCKUPYGBWZWEEVBMLUOATEBSWDEMTFHUXSDMGLXQRJODAUJQVJVQSVKHOMDKSCRUYURCFAQGAGNFSPINEZPOHAPGNZIBHEGRJPKLAJGNCXHCNKFNUAYVOONIQDXAMBUPIYIOMEVRCUNMRXVAVLLLFWQYLSRWRSJZEXZHYHIXOIVL");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 26443U;
    tmp_msg_0.lat = 0.0616100318892;
    tmp_msg_0.lon = 0.588120633774;
    tmp_msg_0.z = 0.444573803012;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.pitch = 0.328813636181;
    tmp_msg_0.amplitude = 0.0866686271497;
    tmp_msg_0.duration = 40622U;
    tmp_msg_0.speed = 0.46563240679;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.radius = 0.330153814749;
    tmp_msg_0.direction = 195U;
    tmp_msg_0.custom.assign("IJFJYUJEHYFMSLRMWTXDPGOHJMDKEWXCQQDNAOJHLZQASXYOMSUNRFGEPKVZEQETQUOWHRIINGCQRXNVCRSBPBNKQULLOUIMNGITGXFGZOVYVNVUK");
    msg.data.set(tmp_msg_0);
    IMC::Rows tmp_msg_1;
    tmp_msg_1.timeout = 24750U;
    tmp_msg_1.lat = 0.404559471668;
    tmp_msg_1.lon = 0.678518257087;
    tmp_msg_1.z = 0.377659527224;
    tmp_msg_1.z_units = 201U;
    tmp_msg_1.speed = 0.471209084724;
    tmp_msg_1.speed_units = 85U;
    tmp_msg_1.bearing = 0.93897187988;
    tmp_msg_1.cross_angle = 0.812472652256;
    tmp_msg_1.width = 0.103366087871;
    tmp_msg_1.length = 0.116355094749;
    tmp_msg_1.hstep = 0.435646329362;
    tmp_msg_1.coff = 92U;
    tmp_msg_1.alternation = 247U;
    tmp_msg_1.flags = 178U;
    tmp_msg_1.custom.assign("VAVONZEZXWXRFEMRHKQGCJZRJRWTYHMMQRGRCRSVDNGDKCDBDMVOZRAANJDIWXY");
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.217503968807);
    msg.setSource(37985U);
    msg.setSourceEntity(82U);
    msg.setDestination(31930U);
    msg.setDestinationEntity(237U);
    msg.source_man.assign("LEAOUGHUFEVREQWPRZIMWBKCMNMFTTXOBADJIABZYGSEBTMVEBVGCYVMSZRJKIUXBQPCHGIXUOOZUOYKAPDWVFNVNKTEPTDCDECPXNYXXHKALIRJSJYGBYYJJNFGPDMZHZXMZGJUROLOOENUWQFRXCBGTFSVHZGDCJMRKIQNGWFSLSNSLALVKDWVKMAKZWFYQDTQJDXNWCRPLPLTMATHKACTXHHBLPFZIVJSEOFYUQULDAHBSQIWYQQS");
    msg.dest_man.assign("CJBJQAKRSILHTQPCMOVQJOKTXBDRSFPKZOBLBHBVHEJDBGWWYQINPTVUNAQGRFZBGJWACUCHPDPFZQOKLIZUDMGPROUVEKANTZUDYUIVLBXVNCTYCIDWUESZNMZMSFWEFEZCGCPHTDOIQYDKYDLARXYXHGXQLRLKMWONGFJCMEAMXSMUVIRVJDAHWGYCANEKMIYJAGQTFWXHHNYLWINOSE");
    msg.conditions.assign("COIDICOBFEYVMANKNXHGXEBMGEWJQQGNLUGEZTIJVAPXHVLFWRCTDHCIIXBGVBWGRTDESEOZRJYTWPHMJNUTVTWZXWQPMHNWEUGQBISDMNQQMLDGKCHFYGAZPDRTJAZLFQFWCEVTLYJWDSGOXKUNWBQXUKOQMKKRAIFIECYLILCAPOYSOCUZALYBTAVXBSPRDKRKYVNUJRFZSSONLOVYZCZIHMMMSQTJUORPBNFRJKFDPAZSH");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 7U;
    tmp_msg_0.lon_gain = 0.67699832589;
    tmp_msg_0.lat_gain = 0.53658194644;
    tmp_msg_0.bond_thick = 0.532952200983;
    tmp_msg_0.lead_gain = 0.988904901952;
    tmp_msg_0.deconfl_gain = 0.0528508539594;
    tmp_msg_0.accel_switch_gain = 0.921178145194;
    tmp_msg_0.safe_dist = 0.798508551239;
    tmp_msg_0.deconflict_offset = 0.109084059272;
    tmp_msg_0.accel_safe_margin = 0.596432615174;
    tmp_msg_0.accel_lim_x = 0.441741264949;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.722706586424);
    msg.setSource(43717U);
    msg.setSourceEntity(221U);
    msg.setDestination(47492U);
    msg.setDestinationEntity(3U);
    msg.source_man.assign("QRQPJZWXBHBNKOVMLTGMUWBAXULEHWDWQIELHLGGBKRTATGEUQQLMOGZJFZONG");
    msg.dest_man.assign("XXYNEJKAYIMEATXPRQHJPILIZASQWYPREKOBCAAVJUFPKHWGPTRMXDNYS");
    msg.conditions.assign("MKHRSSDMMOWZORIYKLZ");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UNGJPZDSQMSWQDTHPGJTEHUBURVGBNJCOLTTIRZLTMSRBCOVKWHWDTFQBAADLJXJVUOIPOAYUFXPXHPEVUKHHCOCWLIZAFGCGDYBABIKNMFBIDTZGGXRZEQMMWLMSNKXQYQLFOVMHRCNYWXEFSRYTPBGTCPKPQAXDIOPWGZYERFJVFXXRBSKHMIYVOAMIGJJLINCKCJNEUDQTYWYKAUJAKSZONZHDALSSUVXVQLESKFDMZQVNPLBECUE");
    tmp_msg_0.visibility.assign("FUVHGMHWSENCBMYFWXPTWKPMRBYBKKVQSGCBVOZOJXLQPBOPDU");
    tmp_msg_0.scope.assign("LPBMBJTIHKTEWZXCKFVEBMBYTYYLSWFRPTORFCXPPBOZYQGWKUH");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.591421518758);
    msg.setSource(16864U);
    msg.setSourceEntity(236U);
    msg.setDestination(57418U);
    msg.setDestinationEntity(90U);
    msg.source_man.assign("DNKSHSGOMEXMIXTMFHIZUMNWPGOTECWKLVKHDYQSKIFJGQWEMRVWAOPNUDGPMBZQOSYLKOAMVDNNBQWFPRGBJFPJYUUBNLBGAMYJKPEIQYZQRKTMJQADVTZFRQOBUVXIBPXRRIXUHDZBYPHWNEFAGSJCIVWATCHXXMGHYTZXNJCKAAFJGBCTISZUFVD");
    msg.dest_man.assign("NANJLGNVHYCZIWKZDQVGRISWUIYGPTECYPACUQNTNYZKDEMXZPHTEQEWDCILJHRJMYMQOLSAGWVSKKVSOBJPGTMUBAIKTXFIVEHDADJERWLCQAEQKXQSJFEXAARZSDXUEOXIFRGGNMJHNIYQNZCCFDWZVRZRUEYUJLNK");
    msg.conditions.assign("YOWEEVQSKHFDGUTILQRLRBISSAUGZUCHRRHOUBWYXDDWQPLTALHDORNTWBFJPNEOYBLCFSXYIBRCKFPJADJYOCVZZGXPMPMPKAKBMECFSSKKJRTQIINOXUIFNDRVTSFWERNNBKMXMFBJQSMHLWHYIPMNAEADWEDYOMDQQZXAZJETYHZSVLZCIKHJJCKVZWZOTHLQNPTVCBBTUGWHKVDWNXYOUXVVCVRPGZGUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.773903567114);
    msg.setSource(42789U);
    msg.setSourceEntity(73U);
    msg.setDestination(43065U);
    msg.setDestinationEntity(135U);
    msg.command = 30U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SURYUMEXNHWAOWCQQBITKJZJQYQERYLEUHEPGCBFTLMPPXZJACSBRJQBLHODUIVXSKAAEGMKTIIFZCUDLDKNVSJFHJGXNKXTCXWTFBCUURJFSPKCSQCXXRKYDZHLLFTELTJYZYXOFOBYGGAIKPOTEUYMDKVZNZWZHWMSAYNEQXVWYAUWILRWWNLVGJTVAPGHRVKLGIDBNDUBRQMRMBNMMBOAHED");
    tmp_msg_0.description.assign("KVSUSTXYCGREFGNYYTVQBZXZNNBLMSOSDDPTLPMALXAVKOEEYZCAYWLWYBVPKOGPZFIRCQQHMXSOQTYKJUCEXICJKNDSPLDRMWVPXLSUNOLLZZDAWBMARUG");
    tmp_msg_0.vnamespace.assign("IAWIVRQVVWJGSYIFJUBKFVAURISTLFIOBLOJWFHFTAXPATMCZRPDNTPYSBCNHDZSYSEIIFLERMGBWGXQKTNVQVBQGSLOSQODCUEGYXYTCNPFYJEJOVNEKLMDDPXQUSNKAMIKAWZAPYTLBPFUN");
    tmp_msg_0.start_man_id.assign("DVECHPYNWJMPVUXMRKLTHLSNVYGEJAPXDBLXVKVMJRNMQ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YXGCALGTVMRVJGKTEMOYPPFLQTOSFJMGFWFCGTEDINRARWZCBPQIOZCDULVYLAYTTVPVMQGAYUULEZSSVHBO");
    tmp_tmp_msg_0_0.dest_man.assign("ZFXTKHGEMCCKIULWURGMJJVAMGQGBOYQEWFUFHVZQHHERRVGONZXRPDACVHDOKNQYYCQWDCPJZDNOULMBOSCJGMRAQYELQTGDKWGLVTEJYPXKZASETPYTLZAHVVKNMWWLPCSFXSEIUYX");
    tmp_tmp_msg_0_0.conditions.assign("XUSBSYHWFQRDYIJQOEEPCMXXEDVCOWJFLXOUJJQHRXWUEJZGAEUIEUZKOPAG");
    IMC::ControlParcel tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.p = 0.221540428577;
    tmp_tmp_tmp_msg_0_0_0.i = 0.351679510248;
    tmp_tmp_tmp_msg_0_0_0.d = 0.66263091852;
    tmp_tmp_tmp_msg_0_0_0.a = 0.439057457418;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::FormState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.possimerr = 0.63074562087;
    tmp_tmp_msg_0_1.converg = 0.900783421092;
    tmp_tmp_msg_0_1.turbulence = 0.630122049101;
    tmp_tmp_msg_0_1.possimmon = 244U;
    tmp_tmp_msg_0_1.commmon = 95U;
    tmp_tmp_msg_0_1.convergmon = 148U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.955035614937);
    msg.setSource(60511U);
    msg.setSourceEntity(87U);
    msg.setDestination(53771U);
    msg.setDestinationEntity(138U);
    msg.command = 247U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BDOBJPWYITDYTYRAVJPLQKNTSTZBTAPSLPJCOHZJPXEJNPCGAYGBJWKQJE");
    tmp_msg_0.description.assign("UROKZMQUFYJKXLDKEKTWNQFADSAOVCUBPJQFUUBUVNDGZPAAIPKDUXGWVNYOZMDRAZIVXBKJPICALSPMDTTZUGPTGFGJHGBEILSPHXHSYTOSZVKLMWMOBCWYHRIPOAEQZFMQFDYQJLFMOTCWKJSNZCWFEJEDYXIVLEY");
    tmp_msg_0.vnamespace.assign("UOQAGQWYYGLSGUMYTLBPKMQHRDRCYINIVSDWIUTOGOJEQNFLKDTVANCACBKHUVAVXZOHXVPAPZAKZQLVEM");
    tmp_msg_0.start_man_id.assign("ARVLWYEYGSPPYMSLFVTJHFHPOMMJJUKBQPYCFRNJQOKRARORQZSULNXAPBTVZMHJNBXDXXDLJRLLHGOERPOESUFO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZUVOAHQVUKVVSNZBBOQRXGZOIOCKDEFNUPZHBLEOENEEOCFFJFTELYCTDPHTZLSSQEWYYVJYIPBRDLYNXUDJHLISNWUMAGCVKPFTQMVIKDFYJRSHGAFBPITNBIDTEAPMWRYMVRDXYMLHXAQZMFRLUQOBWQCQJYPZGRPIAMATRQHZCKKGSUCUIKSLAXCDMXNYTGCJGWHJJ");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 54233U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZDLKUNZUKYLHWUHYT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TeleoperationDone tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::CameraZoom tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 118U;
    tmp_tmp_msg_0_1.zoom = 175U;
    tmp_tmp_msg_0_1.action = 210U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.929856777707);
    msg.setSource(49553U);
    msg.setSourceEntity(157U);
    msg.setDestination(35574U);
    msg.setDestinationEntity(44U);
    msg.command = 17U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OGSTLPDEFCAUPIQGJOUEFLKKGQZABKCXRDZQWMXPJCLKGNSHGMEQURPVGMWTCVOSLTJEKDZMXAYUBITIZHNQSDUDYXRIIYYHAQLNWRDMDFXJTHVHTAAAOVQXCVDHKCFSURWBERTIBTELKJUWFBBSCGWYBPPSPVNWNIQMWLHATUPPOWFGCNRRHKEFGQPLYXCROHIBZFIJZCSXLOBMZJODMYLSNERJZNAKOISBXNMD");
    tmp_msg_0.description.assign("YFHQGXPXWZYLEQQMJYPOUSLARQSRGJGPVDINYLMXKNDGZ");
    tmp_msg_0.vnamespace.assign("DLHWZCACGIVT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IIHDNINJAGLPNRWDOPOIDGJRCHJNKTVDIXXAEZEOFXWBCCCEUCVRGNOLJQWVEPBGYKKPFXWMTRV");
    tmp_tmp_msg_0_0.value.assign("YLJWIPSTUMLHIHJAPZKVMZEWXSNGVFQYLJLPVXPXZNQMBXEQXOFRCTKMXUSHYDTCYBRZNLQCDSDYMSIHOCRFEAEYEZZNOJTSBTZUUREFXPBTVOBLHGKEFFSTZSPDPUQKDWSWZYHCNGUMXSIGBLYQXRRNNLAZW");
    tmp_tmp_msg_0_0.type = 4U;
    tmp_tmp_msg_0_0.access = 175U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ATGGQKGFTLPLTXKTWRGDDFLMRXZCBTXHOBYTFIUKLAWWNTUVSQDVGLNRIMLHWEQDUACCNOWRQMXCTVMDJUNDJUEPYAQVSBVKHGZVCPWZPVHUXYGQEOGKKZLSEWAIQXIUCZJJOODMIVJUVFPCDOTYYAXDHBEKSXSJPZWPLZWGHAFAYSKMZOY");
    IMC::DevDataBinary tmp_tmp_msg_0_1;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-52, -76, -115, 25, -20, -21, -85, 123, -82, 68, 95, 119, 82, -80, 97, 46, -94, -62, -104, 65, -103, 91, -13, -108, -71, 124, -98, 97, -17, 113, 87, 112, 19, 10, -104, 124, -39, 101, -102, -99, -35, 42, 64, -125, 72, -120, -11, -2, -125, 102, 96, -115, -94, 56, -21, -49, -94, -109, 80, 108, 97, -96, -43, 114, 30, 81};
    tmp_tmp_msg_0_1.value.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.190124060631);
    msg.setSource(41803U);
    msg.setSourceEntity(162U);
    msg.setDestination(58184U);
    msg.setDestinationEntity(50U);
    msg.state = 85U;
    msg.plan_id.assign("UEXNUXNQYZNSCJPVGOARRDECUFFJOIJXETQZKIMDKILBPWWITMDHIPRFMKMUICTSSPKGIGIQXXTOJEGMNNDAXMWGTSQGTXKVBRGYDETWNSQLBHVDWWJLFHRXLGRUTLJAFLNOHFBHWOUPPWPCMHCCIQQASNCFMKNLOJFAGVSZKEEVUATOVHDDHZKUHSZQZAYDMFRRAVBYYAKYZLFZQYDBXEPCBBZWPVRKOROLPSUQVHJB");
    msg.comm_level = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.184052350202);
    msg.setSource(26193U);
    msg.setSourceEntity(244U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(17U);
    msg.state = 82U;
    msg.plan_id.assign("HZKHNJJDGZHGMBRWASOIVGPRYEJOGEVEXDATEUPTPIMMKVYOFPPKTWBZAKGNZALVHQUWOYXRVJAHJFJQUECDALN");
    msg.comm_level = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.449896585531);
    msg.setSource(28538U);
    msg.setSourceEntity(106U);
    msg.setDestination(19175U);
    msg.setDestinationEntity(77U);
    msg.state = 83U;
    msg.plan_id.assign("SJTXSPAWVLSIIVMFGDFMUHXSZLLEEIDQFFPKOXOHKQQXXYHTJYVQARGWBZVFIXWMBTRRQNILTXSGMFQPSGGIBDBKHALACNUJ");
    msg.comm_level = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.836913714568);
    msg.setSource(35548U);
    msg.setSourceEntity(145U);
    msg.setDestination(19721U);
    msg.setDestinationEntity(156U);
    msg.type = 155U;
    msg.op = 171U;
    msg.request_id = 49317U;
    msg.plan_id.assign("KWDZGEITTRYNIVIMWTBBQOQAFGFMZRRYVRHYQYPFSUDJTDOIKDJRGMTUSXTBSNBEBILFLENQIHOAZWOBBPYAWWIKMYAQVASCDVELMWGOJIONXNFPZQONRDVPHWUGZCUHKOXQEOHKXPSLCRMPBCCCDPFUJLIYKYQEDGVJQXRTLUXLUGLNYGEZEPYTPUSJMVLRBBAATCKSDHVGCCJJMNTRFNGZZEJQODFASANMCX");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.817612784027;
    tmp_msg_0.lat = 0.147398783891;
    tmp_msg_0.lon = 0.835351606388;
    tmp_msg_0.z = 0.889795906871;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.travel_z = 0.928610403685;
    tmp_msg_0.travel_z_units = 248U;
    tmp_msg_0.delayed = 5U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SHNQZFTNEAJYLDQRTVGHMXUBEARNUYGJSXVTZVIXCNQPKNDNKUJAQIDERNFPOUMBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0637463067304);
    msg.setSource(2626U);
    msg.setSourceEntity(95U);
    msg.setDestination(18131U);
    msg.setDestinationEntity(159U);
    msg.type = 238U;
    msg.op = 43U;
    msg.request_id = 11511U;
    msg.plan_id.assign("RNTOCTIAPTQAHVZKXAFPVYFQIGOZEUKRNXCEOWXPIMDCYZLQMGQQCMLFGUFMDJGAWDXEOYXOJGHIIPSLHWEJLBHNFPLZIRQBYWWSTJLJUZKXVDPYGFNWEUNBRYGZSCTMEFUMKSVKVCWXZKCPXITNIIYSRQURBBJVLHJPQLTKQC");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.599575192746;
    tmp_msg_0.speed_units = 153U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QHUUQXYUZNVXKSPTTOSRFEDWYIBGYENGVNXZFKZIIARFWRTRGYHOVHCKKPBLLOMQLKMHTBGVWZDUCNOBSCKPIRIHTDDWPWJYGAPQNVUHFDCLIUUZSFVLASQEMQWAKDGYJRPVLMYKXFADYXACJUGBPEHDIHSKNZZGCXMMQAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.126630099406);
    msg.setSource(53499U);
    msg.setSourceEntity(27U);
    msg.setDestination(38142U);
    msg.setDestinationEntity(47U);
    msg.type = 139U;
    msg.op = 245U;
    msg.request_id = 25856U;
    msg.plan_id.assign("POVTUKGXRLSDFNSIPNEZELIJYVVIQVCBAPVYQATJVKFQTXIJZYFWQXEXATJKGLYJSFGECMEZFBHFYLLMSGKOMARTZAPNNOHBSMPUUYOOCQQNXMZLDBTTWEFCDGXJNORAYETJWVAPWJPHSXSWCUCDRGKBMMANC");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.368727166253;
    tmp_msg_0.x = 0.949034373662;
    tmp_msg_0.y = 0.0682888894204;
    tmp_msg_0.z = 0.195830066363;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FXTFPGXPSEHIOJKPXJVYUWJGONYZODPRRDEZKAERCZYTAYZHTZDBMUFVQQUWBUHQIKWHPKXQENMWILNVLNOUSSVDVQZAHFYNCTNMLNBSRBLMCURKTJEOBQASHKRCETNTXJAVCCGVNTFAQYMJSL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.845091757355);
    msg.setSource(44900U);
    msg.setSourceEntity(101U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(31U);
    msg.plan_count = 56994U;
    msg.plan_size = 3185389910U;
    msg.change_time = 0.715924313032;
    msg.change_sid = 57095U;
    msg.change_sname.assign("NOZTHWKBTOYCUPXAOPVUICGWSCUJLQCEQOTEVQNJNCBNFUGAIGICLBGFFZHZGJGDMXDPZKRYXZDPYLOISIDNYSAOSIUZXQHIBVYNTZSRNOEMNMEKFXAXCULMDMYVIKAZODHROAZHFPWVBFW");
    const char tmp_msg_0[] = {-50, -22, -56, -128, -2, 106, 87, -75, 41, -75, 25, -120, -84, -86, -66, 65, -119, -12, -73, 56, 73, -125, 88, 46, 85, 109, -67, 81, -54, -40, 107, 25, -46, -38, 90, -84, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PFKUBUSXVJWQUXCYMKWQACQIXOGVRBMZHDZLEZKFTCCQADQVAYDGFGRILGMSLLSYBVMLCUNEUSIRGDJRX");
    tmp_msg_1.plan_size = 19260U;
    tmp_msg_1.change_time = 0.871941967692;
    tmp_msg_1.change_sid = 56739U;
    tmp_msg_1.change_sname.assign("HUVWIUGQNYBNMWVZUERYJYKHIYEKRVLHADHDJITOPUCBMAGGMBVLMMXXNQBFMWKFFHETUKPPHFZOFGNVFNMJZJTTZYARCCWESCZLDQYIQADOLLGJSFOPXIUILWGGNEGJJXSXBKMZYVUZKRWQPKRPCJQBTOMVBRZJDBIZSDSXGQKXQYTCFALHSDATQWHKTVNKBAHCOCXECSSLFGOEPIEWEOAEVDSUWANZOPCOALQJPINHLVXNUBYSXDURPM");
    const char tmp_tmp_msg_1_0[] = {-100, -8, -126, 51, 78, 28, 37, -64, 100, -9, 106, -3, 51, 111, 67, 107, -103, -50, -29, 120, 37, 46, 20, -97, 117, -9, 57, 115, 7, 103, 25, 67, 29, -61, 78, 36, 23, 41, 105, 60, -31, 35, -5, 66, -111, -63, -96, -121, 25, -53, -124, 69, 9, -54, 48, 71, 28, 20, -70, 91, 70, -52, 9, 68, 50, -58, 73, -3, -29, 115, 62, 6, 106, 101, 75, -104, 118, -57, 88, 22, 30, -39, -61, -10, 31, 38, 15, -31, 83, 124, 113, -14, 21, -53, 17, 94, -103, 72, -97, 93, 46, 104, -75, 79, -39, -14, -60, -7, 51, 29, 107, 58, 52, 15, 48, 0, -100, 78, 114, 81, -51, -10, -41, -51, 12, 119, 49, -13, 12, -123, 14, 105, -87, -50, -13, -96, 41, 122, -82, 113, -58, 51, 5, -66, -105, 45, 41, 53, -16, 43, 6, -42, 17, 49, 24, 28, -63, 1, 47, -1, -82, 112, 74, -124, -51, 99, 97, 37, -126, 66, 5, 9, -24, 115, -122, -75};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.167666642706);
    msg.setSource(30419U);
    msg.setSourceEntity(23U);
    msg.setDestination(7306U);
    msg.setDestinationEntity(182U);
    msg.plan_count = 64129U;
    msg.plan_size = 1224452311U;
    msg.change_time = 0.0951142998281;
    msg.change_sid = 25912U;
    msg.change_sname.assign("TWGKJDEOXIRNVGQOWKKQMBHDOBZITKYOTXKOWBJTLGRRWMGYTPFXVDCCIHPVTSXAQIGDZWBPLASKQPHWJIEYPJUFLNYZTFJVNYNEXTDEBLUKLDHZIMBSYEGDR");
    const char tmp_msg_0[] = {112, -31, 23, 26, -18, -15, -79, 89, -76, -7, 111, 46, 62, 105, 102, 114, -109, 109, 102, 80, 53, 65, 111, 29, 20, 70, -52, -29, -80, 78, -47, -69, -22, 38, -114, -114, -26, 94, -55, 121, -71, 110, 52, -7, 60, -86, -44, -121, -97, -64, -53, 86, -47, -27, -61, -47, 25, 126, 9, 0, 58, -119, 99, -6, -105, 50, 101, 48, -20, 55, 74, 21, -105, 99, 44, 19, -93, -70, 97, 31, 65, 47, -68, -55, 13, -90, 5, -111, -1, -103, 94, -73, 57, -96, -124, -17, 83, -115, 40, 59, -101, 91, 55, -119, 45, 0, 83, 54, -52, -29, 96, 74, 125, 35, -107, 62, 48, -39, 91, 76, 118, 104, 92, 57, -84, 75, 104, -17, 39, 18, 30, 79, -6, 101, 96, 66, -70, 52, -25, 2, -58, 78, 111, 2, 94, 88, 110, -117, 28, -74, -6, -49, 42, -26, 31, 102, -120, -76, -113, -73, 97, 22, 47, -58, 95};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.464161481563);
    msg.setSource(41902U);
    msg.setSourceEntity(150U);
    msg.setDestination(34167U);
    msg.setDestinationEntity(151U);
    msg.plan_count = 45741U;
    msg.plan_size = 3042118418U;
    msg.change_time = 0.273489823877;
    msg.change_sid = 14670U;
    msg.change_sname.assign("GCDNBQCFDEWUGEVRQSPONOXAIWJLBAHYRPLJOZFCONTNBIHQUSAZANBHFDLJHCTMXXAXLKYRTJGAQVXSZDPFOZRESCNQYXJFMBDLQJEBKUTKSWIUREUKVVLWJIZYZOBGVLJXHFNITLJCXEDKMQBXRKZPOYUVQHTBCKAWGCDQTWHZJYFGOGZMUZXEKIVPCHVRAYKYTYCMSDNMP");
    const char tmp_msg_0[] = {75, -38, -58, 31, 9, 52, -73, -64, -18, 32, 66, 99, 46, 17, 101, -121, -118, -114, 37, -102, 40, 23, -30, -106, -16, 105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.711659084804);
    msg.setSource(23533U);
    msg.setSourceEntity(7U);
    msg.setDestination(43392U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("ZNSOVMKEOKHCINYLFZPRTPROFMYZANPGDMGSQRXEMIHHBIJZZEIGXGAVATMWHYCEIEXOQARBNLYIIOUCUPWZDNCLYFTYWL");
    msg.plan_size = 12263U;
    msg.change_time = 0.488938496826;
    msg.change_sid = 34677U;
    msg.change_sname.assign("HVNIADABWCYYEABLLJJLXVYTXXWAWAJCHWILJGNBQJXVUTXMFWLRUYHFOR");
    const char tmp_msg_0[] = {-21, -108, 35, 39, 102, 44, 0, 36, -118, -93, 51, 53, 7, -41, -18, 20, 112, 106, 70, -75, 101, 124, -81, -41, 102, 87, -36, 76, -50, -103, -123, 99, -117, 0, 71, -95, 63, -113, -13, 107, 110, -79, -31, -21, -121, 26, -27, 10, -83, -23, 13, -75, -72, -76, -8, -119, 86, -26, 43, -22, 86, 29, 20, -30, -110, -89, 104, -47, 9, 14, 36, 87, 86, -53, -124, -57, 91, 78, 28, 34, 83, -15, -18, 25, 105, -105, 61, 70, 28, 18, 78, -95, -5, -68, 13, -6, 46, 29, -11, -37, -110, 70, -17, 105, 115, 43, 16, -59, -58, 108, 118, 74, -110, -90, 123, 78, 114, 63, 54, 27, 112, 62, -14, 75, -50, 22, -87, 38, -23, 80, -105, -4, -1, 74, -60, 36, 112, -19, -80, 97, 34, -128, 54, 19, -17, -17, 10, 93, -62, -126, -95, -26, 44, 84, 5, -73, 88, -72, -114, 110, -110, -34, 67};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.36105940604);
    msg.setSource(905U);
    msg.setSourceEntity(57U);
    msg.setDestination(14929U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("EVCVOHYWHOPYPHAKDCMPCBIFSGNVVLKUMXLSJTHRGJOAIFFXKRTDDQBWNCSTOVMXOQUQXDFOEFBBEHMZSTISKQYIGWNWPPTBGULRLRKFWJHIFWRVUUDXEYGIPMUMYCNGLQETBAXKLUZCAWZYQTRYJEMBUALGIZQCQJEKJAAFHPMHODBKNNTSSMREKTZVMINXGHJHQWZLZZNJWJGFSSYATLAOJDCAFRDVXXZVNCPCUPRDQILYIWKE");
    msg.plan_size = 25074U;
    msg.change_time = 0.839273893794;
    msg.change_sid = 56109U;
    msg.change_sname.assign("RFFBSVODEKSCKXWXAGFLIDKHJGKGSCWTLVBPKNLLHBLPQQBGEJXTAVYITCIHQHYDJQNNEWTACUQZVFAKWXGFIWDVWMSAELSMXBEIM");
    const char tmp_msg_0[] = {98, 75, 104, -45, -37, -127, -19, -77, 69, -6, 76, 24, 78, 41, -117, -43, -4, 60, -54, 57, -7, -86, -28, -97, 65, -78, 117, 124, 25, -57, -111, -1, -51, 118, 60, -34, -76, -6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.903640171207);
    msg.setSource(62822U);
    msg.setSourceEntity(56U);
    msg.setDestination(56373U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("QHFNQDUPOIAIXYIOHCZWCSHRPQIKMLHRREOLXYWNJJMHBBJMCEWHSUGPGABLTWFMANWTDIMSTJBCYEZEGRAXUVTSFXWKTCRVDKIECAKAHLXQERFFYOKILLXEBSQZOZPSCTSOEGCRFADUTUUYQHBOFKNUYMPNDYGNZMGWQDGMLZPIVOODMXVLIHPFLXNLKPSQUTFVRNDUAQJZRVTNTJXBPVVDJJWYKIBGWFQSKGCGS");
    msg.plan_size = 16141U;
    msg.change_time = 0.776529598556;
    msg.change_sid = 33796U;
    msg.change_sname.assign("RXHJOKZEMWWADESRYMYABXBBINIUPYYZLGSFNTDMRSSDTTOWRDASAZTNJMOUEMHVHLQUMINMYMYDFRONFCCAPUUCROLVX");
    const char tmp_msg_0[] = {34, -79, 71, 18, -115, -76, 65, -49, 14, -19, -118, -78, 10, -112, -19, 58, -110, -79, -128, 36, -56, -33, -38, -90, -75, -49, 75, -38, -11, -65, 109, -112, -24, 80, 81, -89, -101, 67, -23, 75, -95, 116, 30, -30, 114, -115, -76, 65, 122, 125, 37, -111, 24, -1, 111, 4, 36, 26, -13, -125, 41, -118, -93, 65, 64, 124, 53, -36, 4, -83, 85, -21, -116, 35, -127, 94, 76, -26, 87, -48, -61, 88, -94, -90, -97, 62, 92, 22, -82, -57, -66, -119, -92, -3, -105, 68, 9, 119, -16, 107, -96, 103, -109, -4, 116, -35, 77, 43, 80, 80, 40, -7, 13, 121, -95, -88, 68, -127, -66, 80, -5, -126, 71, 38, 58, -96, 80, 6, -36, -54, -37, -80, -33, 37, -61, -92, 62, -48, -73, 49, -47, 87, 16, -40, -90, 21, -117, -6, -27, 74, 26, -30, 48, 34, -104, 61, 5, 74, 61, 59, 38, 90, -58, -43, -117, 51, 30, 79, 119, 102, -101, 36, -77, -54, -18, 73, -76, 111, 97, -101, -48, 55, 89, 126, 55, -3, 13};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.577470380227);
    msg.setSource(21788U);
    msg.setSourceEntity(202U);
    msg.setDestination(47480U);
    msg.setDestinationEntity(166U);
    msg.type = 164U;
    msg.op = 124U;
    msg.request_id = 18962U;
    msg.plan_id.assign("ADQPMCRAWEULCUKZNDOFYONANMCHQCAMGRJGLITAOBFVENGBJDDBYGIESDCVXMQURYSQBVFHTWKXYVVPVUZMPEUPCEQBTNKOENRLQKBZCOAWNHEZKWTJUVBPFU");
    msg.flags = 46678U;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.208338165316;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KKAZQYBAMZIVLFSCRNHICSAYQOCJEBBRQSLSUQCDVOHAVZYLZKILKPSDPQZPMAJLSDGZMFVHFPFKUSNEMIYETXTOHBLVJXYMKQGTIPNBPVJERPASQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.0840768383695);
    msg.setSource(1061U);
    msg.setSourceEntity(246U);
    msg.setDestination(59516U);
    msg.setDestinationEntity(13U);
    msg.type = 120U;
    msg.op = 102U;
    msg.request_id = 52030U;
    msg.plan_id.assign("UUINKQLMEGFHDNPWDBHREGGYEWBHCJFTCQVWWAMQMTGOKJKETGBROSIVKLYSXHLLWVS");
    msg.flags = 21050U;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 63U;
    const char tmp_tmp_msg_0_0[] = {7, 119, -52, 37, 16, -41, -31, -119, -106, 78, 35, 104, 101, -60, -93, -111, 88, 48, 96, 113, 116, -104, -56, -21, 109, -46, 6, -4, -115, 66, 74, 62, 49, 103, -104, 75, 28, 114, 73, -63, 84, 81, -108, 0, -51, -13, 70, -90, -108, -46, 1, -97, 60, -26, -23, 5, -32, 100, -17, 17, -106, 23, -123, -48, 63, -86, 24, 23, 90, -30, -127, 24, -16, 114, -79, -98, -70, -123, -128, 97, -42, -82, 17, -27, 57, -54, -114, -22, -2, 32, -16, 56, -100, 120, 3, -51, 111, -66, -48, -48, 73, 53, 95, 10, -29, -36, -61, 1, -124, 0, -24, -22, 14, 111, 30};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TERBCABSOPBKHEKMIXLNPQGEPSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.343385695504);
    msg.setSource(54255U);
    msg.setSourceEntity(207U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(86U);
    msg.type = 193U;
    msg.op = 112U;
    msg.request_id = 32567U;
    msg.plan_id.assign("JDLKSGEXTSFUAOTHUILNQSKKMHFBUIPFOGZBGALXJQVRTPXZFSTDUFRVNMTZZXHNKCQWWZPASMHDXZKOSUMCLPFYYJPJNZDLKIVASJDKSURZYGEGIOYDHMFCXEYOYQRRUSOBCWOLMHRVLCPCHNRIBOGUERYMZXPQEDNPBYDRYAXKWATAVVTUJTTPPOAWMEJTXCYRHFDVGZNAJWEULVHWCNLBWGVWXBSW");
    msg.flags = 47438U;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 5956;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WVCWUTMSPWGFVRUVLKNLQODWUYTZUPVCPPGAKRBHNLYQUERJOVKBGBHIEAAIUSDMUHWRHXZODKPNBCZDTFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.692222071636);
    msg.setSource(41588U);
    msg.setSourceEntity(77U);
    msg.setDestination(14685U);
    msg.setDestinationEntity(67U);
    msg.state = 50U;
    msg.plan_id.assign("TONARHQVBZUQNOQNIEPHWIBHHETAHRFGLFIMHQMIGEXERXYGYNIUFACS");
    msg.plan_eta = -988951096;
    msg.plan_progress = 0.350198765206;
    msg.man_id.assign("GQUVNFBQXPNEURHUKWFYOHXEQYGZOTPZOGTJNCNHLCSHYFXKENVENIIQEOUYPCSSKCMPGQRXKXSUG");
    msg.man_type = 21560U;
    msg.man_eta = -1123116073;
    msg.last_outcome = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.82338231575);
    msg.setSource(64515U);
    msg.setSourceEntity(167U);
    msg.setDestination(20585U);
    msg.setDestinationEntity(65U);
    msg.state = 33U;
    msg.plan_id.assign("SZDPJJKFNXVOSRLHEQZFEPWVIZBGYHZKKKKXHQOPPNAJNZDSGQVTACTQLYWEVXQURMYPFUVXXFQHOACRWSLMWODHOSLXMGEXGFBUOUSKPUHCAMQAIUITLLNWQFW");
    msg.plan_eta = 2077963298;
    msg.plan_progress = 0.481684504389;
    msg.man_id.assign("VZBVKCFZPGTESNLKCDIUQHDUKWIRPTKCQGXCPPCJJCYHMWWZFQYAFRSAJUYDSOZOXLDZQZGVIJXQXOJYWIEWZGATCRYSQBLTBKZRTAGQNATEGMYLVBDASMHOMZDGVVUQGVABRKPYHVXUPNFMKCFTPWDUJRSCGELHZDPSKBIWO");
    msg.man_type = 46709U;
    msg.man_eta = 1508544701;
    msg.last_outcome = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.905336459538);
    msg.setSource(64877U);
    msg.setSourceEntity(240U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(192U);
    msg.state = 237U;
    msg.plan_id.assign("QJAQMUATZGPJKDKOZTJRBZYTHDFBECWKCFDSWUKJXMDNFMTTTWAKCDGVXBHSSFXIRGCPFNJELEVZVRUYYPMALNIYTSIHGSLAFUEUIOFQMLQB");
    msg.plan_eta = 1230818382;
    msg.plan_progress = 0.37907328436;
    msg.man_id.assign("RJPMBCXQXYWUBOLAQXYRUCPRBHIQTTXSFDMCMDYEMVSPBSZUAWYAGDQHZPZKXLYTKZWHMQHNFFQALFXCNCJGSFVYWIGAEOLTKUXEOWFQMWEHBQNRGECJGBLNKRKIQROZDUPAATOMHDPZVTRLESWHJNAKPYUZUJGFGTOKGJVKRLKIBZDSPJVCDOIMGNNMVICVJBWQFYDNSEVTRLUUNBIFGBN");
    msg.man_type = 39626U;
    msg.man_eta = 874228822;
    msg.last_outcome = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.298025607195);
    msg.setSource(53514U);
    msg.setSourceEntity(100U);
    msg.setDestination(48002U);
    msg.setDestinationEntity(228U);
    msg.name.assign("ZDYRBJKRKWHDIUFPSLAEVENHPBZAXMHSIJWWHCVDTTIDFBETLLEURJLCYSDUTZNKOMVGSUMAMAPXXWXHJFDQOAGTZFNGZEVYERRIYTTNXOSKKOVOBCQIGRREUYWIQSSECMMSCKHXACAPPFTCIXW");
    msg.value.assign("PBOUTJXRRXQYIJZJJAKAIAJTHPISNTXKWXCBFTKZBBBXVWMRUUGFKHWDWNCWYBJMGHSMKLDQNZWATYUKZNRLBNCPQDIEJEQVANSDYFGDPMUEHFMLMJUDQKNNMPEHDFEKOQSBRBXYIGVKTRWHLWSAZ");
    msg.type = 166U;
    msg.access = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.411178468782);
    msg.setSource(61734U);
    msg.setSourceEntity(105U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(6U);
    msg.name.assign("AYVREXRNQRBJJDCIOEIUMGED");
    msg.value.assign("YSKXTPHCXYMDIBTHABANJTBJRVETHFYEXOPLKFBRKOLGQTUYSOCHAZJNHJLXJIPHNDZKBYLSHSALQOICGGJMVGHXXVVQTJBFTUGGDMHUKIXFBWTEWWNFGEURPSOOQYTMPYUVGCIJAETVFIFWWRWJRDLAWACWIMMMCXGDUIKZKFNDKSCLFLOUPZDNFKSAZPBMZAUAZURZZRKQVEOLCQLIMEESBU");
    msg.type = 83U;
    msg.access = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.119447724021);
    msg.setSource(17793U);
    msg.setSourceEntity(110U);
    msg.setDestination(51206U);
    msg.setDestinationEntity(14U);
    msg.name.assign("GNTPVUKAWXHOOOWOZZUROKTXVQIGTSTTVSUABPKBQPVIJMNYPSHMDIOQFKAZYNH");
    msg.value.assign("HFUNFDCGNYYQIEOFFQDNVIOWWBMSYBRJVTPTSGZYTLGFBPKGDGJHLN");
    msg.type = 235U;
    msg.access = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.884874665773);
    msg.setSource(38609U);
    msg.setSourceEntity(32U);
    msg.setDestination(1012U);
    msg.setDestinationEntity(43U);
    msg.cmd = 236U;
    msg.op = 30U;
    msg.plan_id.assign("UMXRUYIBEEEVHPTPOHGKKOBCGVIZLJBZZTETUKWDUILOS");
    msg.params.assign("HSLDSYANIWTTTUDPTJXLGOFIMQEMYELSOTRRVUBJYZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.614608909807);
    msg.setSource(65439U);
    msg.setSourceEntity(132U);
    msg.setDestination(21777U);
    msg.setDestinationEntity(51U);
    msg.cmd = 14U;
    msg.op = 127U;
    msg.plan_id.assign("QLHVVOLNGAORLIEFFBUKXBWCAXOMKWMCDFMFHHTRXAOQBFZZTFCJSUESETCANZJORLTBKEEHXCHQOQLQMBASYRZKNPKSHIRPUUGEIETDZXIPIZXXUGKJIGVNBANUPVLWCSXYVQKLODURJH");
    msg.params.assign("QHTDIJOYDRGWSUHZDBPNWYMBFTNXVEIPRESMCKRAIPCIRAYKYHQLNPFQLQPNVXIGEASNJBMCUPAZACGKGPSUFRUOYUWBHJJVCEDCLOESJTNEMTAZJAIWUWQXZFJGXSDKFYBVVZNNMNEMIEKHOLWGJOGDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.250078171053);
    msg.setSource(11395U);
    msg.setSourceEntity(58U);
    msg.setDestination(31548U);
    msg.setDestinationEntity(226U);
    msg.cmd = 173U;
    msg.op = 164U;
    msg.plan_id.assign("VJFVNBWSUTIFNQCQFZMUZLFYDKFWBSSGCNVMKDJFDOVIIRULOEYCETBWKZPAOAAKYMMBTLQHXZMTAHKJZMHLIEQSI");
    msg.params.assign("HKLDMYTXXAHITUWGELZHCXRFSLCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.620913469798);
    msg.setSource(27491U);
    msg.setSourceEntity(30U);
    msg.setDestination(6881U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("QDPGAHTWJFEEWCXBFCJMVBBZPXFQSXRYHKVQIJOKTEBXLNYYRKYOBUMGUKYTMGZDVWGOVGXHJBRNPPLHILYAQIXBMCKQKLTCLJVYZHWVHBQEGDKZQTEHJC");
    msg.op = 139U;
    msg.lat = 0.090987177806;
    msg.lon = 0.761041505324;
    msg.height = 0.311231873118;
    msg.x = 0.156562052706;
    msg.y = 0.840724682906;
    msg.z = 0.709750949599;
    msg.phi = 0.35252651907;
    msg.theta = 0.919651310626;
    msg.psi = 0.827895057037;
    msg.vx = 0.837454501977;
    msg.vy = 0.798273014912;
    msg.vz = 0.233631079151;
    msg.p = 0.910332092039;
    msg.q = 0.927060854943;
    msg.r = 0.560542738522;
    msg.svx = 0.376117985564;
    msg.svy = 0.679028268897;
    msg.svz = 0.777221468954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.955316644869);
    msg.setSource(47462U);
    msg.setSourceEntity(123U);
    msg.setDestination(52425U);
    msg.setDestinationEntity(209U);
    msg.group_name.assign("CNWVPWSGTHLFGHECRMNNTWWBEFUKSZQJQDYORTYMYVABVYMOZCZETGLHKAYFBSXXYJZXZCUVQPVFNBXIFLWDBBOEDHETASG");
    msg.op = 238U;
    msg.lat = 0.93953964292;
    msg.lon = 0.350367702641;
    msg.height = 0.303337640446;
    msg.x = 0.329334758945;
    msg.y = 0.202358746431;
    msg.z = 0.32650599218;
    msg.phi = 0.95600210806;
    msg.theta = 0.44920937324;
    msg.psi = 0.126399516883;
    msg.vx = 0.639432366372;
    msg.vy = 0.879453566975;
    msg.vz = 0.186920640191;
    msg.p = 0.457196102368;
    msg.q = 0.930448596505;
    msg.r = 0.895293119335;
    msg.svx = 0.579596611058;
    msg.svy = 0.825025106077;
    msg.svz = 0.504299954806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.820633875848);
    msg.setSource(24191U);
    msg.setSourceEntity(160U);
    msg.setDestination(58202U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("PSGVBPBKAXCKJCSPFPLXRRZLDPDGWPTHXOEQEFEJREVVKJLGXITHTARQNMVXUFGMIFZUHISLYUSLIOPSYLHEYOTRUJNEGTVCDQTZKXWRTTWBLLOCUYBKJPGVLCHXVDRZEQRYXVYSBBINFAGMBLAKQBYFJNDCRDYHHZNPJQOWTUSMDMAGCKIZSWMWAUSUCAGJAOUGEMVNWQBNXWNZIHCYZOOWWAE");
    msg.op = 101U;
    msg.lat = 0.583810196113;
    msg.lon = 0.215841938097;
    msg.height = 0.448905465702;
    msg.x = 0.164852483091;
    msg.y = 0.515724777461;
    msg.z = 0.959074955466;
    msg.phi = 0.0692507605909;
    msg.theta = 0.773487172855;
    msg.psi = 0.142120734242;
    msg.vx = 0.29023422725;
    msg.vy = 0.423441709186;
    msg.vz = 0.632392555966;
    msg.p = 0.522391351528;
    msg.q = 0.896708354711;
    msg.r = 0.0071697565575;
    msg.svx = 0.0820371889625;
    msg.svy = 0.725618649539;
    msg.svz = 0.498795811202;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.12777095071);
    msg.setSource(56450U);
    msg.setSourceEntity(252U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("HSBTGGSLZWIBDUOEEARUXXOLVJQWUUCEPTSDGCOJQUVPGZJRPDUFFAEMOLJXYQTBPUEUFCONYSMFMMFLNBNPQQXQKWZWHNUFEGQCOBCETNVRWYPOTLIDKJVIIYXJJSWZADKJXZSDDSWQDHYBGZFFJZ");
    msg.type = 59U;
    msg.properties = 58U;
    msg.durations.assign("MNMXRAZNEWBGVIXOPAFTGUXGIREMPVPMYZRYI");
    msg.distances.assign("OQFIOJKULXXSRNWSJLGSNJJLRSNVBDYPCCCHMLCMFJVKRFPYXRKRGUWEJAGSMTIHTSOOPIWTEYDMDYKWXVOMIXWUGWNYEKIQIJNYEEHAPXQ");
    msg.actions.assign("LSXUWEBBVSOZCZQULKQXKOUQOGYMXMKTIREHYIRBEOHYAQXVFORKMYGPHKVJHLCUIZTYLZRLTTHTBGCGQFGHKWLQPNKANDBPCGUBPSIPJSWUXWLZIWINAWJKNLZJFORUANTCGVCCZLWMMFZAWVVCQQZKPMYPZSEDFGMXBRFONMUIGQNXUDMNATOPVJIDRALWFMOXTDYFOFIGRSPHEBYAEYFJNXBBCSVVAHPSSKVHDIJSEHEDD");
    msg.fuel.assign("ZKOZZNVSPXQPLFYHRTQZSIFKFGGYBXEWPDEXMEZWTROPAWDALMQLOREOUPFBJZJLGHFKUVHTGGUSYSDGVIYBHYGMTAQIRBGSAJDVAFAJNKRIPXJCXSMPNNHBNTZNLCIJQEDCOXNWEQCGRYMCVPWUQXKLGBFWYINMLUFCJZDAMFJYVFIVACDXBUWZJYLKVRTIKCSDEEHOUYOTQROIXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.976831244236);
    msg.setSource(58604U);
    msg.setSourceEntity(105U);
    msg.setDestination(22841U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("CEEYMISKKMZWZXHWVXNMELUHVBNUWJAIINRFMPWXISTVBDMQFRSLLOYCBAGAXTKZSKOESUCNMQADDBNNEQPZJD");
    msg.type = 60U;
    msg.properties = 5U;
    msg.durations.assign("IVHUKXKHQVILVWDYNUUJUTHVONINEBROIBMISTOQLQBAJMCIYMEPPAETUNWECKGPBDGTLCHOYSKWJGEOVVYWFPZAHZYQJRRGRFZMBQXAHHMBL");
    msg.distances.assign("HVIWJXUJONPZWZVEQOZOJLGLMUJGNYORWXMCZJGKBELFDRYOJGFETKRPEWJMDDMIFECIZTXCRHQTGTMYMCVVRWCTKVBS");
    msg.actions.assign("XLEGZVBPZZHNSUKMJFFRGEFSJSQKPNNHRRZPUTFLHQLSFMHFRXLKGCJ");
    msg.fuel.assign("IYBKFBGZMXVSKYMMQHYQRJRKTNPRUVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.862337716378);
    msg.setSource(7818U);
    msg.setSourceEntity(87U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("UIFGWLRMDTKQNNI");
    msg.type = 172U;
    msg.properties = 153U;
    msg.durations.assign("PVPWSIFBMFITZPQDSLWQXTKZCBHUVAOAMDYNKQNTBICTSHRGQQVOEXZCACILWDIUNQAXCHJTUZNBACCFFPYNUWPKKOWIDMSELOQVTUEMGBJMZWXFUYLTSJMCCPHZEXDLFRSZGOJGHXHGTKLIYFQNLTOYUEPNBUUSYQGJMNVDRHSM");
    msg.distances.assign("HMIDRZPSSFCSUVTXELTLAYQUNHMTPBAPCDHNWGQYVVWXYAJKKNUDHLATQJGPZLJDKLWTITEAIKFIUPFWOBRMFRLJGDPWZSYBTZHMJNGMIBDAQUXRFRVZMXNFYMYORDNGPKEFKROPXAOPCHRARHSGCQONICZLTXZTJIHGEKAWMKCFOCYWMSAFNSKKJEQCTFHGQVQUOINOXRXJ");
    msg.actions.assign("BXFVQAFFIVWVZSMNATGIDQKVKJROKTIMITQPHUOHDASXEFPNWRVAVJMULKXTNUXCOPQTWZICTRBIHQFKDPWLBMIKCJPOXUOWSGZJRBVPIKYYDARGCBJWMYLZAJWPUYCRXJVOMFLDUQJZBRPTXNEXYVLFKEYQDYADENNHESYTGTACDGXWBTJFUQQECNFOVFPHBDZMQUEGHBWSRSKNHSYGERLSGUMSMCAYKGSNEZGWXHOZNEOZPLOHZMHUI");
    msg.fuel.assign("UBBHKRBMLOCTXQJOTUZPRHJTXPEUFACGAGPGTVGPZBESYIRDJFYQIFSOPFWWFXBULWEEAKDLMFYXJMYDVDJGZWXUNOSRMNNBQNKEGRDUPMPSWDJHIGHMBQIVPWVQCQUATCBVZLSCNHYYPXCQLZESTWDSGKWDVXLTIUIALROAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.955326225219);
    msg.setSource(31217U);
    msg.setSourceEntity(46U);
    msg.setDestination(17639U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.665193880221;
    msg.lon = 0.41203125884;
    msg.depth = 0.00892215658114;
    msg.roll = 0.571174859685;
    msg.pitch = 0.38365524868;
    msg.yaw = 0.234988552198;
    msg.rcp_time = 0.106216427615;
    msg.sid.assign("KTNDBOKUMFUQPXVSVMOXIDLMTLNJECHBZPNUAEMHIKQHFCSHBXYGSIUTCLRLOEBTUVAPVWJSAPWZIDHHKCURPUWIWYMPJKSQTLGZJOXWUIZFWYACDQAALZPMKKLEVZNJJKNDMBTURTOEQQOLAGYGKNIIJGVOSRFYF");
    msg.s_type = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.511364400236);
    msg.setSource(19162U);
    msg.setSourceEntity(58U);
    msg.setDestination(25536U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.919791077823;
    msg.lon = 0.214936218942;
    msg.depth = 0.638535943553;
    msg.roll = 0.56452116862;
    msg.pitch = 0.741642965031;
    msg.yaw = 0.92249912709;
    msg.rcp_time = 0.89547936611;
    msg.sid.assign("ECVSFUUKNQVCJLJSMGEXMC");
    msg.s_type = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.0023506190767);
    msg.setSource(32907U);
    msg.setSourceEntity(102U);
    msg.setDestination(64507U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.670586974531;
    msg.lon = 0.618784065803;
    msg.depth = 0.988790084284;
    msg.roll = 0.464680554589;
    msg.pitch = 0.917752904507;
    msg.yaw = 0.0140918799555;
    msg.rcp_time = 0.563184752754;
    msg.sid.assign("JBSBZFKRZEIGAMLPNQODZVHNQIMXLCXHKPOEJLNMNPWYBACEHEKAWZXCIBCFQJGZOUGRLROBHDVPTFFRIUDHZEPDZQUXXIHLLGWEOSUVKMWXGNUCDLTAGHYYKYLTAQPVSYYGVSSOSWQGYQAUJMXYNCRJLBJRIYEMPKZCSDFZMBXBCGNDJRIHXFLUTORIADWTPUWKPWBIHVQROKSUYNETNXTATNECROVKTMHSGJFFQJTOF");
    msg.s_type = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.528216953607);
    msg.setSource(46951U);
    msg.setSourceEntity(163U);
    msg.setDestination(12859U);
    msg.setDestinationEntity(211U);
    msg.id.assign("CDQDONHZGYFYUNRUBJZQYZHEFMVPTNIASZCYHDBIVEMTMQASFWMNTJOOJIRZUWZMXPQJUWIIKWQDDGIWSSJOLEEEEV");
    msg.sensor_class.assign("IXCPBIFUDERPWYKCXBPPAZOIJDSQJMHFDZKVFGKOHONOOXTWOHNEHMAVWSIGLHVVKBBDLOGYZLFJQOVJUUJMIWZLMYZIZSEAMKPMOTXRSTKLVHEXCUFQCCQTQLDURNSPQCHRQDAJNPKY");
    msg.lat = 0.539043748233;
    msg.lon = 0.982735254157;
    msg.alt = 0.935084485103;
    msg.heading = 0.53889583619;
    msg.data.assign("WJGAEHNWIJHGYFQPSAGIVASRCMUIPWNLRSSCKVUFTGOKCAKCEGRHUPPFISTZLRVFOMZRYNVEYEKQWTKHNYBMOZPNSDKPVLJLGUWUUBMYYYBQDQZOLHDNDOGFPLZOBBQBILIUJUBRXXMQHICCWXILXTAVIUILRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.595601761319);
    msg.setSource(47170U);
    msg.setSourceEntity(63U);
    msg.setDestination(56116U);
    msg.setDestinationEntity(191U);
    msg.id.assign("DQMIDFWPUMITRSXRPOLQZTAVVGKPAWKNZHZJEIPYQPZEWJYRIYUFTEBENEFPNQHWGTYLGXBAVIHAXPBRUTJUXCSCMSNQDKHOMWIELPPGFISQZBCCOERAYWHHYXZVRAKUFJFNWNEXOEJCGJLCDRGTLQOPBCAOZRBSNYFRHMUXRKNMXFLOATDIBDLHTVZCXWYQVZVQMOVXBSBUVSLIGUUOD");
    msg.sensor_class.assign("ZIMSYRTEXMQHVHHNGRUFSFPUDZMSCIQOWQDSOCAVWGDQOYGHBDNZTHVVSSKYGPNTMDQUYJBEWCISNRLYXJKVVKJBXBGFW");
    msg.lat = 0.880356760448;
    msg.lon = 0.880887003383;
    msg.alt = 0.62381345434;
    msg.heading = 0.402161402106;
    msg.data.assign("TKBGDWPQJTSLIEPWQTGRERBJCEWLHLMBSWYGFRQCWNAMFHHXQRDOOBVRAVSFOVZRVDIYZPHSLXKNLVBBQDDUMAFSFWIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.776405966032);
    msg.setSource(22793U);
    msg.setSourceEntity(201U);
    msg.setDestination(23623U);
    msg.setDestinationEntity(100U);
    msg.id.assign("ZOWUYEHFBBQADOWFBHAJSVYESQMPNJYDGMIUGYNREXIZBZIHBTUAMVMJPNDXARVNSFQLCFTKACPMOKTWDNUULXZWJJEUDXCWRCLTMAUFRBESVBAPKVYHFXPDOQCQYWXXHSPSUMYJZLYOZHNLEIQMZHXGNRAEFXDOGDHWRKASNNBOCHVRLKE");
    msg.sensor_class.assign("KQLONPHAHJXZQBIZWKIVOCKVVGESRKPTVWAUWTULECFGAMCKYYNYDKOPKYWIQFJZMHHJRUUJQDPNHEXXSZIOINUTLEXSXXMDSEBBMIIDFWFDKJABBJWFQHGWDTTOUCASEMUSSNSSWEGMMNJARVORGGZYUCV");
    msg.lat = 0.539355636701;
    msg.lon = 0.328526963288;
    msg.alt = 0.503883609198;
    msg.heading = 0.0810078811029;
    msg.data.assign("XBTYLIJBQTFDCZLTQKLHITNIENEFQKVERHCORDJMEDYCRVNPPTBKHCCVOSFDQWKXKPPXZZMYRAZEEIUDQFAGZQJITUKVBXLGNMOTSIQMPQOLBEMBKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.22040022618);
    msg.setSource(10599U);
    msg.setSourceEntity(14U);
    msg.setDestination(8811U);
    msg.setDestinationEntity(12U);
    msg.id.assign("QHTJBDIRYXVULRMLUFUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.688882000807);
    msg.setSource(23330U);
    msg.setSourceEntity(166U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(73U);
    msg.id.assign("EVNITPDTANQMNVGTWRKKRSTLIXDYDENAPLIFYSASALCVIJPUPKBUFHZCMEZNYIVCRMMFDPGBOXBWTCXJGZZQVUTYNQXXQHUOOHBVJWEPRPROLLZQECBWSGQRKSKEJQBHJEBLILHQKCGNZYCJNYPXKELEYJHZOCFMXQOZUWFTATXOUKSKHUWWDUAFXDCBYIMVLBGOHIZVOGSCPADERDWSXOMUFNAAKJVUMSYNWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.630838589636);
    msg.setSource(36709U);
    msg.setSourceEntity(15U);
    msg.setDestination(21997U);
    msg.setDestinationEntity(254U);
    msg.id.assign("IPAEEVYHUVVUTCEHETRPQTGZZHMKPLXVSKGCSDDBQSRDWZSYLWBJHJUZPQRZXGRPC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PENSGVGZLYMHRFXQRZNFXCNXPQNKOBWQDUESIBUQUOAVYOGWJPJNXLUVQMFFGOEBUOECZCGHHJRIZUYOJCWDFTSAWIEPNWBXZYDAYSGVIZJCTIXMTZQLWLKZHQPTBTERTIFODCUCXIBMMSYFVPHM");
    tmp_msg_0.feature_type = 155U;
    tmp_msg_0.rgb_red = 27U;
    tmp_msg_0.rgb_green = 36U;
    tmp_msg_0.rgb_blue = 227U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.949707979163;
    tmp_tmp_msg_0_0.lon = 0.218395132855;
    tmp_tmp_msg_0_0.alt = 0.613136944376;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.728064238864);
    msg.setSource(1311U);
    msg.setSourceEntity(37U);
    msg.setDestination(43011U);
    msg.setDestinationEntity(250U);
    msg.id.assign("VXNPNQZALBPYWCFHYCVSGZXCFISSMBECVMQNASCXKCTOIIUNWTIJUJNGVRIPKKWOSLJVTPFTMWACIZJMPYDAWQZLQXOQBWLEHIZKHHREEZBFPCRDKYPIFLLYTXEJTGHNATOBAORUFRGETUUUOXMWHKULIGQFDNGXAQSSDYQKMLROHVVJJBYMMHLCZRXFBWBOZUNDJZSTQBXLADURAVPEEKHVICGVZPBMEWYKFYDSRTY");
    msg.feature_type = 70U;
    msg.rgb_red = 245U;
    msg.rgb_green = 184U;
    msg.rgb_blue = 153U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.980214939537;
    tmp_msg_0.lon = 0.303668866306;
    tmp_msg_0.alt = 0.516187280567;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.328494079777);
    msg.setSource(3762U);
    msg.setSourceEntity(4U);
    msg.setDestination(5669U);
    msg.setDestinationEntity(221U);
    msg.id.assign("YARIWYMDUBCXMQZLABBDJOTUVLHPJFWIJKFDBRGPAYFGOBXZHOCYEDMVKULHZCVNCVXSQLZRGLKRPAQZTNSYR");
    msg.feature_type = 215U;
    msg.rgb_red = 252U;
    msg.rgb_green = 251U;
    msg.rgb_blue = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.981802999676);
    msg.setSource(30471U);
    msg.setSourceEntity(86U);
    msg.setDestination(37242U);
    msg.setDestinationEntity(157U);
    msg.id.assign("ZTPSWIGUQRJSKBTOLWQIQWEJGMHIVMSTOCIOLABEOD");
    msg.feature_type = 77U;
    msg.rgb_red = 72U;
    msg.rgb_green = 214U;
    msg.rgb_blue = 100U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.156204978572;
    tmp_msg_0.lon = 0.416121614848;
    tmp_msg_0.alt = 0.952529279731;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.395401500395);
    msg.setSource(35010U);
    msg.setSourceEntity(107U);
    msg.setDestination(56022U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.369428902868;
    msg.lon = 0.571830868863;
    msg.alt = 0.557064743145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.845265694956);
    msg.setSource(38274U);
    msg.setSourceEntity(236U);
    msg.setDestination(30551U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.891768809248;
    msg.lon = 0.461004917999;
    msg.alt = 0.496744120044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.818018844172);
    msg.setSource(43349U);
    msg.setSourceEntity(30U);
    msg.setDestination(59573U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.18304893413;
    msg.lon = 0.228269701805;
    msg.alt = 0.00125105820315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.606880611061);
    msg.setSource(14551U);
    msg.setSourceEntity(97U);
    msg.setDestination(53072U);
    msg.setDestinationEntity(120U);
    msg.type = 251U;
    msg.id.assign("PWXDWVBVMWVCXKJGHCUSIDRYRQDATHYCGBKIAYNNQWFLHLHICZDLDFFJUYWLAPHYCECQJSZFYKVRUTIICFUVLXIWJQTRZZOBXPNDPKELKKXFTZNAAPYDKEUZGNMJBWAUAGFSMQMIVSUJOQQFNVTXKRZBROJXUEWOYGSEYORAFJDMGIRHOMSGULOXSMRWLNKHETEPWMYXQE");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 59906U;
    tmp_msg_0.rpm = 0.458211898375;
    tmp_msg_0.direction = 222U;
    tmp_msg_0.custom.assign("VWYKHDAVTJDGZKZYHAPIQKHUQOCGGFNHYPCXGZBIDWGYGVODY");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.682287189185);
    msg.setSource(64282U);
    msg.setSourceEntity(192U);
    msg.setDestination(7139U);
    msg.setDestinationEntity(51U);
    msg.type = 118U;
    msg.id.assign("QSBNXWJZHDBPIVXIPKBEMQBPWAJMPEURRETQJMFIQWWGTHKSLWRVDXCKDEFAYTPKHYQUWXVMBQPUVKVSLMSTAAVXIMEOCMYZUZHJWZHMFZHHGFRYOEYZYICXLCBWONHRROXYQILNWDDDJBKYQLIAPKCTNBVAATNFGNVANJDMGFHUUYTELGPNUAPOSXXTNSOESSFZMCIBNLSJGCOKPKKEJLXLGFGGCDQFRHACUVEJUUIZIWQRVTDODJF");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("XKFZSTRMNZFHREVDNQWVWDAHYGBVMIZEYPOSGZANGGMSMXWAEYWDUODMLHZGTUPJLFMSJETNTUZCIBMGQVLBQUSHZDPOKOVICKWDXDLIKHWQRTKOQUCSMPBPYBWLSCCNHKXNRYWHUUELCUOQNUPTACIQGALLJKRATXCPREFMTNXNSVIVGXJRJBYJDFZSIEAWVKWKJYZXULYLBOIGPJJ");
    tmp_msg_0.message_id = 57694U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.00792132683789);
    msg.setSource(58792U);
    msg.setSourceEntity(80U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(42U);
    msg.type = 102U;
    msg.id.assign("GDSMTXZMJHBKERBCFSBWRYLBBKHESIDGWIOXQNNWVAJVZIDMKGNYKAZCKVPQJJLKRNSCRNTHRMBXMLGLGTHSBUXVQHTXYU");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 10316U;
    tmp_msg_0.sys.assign("ANGEWGPXJWCLTGDIMYBTQANHIMDZHMPVFMEQYYNDZHAPAVPSJXQLBIDJEXPXUNGYCOFMIWQUFTCLKHSQPPESNRXCBYMUCVHMEXRKDWKRTVLVIWGUKRHQRUDMBVC");
    tmp_msg_0.value = 0.460843249723;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.550923520592);
    msg.setSource(39949U);
    msg.setSourceEntity(60U);
    msg.setDestination(28576U);
    msg.setDestinationEntity(157U);
    msg.localname.assign("FGGGZWZMMDBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.271223289304);
    msg.setSource(47627U);
    msg.setSourceEntity(12U);
    msg.setDestination(59619U);
    msg.setDestinationEntity(138U);
    msg.localname.assign("XMYQUGYJTOPWCNOKVRGNYAHWEBFDAZOZAXXGLPSKWUSQQSREAOAPNZLMJVULGCOBXOHHMXHROZYSSBCTRBPVGVXCSVQWUTTLEMUARMIVOPFCZJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.224769013602);
    msg.setSource(2665U);
    msg.setSourceEntity(226U);
    msg.setDestination(64575U);
    msg.setDestinationEntity(237U);
    msg.localname.assign("NCCLRUSIHJTVTPBQQHKVGAUOSEZWGNDUCJYMAVTICXOKXKGQINTQHGBNJUPPCABWYRRUFLZJLWVQRFRTKXENUHQICOPBMTBIWHSUEFFYMAFJEKENLVQAROJUEKXARLGPMYWZYKCEQFYOARGZSNBZSLJWOHSFDBIAHEPMTJSMDKDFYLJNTNZOMPBXFYHDYGVMJVZECH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MYICLFZXIGJNDCDGCNVHMWKIBQSKRXAXHQUBYETLDUAYGPTFQOCHREXTATOULWUAGOERFOJMJMZSJAVSQZEZXBLGLQHIVZQWYRPUUENIEWRKVSNOHXXIAMYKEHYPTEXENRSVPQMYDTBWRKBCPAQDCYJJHVFNWKAQBZGPNIGAKNCPPUDXRJPSLDBFSGUOOBGQDVPCTXYJJYJFZLRHKMVUNMISZ");
    tmp_msg_0.sys_type = 247U;
    tmp_msg_0.owner = 56124U;
    tmp_msg_0.lat = 0.736792678559;
    tmp_msg_0.lon = 0.428229709344;
    tmp_msg_0.height = 0.0442122064874;
    tmp_msg_0.services.assign("OKNHCWZQETFZJCVBSVVYFMXBHHQZYOGAAMOOZTOSNLHEBSGAPSBHKZETMWDQYDAFIIYPKYDXCZQGEQJIWPKAGRVQ");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.821100404167);
    msg.setSource(20329U);
    msg.setSourceEntity(129U);
    msg.setDestination(60653U);
    msg.setDestinationEntity(75U);
    msg.timeline.assign("YLLDDGMVYXAXJFWZGRVWTLO");
    msg.predicate.assign("CSMTQEMRGCFUEBHWNDWKHFDPTTWAWKXRAZTMSQJTMRNGPUGLPCSRNDAOTAUJNOSVRGSKMYEIDZPUZCLERUZGXINPDWCFHQYLGOCZTOXZKKPBVONTDWYJLJGHHYXKSQDDTFJPHNWQBWMSGIWCIHIAYXVMXJVLIVNAQXBOLBNMHEFYAWVPEVJLKGBKYQKOOEJSYFRF");
    msg.attributes.assign("YACGRUQYBOSPTRHJAWMEEJONVEQPMUBDWVQRBOQIOGNILAEVISSKKPHROTFNYWWQDKNHLTYTLZHKPEDKOIVXWCMTKWJBFIRMAAOZEMNQOXPSWRRDAVZCFJDCWPZZLUIZSFUMJTNZVLZFJOXFJVAXGZBBHLQEQYTSRDKBSYSEXUSGGWJLXFJYDKFLCTQAHIXMRHSKIVGCGPBGPIGCUBJYMONIXQXMDGLEKVAPNUURWXFHLDACYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.176493118718);
    msg.setSource(31538U);
    msg.setSourceEntity(106U);
    msg.setDestination(8687U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("ZFKUGJORXMUROGCPFRHLOTPDJXIRFADOUOVEGRDEXYGAPNBSDONHWNKNMWKGUSWXBGLXVBGNTNHSIPCILTWMLLSANQANLFLZEVZHDQYC");
    msg.predicate.assign("QPQYKGWHBMGBQRFFJJUOZVSARNNSJXRREROPJKTEBMOYYEGXQCBQMBFBCNINGACTIWORSPAHLTZUTWUFIDZKGXLQCHLCTWPLLPEHVMFQSIUWANWDCB");
    msg.attributes.assign("PJXNSLTPKNQMAGZKDISERXOUPLNEZGTUBVVERDCGEJHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.282802956092);
    msg.setSource(4707U);
    msg.setSourceEntity(139U);
    msg.setDestination(24724U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("YWSWEOOUVXWXJCTIHCAIORJVBEDTPNZEQKBMQOQYUSUXVAOKDQPSCNEZELHPC");
    msg.predicate.assign("MYGDHDNLHBZRYLLRZRHNFVBCGKOOYQTGIJEENFMJLMRWDVVSXMUCIBSCKTKJSAEVMSAAJDZPTYDUVHCYONOFSRDPFUPCUGYKNGJQCUPXWXINXZUXJQQEVOWATEWIGFSXJIJHXLFMOXBHWBLPGAHQASBDZIMLQUQWHTEEOI");
    msg.attributes.assign("SMAUUPVMAYVEVFJBNCEYQPBFAEBFDLOFABCWEWKUCLHTVKPYRGYADWHNNNRQZMXGDBWUPTCLBHTHDWCQASAQQXJYVFTTBHCCJBLJNTZYOKICRGAYMJDHRXLEPENIODPVIZXPNCOTFMHFSGWVWSIEMUTWKSOXUHZBKURMLIDCZXJLTKUZYMIDMEYWHENORSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.602059314175);
    msg.setSource(19172U);
    msg.setSourceEntity(73U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(57U);
    msg.command = 84U;
    msg.goal_id.assign("MPEOURYRZQQGEETHJGZIIBUBAEXCRSVZMFAQOVMAWYVZILOXGLUXTCXDZKKDBMFPCDGRBFUAMPVWINCSEVGBNQBPHTKTUMJSCSLNEWUGLOEXYWFDGDOSRTUYEJSHGGVITLJMUCXPHQNPJRJMBYCOJDEAZKANPXVAFORJWFLZRPDQWIFCKIYFCHFRNIJZQSXSYTQNOWTKNLVMY");
    msg.goal_xml.assign("TUJRDINQMELDMUPXBHYEGABHYVWSOOABDMNFGXHEHFUGUDSYSOWKTEWGOKXCGASZJCUOVQCCLMQTKVFWPXUMJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.516950928829);
    msg.setSource(9124U);
    msg.setSourceEntity(179U);
    msg.setDestination(39373U);
    msg.setDestinationEntity(98U);
    msg.command = 153U;
    msg.goal_id.assign("ZLRSAMBMXXFPKQCHUFVYDCRPLHQNYOWJRPTLKOLKGRAYJTODHVNNIFGFUUHWQANPLWQGSAVVVQYNBSSGWQZGBBGWLUFSGJZSWXQWROISFJOMPMPICYJITXEKDLYV");
    msg.goal_xml.assign("ZERWJHYHYSSLHCDPXADJZNX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.692809731719);
    msg.setSource(35612U);
    msg.setSourceEntity(93U);
    msg.setDestination(55746U);
    msg.setDestinationEntity(68U);
    msg.command = 87U;
    msg.goal_id.assign("YTMXXPCRRUKEKUPOYHPFGGMDHEVOMEMHTLAWSIHSAVFRQYLGYFNGUSXUCKERYGXVUTXSVJNNILHCHBXRIKWDSJFZTBWQPFUUWWQACTDZPFBODWYOBTQBYAYCDVXOXVEJSYZDFQTVOQVBNJBKDAOFZRMIVZMVNEWLWQJHPMNZLDFSGJCIEGGKJWAIPIJLIKNCLLBZWRJIOE");
    msg.goal_xml.assign("LYGRMMLIFXROJRLVFJZBIOIEWQIMJUVWWZQNYPZYFCTVRHOFNDNESBXRAQBCSIRDFNZXPLAHNVZAKTTJLDIXSYMTGUJTZYPCVEXZJKWHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.54837027804);
    msg.setSource(51097U);
    msg.setSourceEntity(155U);
    msg.setDestination(16074U);
    msg.setDestinationEntity(157U);
    msg.op = 243U;
    msg.goal_id.assign("JFWGGNOGATURTUENVSCKHBDQCPGRQZVSSSWYVOEOJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SIQLFGTBPVFPMRIZCXSOUMDCHWEFDYLNEBZTVHGQXLXCJDAOABGULCTOJXJJDLPYQGUZARSFHVNKHZYJNRXTAFNNYAODFFVIOKUYBYPBKMBQQOICKIRKWQSHTXDWPGTGUNCFLDVUNFURAQZEGMMDWWCXNKMOIRZINKEUQHVJ");
    tmp_msg_0.predicate.assign("CWRKZRVNQLAOLWPXUCAANAUTCXRDDEXAKHLWYH");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.196814567471);
    msg.setSource(15896U);
    msg.setSourceEntity(154U);
    msg.setDestination(1150U);
    msg.setDestinationEntity(253U);
    msg.op = 75U;
    msg.goal_id.assign("HRMNRNNBJWZUVVNWGWBFGCIPULDIVRDHZZHQZSCCBUPAPQZZKAUQDQXCXKEMBLCBWRLHONOCKMSEHJYVSFSUYIPTKVLALBMMMGIFNPXFXDQSASJUXESEHGMUTXYTLTYJPOJXWVPYMAIHCONUFTTDDSVKJUGCABGNRYFYLRKRYAZGKXPNEJFTLIGQWDLONEDHIJTZSGDWZRPYCRWRFVFXKHOVITDKXYJOM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WCUVWFTOSNBUCLOKXSQAOHDCJBAJHZUEYVTISZRZXRUDIJNMEKGEGBEEPNKFXJJREIYPRHRNAKXBLTKBHZRQWZZKPBOACWXVYOLCPXIXI");
    tmp_msg_0.predicate.assign("XWCKZSJLYANHWXIZPICNYEWYDSNOXQBNBPVUDSCGJYUXGWMOJBHMFQMDKRLLUKDUACABOKPLAFBQMWSATRRHMRADRUOBEJZWGNFLIYIQGYIBTUZCCYUTZTYVGCBQSSXVHVTEIZNBIYNLMVKWMJFNYAFQGLOUKUFOEOVQIZEUSATNJELNJHZDGTHAKGEZMLCCSHSXOGGPPDDJEORKRDHWSQVTRQIODHPEMXVPFCKKWTXWMXRJELPJHXPZBQ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.853772137603);
    msg.setSource(22280U);
    msg.setSourceEntity(102U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(228U);
    msg.op = 69U;
    msg.goal_id.assign("YEXEKITZFSQEGBIWADNOXAOFDVVYSPRMLKFWFALBJTDUPUPWYQUOXBPMDZXKDIXEGRBSSLCRGOMAENGDLCLNVWIOWUIJKICUGCNYRMGNWZZYDUZLLAHRHRMBENJGOFBTKRCKZTAOWCPLAPHJHTXTITOLKEQGVUBHQJDWQPAAQSOXKNVSZMGXDJJCFUGUBTVXFRYTVKUHYHFRESYQIVHBJQWFKHCPIYVESMSZMZTHDYJPMLSFXMNCQREQZIONW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EDMXERNDMOTENXNEUWPTSYBBLSHEUOGMCZKJPRLSVWYFNPKKOPZN");
    tmp_msg_0.predicate.assign("ZCQYVQIJGECYZYFRDAFTICSESVQWZAOUCKMKIOJXHCQLZLSMIIPWSOBFGLMVWNLRQSTZYOFZHAILBBHMRYVARITNKEHIPICFYSJPEHDDNOU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SVIZAXBBDGAQPQUCROTGROBUZWHPZPEZNOQTHZJWYSYLJPQRSEBDQFQVMINCMKLEHYVHNCJNJSRROWAYLAPHLXYKS");
    tmp_tmp_msg_0_0.attr_type = 33U;
    tmp_tmp_msg_0_0.min.assign("JNGVCAERBSMGAWFRGJQHCPWKSXCFNMHXCDG");
    tmp_tmp_msg_0_0.max.assign("TGLMZWGWQSKCSONDFVTVWHJCURFZCRUMVYCKBWBPATGOAEZIXWSGLIRJCGELYHSUDWWBMAXYLXJDZCTPMNFJEYHXFLATMBYHDKYJRWYXBFIJZUPQRKIPXWETOHFELVMZNDEOQK");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.807524759365);
    msg.setSource(64308U);
    msg.setSourceEntity(33U);
    msg.setDestination(34750U);
    msg.setDestinationEntity(45U);
    msg.name.assign("ZAUDCDFVMZMJLQZNLJSZMVRROWTJZPSWSEIKGQEBJQPFBXBHKCPXZHIRYMHDKCQFBNMROHHXGRUTKYTCIYAEOXATBMOPIK");
    msg.attr_type = 94U;
    msg.min.assign("RCEXQIKYICZQUCSTWCZQAOOWVXCEALUNCZVCBMMQEPNNNWWMJTE");
    msg.max.assign("FBJHSPJZUBCLDNKCDSOLMBTRJRXQCRGSPGAUUQKYWJIFJVBCTMJXLEIVLWGGNBRIMJHIWFNTWPMKIRZKSQVZHQGXKEYNEFHAMFEWANKYYGENDVPLILRIPGQKBOXOVPHWOLAVVBRSXOLRMSWVJIXDSPBBOXOGLNHOMDPUBUDEYUQCKTCEWGMIFTKTTCAPAHHFDAGEZSMOSZTWQIEQXYDRZYZDACTSOQFNMCHVQUZXEAFUJCUUZJHTVPKYWDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.387791066289);
    msg.setSource(56852U);
    msg.setSourceEntity(61U);
    msg.setDestination(51842U);
    msg.setDestinationEntity(156U);
    msg.name.assign("VZOVLEUEXIGKLSUNRXERRAAFQWKJIMTPMYKBOTGGCLWYHEDPIFLOITGHDLJYRJDTDGZRSBDQGJPUHQPQMZZCYLQJQKPFZDCLVVWIJOVKCLHOTRHBMAOTHSBKVNUSSQDOKXXCAAOFJACGUQMBWGPCJVYWF");
    msg.attr_type = 215U;
    msg.min.assign("MHGOIDQOMLHZBUKSFMXBWXTIRNJYBGAUBCYHRZSUDFTJYPXORXCEAVALLIHCWQONJTWLSAXRJZDNMIYRSLGVXJEHCOVMA");
    msg.max.assign("UJTOFDILCWTMWDJYLSXBEBKAOUBKWHBOWOVDYIMOSYJBQNIUGRVDCESAGFQKALEUKPFFRSKRBECKZEVAQQYFPMALXQOLUFVMHZGZDWAJDRMDKJQPXHFTWCFHIIVPXGSCITEUZQWQTDRPQJSMSZWYKCHBXBUXNOFGAJCGCIWXXYAOUTCWIRMINLLVHBJPSNYZNTCOMLVVEAOHBZKERRQGPHVTHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.823071102343);
    msg.setSource(42328U);
    msg.setSourceEntity(220U);
    msg.setDestination(52915U);
    msg.setDestinationEntity(140U);
    msg.name.assign("UBELSVFHOSFDWXYQNBFMAMQIALWRDAXJCYDTADUPZSCNVVEHEPRPCDHGFCAVFWHKELQJMFVACXKJDCPGHXCJLTSRPBKJODFLKZMAMOGSWQJUGTKQZSBRKZUVWXGAXZTSNGHLJKEHPYIHSIBOVQPEZKMIZIKFWRNQGSAOBXPBLEORJMPRWDIBG");
    msg.attr_type = 229U;
    msg.min.assign("JYKJDPGPXTFARCAKPIZFDYOKUHQDLBHEGAITADLVZRIBDESSBHWMARNPXVXPRLIJNMUODSSQQETOVOJTYINBKBIVWTWBTDNHLKVNHBMDZULYPACYMWCFUHNK");
    msg.max.assign("ULGEHOUQFPCIPNXLBZCTHWLJPIWQZGWNOCTLKRRYKWFKSYJVJYXVKMJUIJEOCYTBJADAZPQCDUEYBLOVGTTXUSNWKBYZDESJZJMXASRYSAOHLPNQDMSHDWOCQIMREQFPZNHNCWUZRNSXEIQRWWCPXYMOQIBDRGQVKBKNXMXPCTGYLLEUDAFCRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.569850256651);
    msg.setSource(6156U);
    msg.setSourceEntity(168U);
    msg.setDestination(30418U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("OBYISLJMHTVOPATXKBNASZQFFJCXUTCWNHOUBWNMKWFCXLFLAJMJMEFIUZUZVTPRLDFYRNDKPOGHJSJVIYITKNGLDLOSYITUHMAQSVGUVCCAPAGMQPGHUMIQWJBSOTWBXTRARLDRIMCJYIUQKFQHVZYGEJFPEPLHRYDYTHXDPFDBSZKQEWEAUGIXVNNXDBNQLBVWYIGBZEXNEVFBQPERKSRQKJEHXOOWGCRWKMSPWTEORH");
    msg.predicate.assign("RHJBLXGYJNWFAUIMDDRBRYUEGSDJNCVNAZIEBEYCVJKPGQIFLPGIZQJCODOEWISGKAQITRSPJPDLESYXXZMZYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.607175780621);
    msg.setSource(5221U);
    msg.setSourceEntity(180U);
    msg.setDestination(39948U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("UCNEVEJKEEMNUKLAEWANZNAICUNZUGMZYTQSKMLADCBLOCQKGILABRVJVVKJSBFGJQFLATTJNIOYNMGXDSGTKUXKJNPDSWPSXPTNYHFFQXIXIELQEVTGQJOHDQIEPTZTGOFWQVIQOBNHCDDMDWYWFZYUPAYCPSOZRTTKMBAWDRDYKPLWDGMCSVJGROAYAWRIFMKHRPIWGHXZCRVMXSBCRFOIPCSZRFBBYJ");
    msg.predicate.assign("BRPTHLLWINAXCSXGSRJIIODJSORBEITJCNIGOYUEOGWTZCKEVADLEHFVGEZCQJKDLDKR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YHNJOXHMADEFKXKAGBOJFEDKLQGXCCTVANFMEAJCCSLOXJDJA");
    tmp_msg_0.attr_type = 35U;
    tmp_msg_0.min.assign("GRFKQMEJJHKJDRRALTUMOPCVIJURGGXAYOJFTUEBFIDFMPNOEVKDRCNRSYQTKKRQIZSGDZCKYBYEENXIXOTIDNUBLXBAEFPBWBGPWPOSLJAFHDHEMQVHUBPQSZHSMHMDPCVTXCUBXQWCLWUTACEODCMKWNQSVRXY");
    tmp_msg_0.max.assign("FJPWYSGJLOMNIQNFFEAWWYLYYRSTXFBHTQDVIOUODGGKRBHYCAVIZGFWQIWMYKHCTKCZVGPJHJPYSFUTEZPCKPIHGXOOHSLTCDOFXBESWDJPTKUSQQOOXAVEUBSNEPXNQMTDUZOIJIMPNBJAVLBNZXCFWVGQILBBQWZQREQUHOWSKRZANITRXPZRYEKMKVRASZDVHACAMUUVTBKLRHBJVGLJYGJXMFSXLNDEZNEPDLMMYGCFDRCUR");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.149340585688);
    msg.setSource(12842U);
    msg.setSourceEntity(15U);
    msg.setDestination(27191U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("HXCPZUMRGNSGSXHMEKWXOHAGLUWIJPPGOASILTMTBSNOXAPOCJLCCOKNZXLSRBKBWTRXWFYJFNEQMZQPFDWBJTXYHUFTYZCUFYEHXLNROAXZBMCUTDGXCWTKDFPAJEHVNUAQTJYABKJDKAIJFUICDCFIKIZVEGOKLIROSLZDBAV");
    msg.predicate.assign("TCUDJLWIZECQVAVHRXSBTMEFBKRVTHKMJYMLPVNZBLJNLUTNNJWDRYWBGHDAMFIHKXTDJMNWYDZUYIDIELTJZOKIGHPOADXLVVRGPOBXYCAHQWTHGZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JMSCPODFMTSCGSHUGWXIZPUTQEMMOQRSDGVQBZHZOWRQPLVPMKXCPNKYAJUEWBEOVLVAEQTJFFNLMBKHXVMRSBBMISTOCOKDNUNVHYEOATXBQJRUCMAKCJHLRZGIFWKPHFZFOHVJGFCUYQQFQLWLJHCTLGOWUFKNLDUIYMNYAKUWNGVKTXLGJZXABD");
    tmp_msg_0.attr_type = 228U;
    tmp_msg_0.min.assign("KKMLURUPLOWSUEOBJYHTRLDOJOFKFLMIYBZULZMUMKNQFDJKUARIUCFGZJNUABZTEXWFSCPOPJWFXCIJYIKGBEGWDSVIIHPYIX");
    tmp_msg_0.max.assign("PDHWVXNMIZFOFZAZ");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.468725478937);
    msg.setSource(51314U);
    msg.setSourceEntity(224U);
    msg.setDestination(3082U);
    msg.setDestinationEntity(243U);
    msg.reactor.assign("NMAQXDYPAJVIIEPZGFLZTTEBLOSNTFLCUGKINDYNGCHQJLODEPDCQYITSKJJZVBIBQZDVROXURPROTXPXCLLGSNASTCHRXJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PWXFSPSBZOTUJSQNEPVXVLOOTHMGICIWHOCBYKXDZNEEFHZCOPIRZINQDNBCUDAUFMGCJGQXBLEJMDKGJXXIRVVTFYLDAMSRKLWCNJZ");
    tmp_msg_0.predicate.assign("IRLPFNXOCIFWMVOEBMBAUZMUNQZWBBSADFCSNJLQTTDIRKFJQMTJHEJWMVFZXERUJCDGWUHKHKXTSINRPDGBCGXFHLHDPESULSXZTWGLAXQOXJLVGRATRHQFERLIVVDUXNZNJJLOTJRCKPZVQBWDMHGNED");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.185311775308);
    msg.setSource(18684U);
    msg.setSourceEntity(225U);
    msg.setDestination(34055U);
    msg.setDestinationEntity(118U);
    msg.reactor.assign("VPBGUAZIONSDLTANHCQGXYSDTUQWSXRKJHWSEBXDMQMJLHWUCHZHNBMKVCRLLFEWJAQOWOYBAFPMHTOINVZEUKTTMQCTHUNBQZKLTVRFIEBDXGSVDSWVIPOATPDEROIQGFUZXKZRJFVLZNDBXLJUCNIVYXJJPIFUODA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.821047863663);
    msg.setSource(8861U);
    msg.setSourceEntity(75U);
    msg.setDestination(27308U);
    msg.setDestinationEntity(244U);
    msg.reactor.assign("ISFAMSZUMMXYGFJIYQHEXSDHYKXXJUVSEQOWBTDMOZBHPVXGZSEYDGQITNLTQEFHQLPOAMRQVALDCVFFHYZONUNWUSRGTOHDZJRBKPGGXPSKLBWOZUAHVJNVCKCATVJIYHRNXQFECUZEKZNWYOGTLDXDTPZUNCWIWGBSCADEJYBQAOIWGMEJAQXRVLZDSOARILKEBBCIAOLGCCYQJKVMFTRPIMWMNFBKRIYPVUFMCPXWUPLDHNTLJJUNSKR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YCYHKSWACNSJMHNXMMDKVSYCPWEQTHXXFGCQLFCOVAPLVANVVMOQSPUDRPAWQZCRUMPIOCUEDFLZSGDKAHLLDKXRWWIYGJUXOMGZGIQQQKWEPDNUREUNLZMOITBYGUDYLRNJZWBTJFFYNEJTCPCVFZWEHQJYLNFBBTGVEFRJIHBKGEBZGIHJOTGXFBAJUTBKNQDLSWYBKERXUL");
    tmp_msg_0.predicate.assign("VCYDJNEEOIAJMBDVZGNNZPOCGOUYHQW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ARFEBFAXADNBQAAFYFREAGFGJRHLWCZPOZLYVHPIKNZCRDTONUYKBEFNQQCKHJISSREWJLNHTIQTXEVQKKWOGZGRDTEOULQMXBLHJNSLMC");
    tmp_tmp_msg_0_0.attr_type = 187U;
    tmp_tmp_msg_0_0.min.assign("KPSTGKJOWZWZBWDX");
    tmp_tmp_msg_0_0.max.assign("OEWBRHEYOBNENZUDGUSRYIQSEJVXHQUGHLIRNZJTZKGIAZCYFEYIWFM");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.383459124374);
    msg.setSource(5927U);
    msg.setSourceEntity(41U);
    msg.setDestination(509U);
    msg.setDestinationEntity(41U);
    msg.topic.assign("NLMPUZWQCNDXZQSGKLAUEJGCXPAHRASJWHZVZXFLSZKREMXPJXPLUFRNACEMPAOBLYTWSMDNWIUTSOGOERQJEOKIDPVUXWGHLBGXQMOYYBFQTEDTVIUFRKGJJBKESJCNHNUBASCOKZAYEMMYZYDRFPNKOLYRSIDHWREBBQNTGTQILGPRICKVEJHXYVFLSCWOZHVQFUGXFHJTGDMBBNPVAUTMAIWDKZYYWBDZICHFPTVQNKVDCIVXTJQFSWAUH");
    msg.data.assign("ZLSNIKBEXEGBMRFNLWTUUFSEUJOOIZARXJOWWADISASLCPOQIDLQLTPVHUVQQXIVPEMBKYTPXXCMDLQCJCMRAGCDCCVFRAIUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.331671031836);
    msg.setSource(11950U);
    msg.setSourceEntity(145U);
    msg.setDestination(13532U);
    msg.setDestinationEntity(112U);
    msg.topic.assign("QGPFQZMZMWVBSIJFATHUGYEYXBWTGJODVLOGRPNIYGBKREMZIQAHPSXDAOANCTWDHJLIRDLAZMSTSPKVWLNJVYKBCVCGCRCJHDKJQBYPLJVOFLTHDJNFCUHQMSIFETSXFNZAUHEMQWGPOUUQOLQKLSTNYBZBWMZYKIPNUOFIPPWEMXKFRCRVTBQYSTDKQAZUTVXOERUGLXIHFMRVWWSKXRDNRECNZULIABEFXUZAYJDHJODXP");
    msg.data.assign("CULRVPHAFIRKJKEIZLJUCYXODQUJGLCAJPFDFXUHVXLFQISOQINBGBJJJYWKBPLYHRNMCDBTSELATWBMXHPISXBWUUUQWZSAXDPUQLQRTSWNPIIDWGMDONVZYTGFASBCBKZPSTGKNMMAEQMVAYYKRCCTTXLBZWMIRTTGOHAODZUOHRNFHECLFCFUTIRGNMABZHJECEDRHGOFOWDOWLPSGMXESIJVXKFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.717598419743);
    msg.setSource(7498U);
    msg.setSourceEntity(23U);
    msg.setDestination(14527U);
    msg.setDestinationEntity(5U);
    msg.topic.assign("ZSFHYNJCFBADPRYKSSEPGNIOHPNUHYHFDQFWRZEAEZCEXUTWPQVMUZDUJSRUQFMOWEGBJKOVTKJVOAIYEWKTUKNVHHDHRTZNXLWVLYAWBZKRCAMGBAA");
    msg.data.assign("WEEMCVYNSLGWPOZETZKHNGJQXYXISBZOAHRJXUYJXTRPVLZWEHGHCVMUABUGIZITOYWFQZMDNRIMFTMMENVPBDBXDWMWAPDLLKDNBXDPXLJRPSNATCMQWRRSDHFCOEQAPBIKECFYBJSWEYDKQUXKGFQLHKFGXIDOOTIHUVPJJYUFUITPYCFCQGSUNAJIVQVZFKOXUKOLLWZATSBNRCJAOFKLBHSMOSETHKGIGPRJTEUCRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.244372755893);
    msg.setSource(59983U);
    msg.setSourceEntity(55U);
    msg.setDestination(58386U);
    msg.setDestinationEntity(146U);
    msg.frameid = 195U;
    const char tmp_msg_0[] = {49, -85, -20, -43, 11, -51, -34, 69, 30, -60, 58, -119, 0, -86, 39, -47, -108, 60, -19, -73, 0, 70, 25, -47, 3, 51, 108, -70, -78, -104, 73, -66, 49, -27, 4, 104, -32, -102, -29, -42, -24, 4, -90, -16, -97, 117, -4, -37, 41, 58, 44, -118, -71, 101, 7, -69, -4, 6, -33, 93, 102, -67, -112, -3, 117, 65, 97, -99, -16, -99, -116, 2, -83, -15, 13, 67, -68, 31, 89, -22, 115, 93, -19, -61, -126, -20, 2, 73, -25, -4, 21, 85, -80, -43, -115, -7, 79, -83, 53, 12, -41, -108, 80, 34, -62, 103, -71, -48, -118, 19, 97, 46, 116, -87, -74, 81, -48, 46, -126, 51, -49, 32, 1, -2, 107, 54, 115, -73, 15, 34, 22, 98, -54, 9, -37, -89, -78, 104, -15, -48, -103, 41, 50, -8, 34, 10, -128, 41, 8, -82, -109, -27, -87, -81, -76, -128, 69, 87, -34, -6, 30, 67, -20, 33, -47, 20, 31, -12, 55, -103, -21, 88, -127, -48, -95, -65, -126, 74, 105, 7, 67, 13, 59, 7, 33, -51, -88, 67, 22, -101, 42, 25, 111, 90, 35, -65, 86, -2, 92, -71, 82, 23, -78, 0, 92, 59, -101, -64, 36, -81, -45, 105, -103, 98, 91, -110, 104, 75, -128, 5, 104, 109, 24, 100, -5, 118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.263409645476);
    msg.setSource(17588U);
    msg.setSourceEntity(78U);
    msg.setDestination(38100U);
    msg.setDestinationEntity(86U);
    msg.frameid = 242U;
    const char tmp_msg_0[] = {103, 34, 52, -80, 80, -44, -59, -97, -71, 70, 86, 19, 117, 90, -19, -6, 107, 61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.876008871129);
    msg.setSource(7468U);
    msg.setSourceEntity(31U);
    msg.setDestination(44189U);
    msg.setDestinationEntity(201U);
    msg.frameid = 86U;
    const char tmp_msg_0[] = {-35, 40, 119, -108, -93, 107, 110, -24, 101, -16, -11, 77, -98, -80, -12, 62, -115, -36, -107, 100, 43, -43, -76, -79, 5, 111, -22, 101, -94, -32, -117, 19, 2, -58, -70, -106, 72, -34, 38, 40, -118, -87, 93, 33, 84, 87, -62, -51, -4, -37, -28, 30, -49, 117, 101, -114, -48, -128, -48, 101, -58, 98, 126, -36, -63, 50, -93, 28, -68, -114, 16, -51, 19, 98, 116, 12, -115, 47, 54, -120, -6, -107, 33, -12, 41, -41, 15, -54, -37, -44, 12, -75, -55, -116, 86, 41, 100, 70, -76, -72, -128, 95, -121, -63, -1, 63, 27, -72, 106, 68, -99, 101, -30, 11, -69, -8, 52, 23, -119, 58, -35, 16, -21, -1, -90, -59, -1, -108, 105, -70, -117, -2, -15, 103, 47, 115, 51, 19, 97, -97, -56, 42, 84, 125, 34, 119, 45, -105, 95, 119, 3, -86, -24, -59, 89, -13, 60, 103, 54, -78, 38, -123, 3, -113, -110, 116, 25, 25, 87, -57, 118, 98, 33, -5, 36, -3, -35, 100, -12, -94, -95, -100, -15, 63, -120, 38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.0913788231937);
    msg.setSource(50829U);
    msg.setSourceEntity(118U);
    msg.setDestination(18766U);
    msg.setDestinationEntity(142U);
    msg.fps = 249U;
    msg.quality = 226U;
    msg.reps = 46U;
    msg.tsize = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.474856913185);
    msg.setSource(33179U);
    msg.setSourceEntity(120U);
    msg.setDestination(43037U);
    msg.setDestinationEntity(129U);
    msg.fps = 4U;
    msg.quality = 51U;
    msg.reps = 191U;
    msg.tsize = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.987108330187);
    msg.setSource(17727U);
    msg.setSourceEntity(80U);
    msg.setDestination(10736U);
    msg.setDestinationEntity(160U);
    msg.fps = 227U;
    msg.quality = 125U;
    msg.reps = 141U;
    msg.tsize = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.0398692886647);
    msg.setSource(24810U);
    msg.setSourceEntity(0U);
    msg.setDestination(56188U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.80524966115;
    msg.lon = 0.75781367175;
    msg.depth = 80U;
    msg.speed = 0.101255080977;
    msg.psi = 0.236748141539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.154492344107);
    msg.setSource(17878U);
    msg.setSourceEntity(116U);
    msg.setDestination(55002U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.956892614002;
    msg.lon = 0.461345958076;
    msg.depth = 185U;
    msg.speed = 0.310213272531;
    msg.psi = 0.256241351376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.111301044086);
    msg.setSource(55908U);
    msg.setSourceEntity(49U);
    msg.setDestination(17425U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.972986317701;
    msg.lon = 0.790796956315;
    msg.depth = 57U;
    msg.speed = 0.650064322042;
    msg.psi = 0.243415493684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.306777990827);
    msg.setSource(64523U);
    msg.setSourceEntity(83U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(175U);
    msg.label.assign("DVSZBXWBRPUKJAYVXWRCMOHDUJXIHNOBVDBVDZFNLTYRJKOCFQPWKGRBZGIGLYCLEKYUIHKNQISPQOCYQKKNQGVNALYMSQCCAFLFEDWJBORJEGDMMGBUTUUSWSIXPSDJBOFXWAMTXEYDJZP");
    msg.lat = 0.218762229526;
    msg.lon = 0.574586858536;
    msg.z = 0.796792384038;
    msg.z_units = 139U;
    msg.cog = 0.902101273774;
    msg.sog = 0.649186588108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.23455502911);
    msg.setSource(17136U);
    msg.setSourceEntity(85U);
    msg.setDestination(59172U);
    msg.setDestinationEntity(113U);
    msg.label.assign("MDCSLTRBJAXMVQTFUMKMJBSLRRWICPBUPENWADCYWNPHEFHWHVCDAIEGVYQPNBUUJKTIEFHZARJDAXRHAQOHMSXOECCXJFZSIXBHGTQPVHVSBMVMORZIYEJANOLNDWFGWSDOFHZUKVRIBUJJEXCOUYYFOGYBTSYHVNQEXIMSLNDSNCQTAOWLZNGQTZVAGPAYGKBELPKTJOXLWYKKIFRPDWLECFULZMYZTCKPZLGRBZ");
    msg.lat = 0.455628773513;
    msg.lon = 0.00487027367635;
    msg.z = 0.507687477387;
    msg.z_units = 85U;
    msg.cog = 0.184332680065;
    msg.sog = 0.318448305961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.641015486941);
    msg.setSource(6802U);
    msg.setSourceEntity(111U);
    msg.setDestination(32535U);
    msg.setDestinationEntity(117U);
    msg.label.assign("ABYCWSUGVAOKHRREFZTLYWFYNSGGAUOOLLDPVKUFVBOQEGFHBYVZBHPGRXEHRSGCQNIQQGIURBTSLCTIJWWXNNHUDIKDQDVQSXZWKEOXRWQLARQJYUPAJFLLEAKMEAQMHTPSESUCMNFFLGWYLSWDZGDTRXKHONDPIVIIHVCHVJAOT");
    msg.lat = 0.175298527279;
    msg.lon = 0.505609678469;
    msg.z = 0.958605785081;
    msg.z_units = 10U;
    msg.cog = 0.461744960891;
    msg.sog = 0.615955938938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.578640143908);
    msg.setSource(31618U);
    msg.setSourceEntity(160U);
    msg.setDestination(55834U);
    msg.setDestinationEntity(234U);
    msg.name.assign("JVKBDDMSSYGZYQAKWMLEZMWQTGWOWYRNLFQZHPKZAWWGJCYWQYRFPIIHTCSDMTUZYZSGVSVVBVDVBABSTXKDPEMKSUHBDLOCIGAABCF");
    msg.value.assign("AWTQFIOGBXIFNWEMNKUPEJJDELZTVTMJVUKWXCEICVHVBFDPAHHHYJRUIDZPRPTMMYNAYAYLUXOKZLFBALKXAVCAUCMQDHSRPPGOUOYGKXRYELSYFMGWWNSCTNYQYMSTFOSASVHFSEHKUAMQQHRXLELYWZPFSOCRZZKRVLWGUNTGG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.0597314368096);
    msg.setSource(29359U);
    msg.setSourceEntity(40U);
    msg.setDestination(57574U);
    msg.setDestinationEntity(127U);
    msg.name.assign("GFAALUMSGAPEIQDDDNYUOBQWISPFHOTMGSJAJJKGVFJIBDBSNTEOWZRQYQPAZEBAMXEQMPBMKYLROMSAFNJQHZX");
    msg.value.assign("WVDPGTGXFQGGYOKOQAUQZGTVDSRNAPCEBSWFRRJUONNACYETOCGLCKZPBVSYDYINUHWDWRBYFIOHYTIAFUGHEFWRHLMJLGTPIJMSOAHKFWZQQBKABMXCQJUTBXSYDMZLLKTRSANJXQTUAROLVCQPSRJEIICPEEOKPWGWJBHBHNSZVQHFGJXMULIERKKPLAPUICDNYXTUZNOYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.264019951237);
    msg.setSource(34219U);
    msg.setSourceEntity(159U);
    msg.setDestination(53939U);
    msg.setDestinationEntity(27U);
    msg.name.assign("WFKNYQDTSJEEZAOMGJPMWDIESGHTPABCDOZQBUKNQZEMYLBXWZUXXFPIA");
    msg.value.assign("XSWRVPMQQOPJDWZODGNKJWJFBWEWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.880855046688);
    msg.setSource(34386U);
    msg.setSourceEntity(215U);
    msg.setDestination(43169U);
    msg.setDestinationEntity(137U);
    msg.name.assign("WHRGWQFLEDMLMSDPITEQTASSIEYNFPVHHTJNNVCPVWNJVXVBRQAHSAOBOCCCQAFZUPVUDOBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.0127444505482);
    msg.setSource(10126U);
    msg.setSourceEntity(175U);
    msg.setDestination(52751U);
    msg.setDestinationEntity(108U);
    msg.name.assign("LLLYGDNCABBGMHSLMHGZVEPZNVRMDSUIIOMEHSJQIDBVAYUWVFOXEJQTWALKKEZPIWPXTXCIVQQOFQAWPOXYKDRENEXQZUJRCECRKRUOFGKPXWSITGCHMTWHBCPRLZKJWDKMOXXVUSMGFNNHTSUEOYAHSIJRBQEFVGAYQOUJBVZWTZXTNNYJILMLPRJGCYTFWKADBKAFSYWTGLFRZMTA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VHNKXODNQLCQMILAJMFPCFBZZJASRPUNLGHPSZ");
    tmp_msg_0.value.assign("QDOBOXNTJXLCDJKOKYZNVYSZQIOMSTRZPTPWGJNTRVAQDAGEAHUIMKUFNRKBJWMXZVAEMRMUGJABLBXADFFXEMWQBHJBWDQCGOTCZHJYAXIYGQHIQFGQCFFMRGRQHSXGEXBJUOCZEPVIKOFOWUSEUZTYSVIYVHOUELEWHNBTLSXTIYUIKMNBKVLYYLFSCHDNZMPOKEFPPGAWWCDTANTRCJQREKYINPPZWLCDHP");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.341947828885);
    msg.setSource(11574U);
    msg.setSourceEntity(168U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(244U);
    msg.name.assign("VEIVCPAPIEXKCXXUFAANBMNZCVKENWSETDDCDQMFTNVNWBNZSRXXEUZHJFIQJVLORJSQASYJO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JSQNBHEKNCPPGMDLARGK");
    tmp_msg_0.value.assign("SXMDNATHHEGTRODKHTBEXNCJZDLRMILZTJHIZWUWTSXZJYZWTIQXVFALULYQAKJIMCXQSYEE");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.821537665939);
    msg.setSource(7939U);
    msg.setSourceEntity(230U);
    msg.setDestination(56914U);
    msg.setDestinationEntity(50U);
    msg.name.assign("BGLQBEZRUITNDTOBYZMTRZLGKBUKDNCOLSSSAAYWCCKKTTMANVZGMWTBUERZUNEGWCEIQPWQFPQMQCKUDBIGZDLXDHEZXACYBZXPCQRUY");
    msg.visibility.assign("BCHFKROPOIUFUSVRSQXQBHZKDBQO");
    msg.scope.assign("DFDTDKXPFCMTJAHXULVERWZSOBTNBKDQMQSVTTNUPZFNCAWZTDOQPBPZWERQFIGLFXGJZXNZWCMEHRAQKSLQMAHBAUIHIBOGGWNFBWMJYNWRGXAXWXKJXDKALUJCJLEEACULRAJPYBIISVJDAOKJIMKIMRVVBNQVCZRUVOFOKKCLVHIWLERTXPXSUFPVBODSEYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.333181402969);
    msg.setSource(62954U);
    msg.setSourceEntity(210U);
    msg.setDestination(18356U);
    msg.setDestinationEntity(33U);
    msg.name.assign("CYYAPYFHREBXTBXATIJYRIGPOFRRXACOQOUCZTZKVOIFKPNEPVSMZXEBKUZBUSELFBOVOUGUEWHANCAEUVWBNCXRFQUIXZANQWZWBJTLPIRDQDSNYFDWFEKXDYPJMQZRBFSTVJMANMJZVKGHNSWSSWDHMLIXHMILNAENJKQYOKSJDGHVNGTJWQZHJGZPCVCUSHLRKGCMTYOOBXUDLFCMPVDVLYRXWPQELYHASILBJHGWDFMQOTRUILEQPTMAID");
    msg.visibility.assign("UYGHLKKZVPTJNVNINHEZWTHTAPYRVWJJURI");
    msg.scope.assign("ZBSEPHQOKIUJNUZDUPBUIKCLNQOYFUTPNCSMFFNIUBMPJBFYLEZXOXREHTCBNWAPGYLHINGWGDRDMUZCYCEHQWSZIOVHWSZASZDKYDWNMYYTUETRRSCHJMERHPOMJEGYFJXDIZLIJVGXRGBAIQCOAWVTOCPLGMADJXKHMSQQYNTAWMPKTEAJVSRRFRTOOYJWOZVLLG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.809152829868);
    msg.setSource(54992U);
    msg.setSourceEntity(50U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(201U);
    msg.name.assign("SVUXTZQXZPSWEAUCTDKRTNCAPGMHESEPQDFGBZZXMUCQPCKJVDKTWBGMKIPMSFRVDOXLSGQKDISFNFBUCHCFKUQABFMHWSOWIVYHKAFNOPOGNCVULLPMHMMILZIEVJIAGWR");
    msg.visibility.assign("HTKZQWZWSNOYBHQCFMCQKBPTFIDVVBYBLFDGLSZREEMRIAWHCAJIUEDOZNSXBXQHTYSPRRIDMLNUSTRHNSNJYVQAICTCREGALVEXALIFOKCQVNIHWUGBIQOXSCWLARHSEDLXPJFMSBUMWGVFVPOMDGMYOUGXXRFBKL");
    msg.scope.assign("PFRGQHFWHLHYIVDEROCOSHTTTIUMSSRNBMIDIRZJJELDUBQDCEMWFTVJSIXSKPXLPDIKVPHMRDJUQKGTOKBBAIRWGMJWRACMBYRZIOSWEAQOLZEGVCZQUGPYNMJWAVLUAZSCCOQZZCPUWWFKOYXKLAHHWTHQJLYFZYPHEEXKNXGFBGUTNMTCCDNSQANJNBXYAAZLIMRODXPKOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.126343349734);
    msg.setSource(56972U);
    msg.setSourceEntity(70U);
    msg.setDestination(30647U);
    msg.setDestinationEntity(36U);
    msg.name.assign("IRIYSBFVBNZSONDOYNKGDWVJUPPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.893545836774);
    msg.setSource(5701U);
    msg.setSourceEntity(164U);
    msg.setDestination(28350U);
    msg.setDestinationEntity(37U);
    msg.name.assign("FTXTODCWEGBOTCFJBUSRYHNSZOLVIWYKANEFPOGPSQCWOZFXAEKMZJEYEHBUWIZYNPMNFZUVYEILDQXMKESXRSUULTATTZNZICIYHFPSLSHMHDDQOGUARWHEOVKHPYFHZBOCWOXMGJNYPGBXRQMQGGMDDDLRPVNBVXWVBSJLJCIRLPDPQXJJTLACFMONVCNTAKKBRRKUPGWHWAMLVBACKNGLXDDIQEJUESQRAJVXIITUHZFYGMYKIFZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VHDQYLIQMSYMSJCPMAPNGRUWGOEHLODUKNZDFXSKCZRCGLBSOPOELGNPTSQQBJHUXKGVBNYDSGTGSMNUGZJWOFZHOOEQQJLUTEVYFTIAPBODUHWAKLTABSCYICCSYSMLMFJMFYIUZUOWWEXAIRNKKEUKLTVY");
    tmp_msg_0.value.assign("RGXTKRQJGLUPQGDCWIOZUIEWNLBNJVKAONNRAAIQFDRTXWSPOZJHCFSCABKCTXIXZHVTFMXKLEUDYGVRHZHOFFGBDTJUSZFUVEWKHYYNIHVLJBUTSXSUWGPPYAMEWLBGRMIBPFALFXPOXBVYOTHAOIMMCYUDSZY");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.773403141657);
    msg.setSource(27095U);
    msg.setSourceEntity(179U);
    msg.setDestination(55835U);
    msg.setDestinationEntity(220U);
    msg.name.assign("NVQDIAABMYEALOGTJHCZOCLKBGYSUNSFXRHNKQOVZKKWCGATQVOFCQSBYFSMTXREJLHVQDRXRLTCPREMVQSJIWWWNINMJCQHEMHDFCWEYHGDUPMIZLZLNYUBITDYJBPXLMFBFDJKVDOCUENVPABOXONUBHLWBTXTFRUEZIULGEWHZKYQOASVCIFKUXTGZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.425303314279);
    msg.setSource(37894U);
    msg.setSourceEntity(105U);
    msg.setDestination(47934U);
    msg.setDestinationEntity(246U);
    msg.name.assign("QDQSPNYIBRAMHYIVRCJOVYQTJBZQZRMGILGXPNSHBISDIMMJUGUPDWXDVHVAQSOKFEXPEWDEGCNVGSGTWZGOJBQRYNODLUNHXHWRYMOYUEQKFMKCPXPWMWVCWGAUDLZTRIMWBOKYJPHQLOKBTLQZGNJRTROUDBQZMPJUPEDFCKTLAWEAUSASVXXINXEIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.163670248062);
    msg.setSource(8803U);
    msg.setSourceEntity(160U);
    msg.setDestination(21904U);
    msg.setDestinationEntity(143U);
    msg.name.assign("GNNXOXTHTHHUBUQANSLSLMYIXXECWEADYOJJVYCRKVCIXAZKWSISOYPTJTWQSTBBJMYEQOYLZOPRAOMFUSNESGLZWWSHUSBHQTQWIMBFNNFREPSPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.19800023908);
    msg.setSource(48698U);
    msg.setSourceEntity(166U);
    msg.setDestination(60878U);
    msg.setDestinationEntity(61U);
    msg.name.assign("QSTTOLVHAHETXVPMFLKVGLKGTZQVXMRMEXSAZPMYLUGIBBJYYUBJGEIGPTSPXZUIRZGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.514909382657);
    msg.setSource(42935U);
    msg.setSourceEntity(186U);
    msg.setDestination(7178U);
    msg.setDestinationEntity(214U);
    msg.timeout = 3827522672U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.440779140832);
    msg.setSource(52376U);
    msg.setSourceEntity(45U);
    msg.setDestination(20146U);
    msg.setDestinationEntity(140U);
    msg.timeout = 3889699395U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.791840962734);
    msg.setSource(12999U);
    msg.setSourceEntity(34U);
    msg.setDestination(39712U);
    msg.setDestinationEntity(70U);
    msg.timeout = 4011350852U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.820046787884);
    msg.setSource(53172U);
    msg.setSourceEntity(155U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(1U);
    msg.sessid = 3995918199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.0591454214679);
    msg.setSource(34187U);
    msg.setSourceEntity(160U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(188U);
    msg.sessid = 926952131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.522251986492);
    msg.setSource(21470U);
    msg.setSourceEntity(70U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(196U);
    msg.sessid = 1080205652U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.253160482507);
    msg.setSource(1624U);
    msg.setSourceEntity(220U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(212U);
    msg.sessid = 572191309U;
    msg.messages.assign("APMYDKZTDFFGLDRIUOCCGPPLWSIDYKFKWUGYSGYKGMXHRNZPMYMBKNOIYMFJQLRNEZPDDZMEAFIWZSKQIEORWFCQHTJVJKOJSONDGROJTGDWXAUTMRSXVFIFWZBAMLXHESQBUONCZRUAQNWSJVYTZLCZPJAIAVCREVXTHBEYSKOHBWYIPIAKLXQHHVJUNAQUHJQHCUNDZLPYNRODJVKBFCGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.981260323289);
    msg.setSource(59857U);
    msg.setSourceEntity(187U);
    msg.setDestination(31218U);
    msg.setDestinationEntity(37U);
    msg.sessid = 4210661508U;
    msg.messages.assign("PVDJMCWOLIEQRPAKJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.377098478869);
    msg.setSource(55173U);
    msg.setSourceEntity(142U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(12U);
    msg.sessid = 812603953U;
    msg.messages.assign("CDZASQOPJEWFWRBZFOTZDSFCSBPVPXRKHEKDLEZDZLOQIYVEFMAXUOFYWCRCIANUBFYLKVGPRWAXMQRJTQPCZIDFNGSTFYYIMOTEJLSRHAUCUIYECHZRDJLBBUTJHHLQATLKMQWOTXRHAFMOSEXWWMCUVVKZGUJHQNJCGSDPMHVKPKDEFNPZVKGHWZXIUETUBDVMWGKEMNQSOIWXVGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.537561349235);
    msg.setSource(11858U);
    msg.setSourceEntity(168U);
    msg.setDestination(29814U);
    msg.setDestinationEntity(179U);
    msg.sessid = 727831752U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.84024656661);
    msg.setSource(15473U);
    msg.setSourceEntity(22U);
    msg.setDestination(15802U);
    msg.setDestinationEntity(51U);
    msg.sessid = 2562845755U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.112485810784);
    msg.setSource(22314U);
    msg.setSourceEntity(56U);
    msg.setDestination(52034U);
    msg.setDestinationEntity(104U);
    msg.sessid = 394890477U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.270454363847);
    msg.setSource(41257U);
    msg.setSourceEntity(195U);
    msg.setDestination(28073U);
    msg.setDestinationEntity(101U);
    msg.sessid = 815873030U;
    msg.status = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.642538198584);
    msg.setSource(52727U);
    msg.setSourceEntity(211U);
    msg.setDestination(15321U);
    msg.setDestinationEntity(1U);
    msg.sessid = 1161075563U;
    msg.status = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.938879917752);
    msg.setSource(27417U);
    msg.setSourceEntity(167U);
    msg.setDestination(48647U);
    msg.setDestinationEntity(190U);
    msg.sessid = 1608421694U;
    msg.status = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.568961362908);
    msg.setSource(56490U);
    msg.setSourceEntity(159U);
    msg.setDestination(6241U);
    msg.setDestinationEntity(240U);
    msg.name.assign("GTASLVSQUTNLRCYFLAUJVOYCXWOSFQGOQBKOVANTFBYAKPRIHPGXDZIFMNNPWVEJDAJWFUVECIDFXLJVNOWIQOVPYWPDYADSUHRTCQBSSJMBYGJVDEIEDRZRNELWGBPGWYMGRCFRYEMICTIMFLXTJKNWHLFHSUZVTXWHKXCXZDGICPQIZHSUJZZSQNLOLNPDDPKRIKOMATBXZEYHUJQLXHUZQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.408726422006);
    msg.setSource(38590U);
    msg.setSourceEntity(63U);
    msg.setDestination(41203U);
    msg.setDestinationEntity(229U);
    msg.name.assign("VVMNMRRBHQUGCXKSBJJGFKIBHWZJOHECVKKNVWENTVRLXGWTSBCTQWBJEZDWUOIWEQFZHDISEKNFQYYGUHSYDIDKCIFTEGRVYJXNESCQLWROAYQPPZTUOTJPEHDBKZMSQXIAIUUPZVLOPDFKQPOXPNTOGAZAFD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.429186524206);
    msg.setSource(35613U);
    msg.setSourceEntity(58U);
    msg.setDestination(40481U);
    msg.setDestinationEntity(34U);
    msg.name.assign("JUYJQRDIFGQSDGRFZUWSCBRNCQCKNCUWXZHQOWJOHHLEQAYCJILUBRGLQFHBREUOSDYJJIBIRPFIIAINEOMLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.361764144351);
    msg.setSource(16043U);
    msg.setSourceEntity(122U);
    msg.setDestination(22383U);
    msg.setDestinationEntity(234U);
    msg.name.assign("MNEZGXJUPFGHOEFOOAMZQSDCVVCFDSUABFXWRLTIQWPIRUCXRVTONHAXZQVHHJGBMZEEAGMEGQCJAMPKKRQMKGSTILMDYWAWIYVRMOJUUYURTQLRKFWXWHRUDVOLKBVOAYHELBXBDJYRPVRCQVWGKCWKNIDBHCCDYGTELSDXYAHSSTQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.369120522961);
    msg.setSource(29787U);
    msg.setSourceEntity(100U);
    msg.setDestination(20637U);
    msg.setDestinationEntity(61U);
    msg.name.assign("ZXZFKSUXTJOOBVNEHQKWHWCPFVBFFPCNLQBEMMYKULENAAQRJKRSBJCDLHIESZEMNTXMITMHURQAITDPOBYGLREEIBHLPPKTJYHQHCWZCJLGXHXYAASWYGLRMIVDGTGDWJPCDZICDCTSYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.489805288642);
    msg.setSource(27110U);
    msg.setSourceEntity(94U);
    msg.setDestination(19855U);
    msg.setDestinationEntity(160U);
    msg.name.assign("JSKNMPYEZHPBHOOHGYFSDSBSHUYGUUAQCPZLOICDGTJVQVQMDUQPDUHCAGRJILLVYIOMFRSNBIHAXERSKKWWXXXDBHOXLITVHRGWIEXQOJNMCBDYVNVTGWTDCBIENSBBKZJUZIHFAEUADQAGPFXZWAAGLETFRWZAGIJAMDMNZWLYVHLEXKFD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.690492080478);
    msg.setSource(9682U);
    msg.setSourceEntity(175U);
    msg.setDestination(65505U);
    msg.setDestinationEntity(226U);
    msg.type = 75U;
    msg.error.assign("JNVFDBOSMTBQSUTWGZXCFJKEMZYVYEDFEAAGPVLILOESPKJNJVSIPYYTWDGZLFSXOHANQGZXRKMGXIBHSJWPWSKGLZEMQCPZGKUDQDTWHFBTRUKOUXOYNWDRXPAGCMIUNZSBLCJLSTMOFUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.746934527179);
    msg.setSource(63993U);
    msg.setSourceEntity(3U);
    msg.setDestination(15240U);
    msg.setDestinationEntity(23U);
    msg.type = 103U;
    msg.error.assign("VITFNPSBWRZWJLSLCKPURZQOUVPYQZDEXMGLBQESVUEODHRHWXVIXUISUQEAIWMPAMPEJCBXTNTBHKPKRVIHTYQPLZGOYBIDZZPMWXQQGQFHYGWZBCIGNDJKMTTJNDNDHYAOZLYQMBTJYKJLACNXRBKJTJHUFMWWSFNMOGFVJNIRFFOEVCXUVXKCFKNDOFPDCRARGMRGYBHONJHAWVGXXUTOPIBKLCCSWVUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.706859415749);
    msg.setSource(8513U);
    msg.setSourceEntity(124U);
    msg.setDestination(11837U);
    msg.setDestinationEntity(119U);
    msg.type = 20U;
    msg.error.assign("PCTJWQAQKTMFXKPUYTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.596818323985);
    msg.setSource(23538U);
    msg.setSourceEntity(71U);
    msg.setDestination(17342U);
    msg.setDestinationEntity(3U);
    msg.seq = 47032U;
    msg.sys_dst.assign("MCUUPHFFVHIXPDTNFVARDPGPXSNPQFDHOCZDAREJCVOLYLVOMLVOLZTTVIQXUKDJQGUMLZLHYIUSIGTWGZVRANANSQERGBDEERKRTTXDKXZHXSHPCMCSWPONITRJUOEEGJBXKWJBZ");
    msg.flags = 174U;
    const char tmp_msg_0[] = {-87, 111, -94, -111, -79, 30, 12, -36, 2, -2, -2, 93, 43, 35, -27, 3, 44, 51, 87, -74, 57, 75, 83, -10, 122, -102, 21, 64, 108, 15, -36, -4, -38, -3, -127, -123, 85, 53, 18, 98, -45, -80, -7, -85, -57, -40, -116, -10, -78, -81, -108, 23, 56, -41, -7, 93, 22, 103, 97, -52, -25, -98, -17, -36, -45, 89, 95, 31, -33, -16, 36, -45, 59, 11, -56, -50, -66, 51, 48, 111, -42, 10, 26, 74, -88, 45, -119, -95, 25, 4, 67, 14, -41, 5, -60, -82, 107, -19, -60, -66, -18, -76, -13, -51, 68, 99, -69, -8, 43, -97, -34, 119, 39, 109, 4, -11, 78, -10, 103, 6, -127};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0914376813551);
    msg.setSource(25236U);
    msg.setSourceEntity(21U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(93U);
    msg.seq = 33554U;
    msg.sys_dst.assign("DMJVALKQRWRNBRVODOTQWKQXCCLYKEMUMWTEJIEJCEWRNBPPMQOSCXWZHCRDUOQDNNWNOGVBLCXXHISWDAZUINJKTYFHHKZDRAXLVJCLICNGLIIBYYEXZKYRAEPWHWJMYYNMDTSZJOTLMVAGUSGHFTUJPKMELZFZPJRXDTIPHHFOQYUVGDDJKXVBUOUQGYOTBXPNRPHNBMOXYFGVZSLUSFFEARFFSZVIUP");
    msg.flags = 72U;
    const char tmp_msg_0[] = {114, 123, -117, -6, 71, 38, -125, -75, -72, -6, 121, -111, 67, -26, 34, 87, 8, 100, 24, 78, 123, 8, -121, 92, 85, 0, -49, 26, -98, 126, -14, -64, 97, -66, -118, 100, -59, 28, 47, 27, -87, -15, 64, -118, -60, 38, -82, -109, 119, -74, 31, -110, 98, -95, -64, 84, -93, 71, -101, 10, 80, -83, 74, -77, -77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.687007464175);
    msg.setSource(17172U);
    msg.setSourceEntity(207U);
    msg.setDestination(27825U);
    msg.setDestinationEntity(189U);
    msg.seq = 32605U;
    msg.sys_dst.assign("XYPBUYNOYIRXFTLGZCBX");
    msg.flags = 91U;
    const char tmp_msg_0[] = {66, -85, 86, -60, 124, 90, -49, -106, 69, 98, 73, -75, -38, 48, 33, -29, -35, 25, -95, -54, -122, 92, -20, -58, 9, -41, -38, -1, 23, 106, -30, -116, -83, 67, 76, 32, -124, -76, 100, -87, 65, -62, -87, -72, -48, -110, -55, 1, 66, -55, -87, -67, 56, 33, -42, -101, -69, -23, -82, -96, -31, 88, 30, 45, 122, -104, -55, -77, 0, -106, -8, 49, -76, -107, 82, -96, -113, -55, 79, 28, -71, 110, -111, -1, -71, -72, 88, -11, -113, -52, -54, -111, -34, 52, -40, -89, 77, -28, -103, -13, -97, -57, -96, 117, 51, 99, 9, -48, 89, 124, 94, -4, -16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.77135657485);
    msg.setSource(62189U);
    msg.setSourceEntity(187U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(88U);
    msg.sys_src.assign("PMZBWFQDKZRPDIUIPTKJWXVHIAYUAZMDLHGNZQRDTDZKSAYXPROIPBSZXGVPOUJLOELJNOLWVQZVTBNSAMLJTCLMOJMFIBPCVCFYRVCQFLFLQG");
    msg.sys_dst.assign("HHDFAYODMDAFPZLHLNSBTIUSYTQLQGUATKGMKMXVDETRNOIJEZBPQZQASKLNRVKNMYFSLNKXESJCBLAIBSNGODBYJCGBRVSPKFMPMGZWNOPEMIOUPKMXBOEPGJWIJMXWUWKXVHEYTJACMNFGPJLGFRCHRF");
    msg.flags = 250U;
    const char tmp_msg_0[] = {93, -8, 46, 2, 22, 73, -49, 75, 65, 116, 120, -32, 13, 101, 22, 52, -84, 80, 31, -4, 72, -56, -15, 47, -112, 20, 77, -105, -12, -5, 20, -36, 21, 2, -78, 59, 68, -42, 15, -50, 40, 3, 63, -24, -10, -22, -34, -110, -46, 52, 2, -94, -113, -52, 29, 0, 56, -67, -81, 102, -126, 90, 14, -38, -102, 35, 17, 104, -84, -105, 44, 53, 92, 26, -67, -74, -39, -103, 16, -64, 14, -83, -13, 96, 10, 82, 117, -84, 119, 92, -2, 83, 40, -51, 17, -77, 0, -8, 77, -112, -49, 96, -45, -35, -105, -38, -10, -128, -51, 123, 53, 117, 43, 11, 31, 37, 124, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.986801271683);
    msg.setSource(20029U);
    msg.setSourceEntity(110U);
    msg.setDestination(34694U);
    msg.setDestinationEntity(21U);
    msg.sys_src.assign("IJCACDULFORFHNNQPGXEKORKTIWCINAZUDPXMSMTCOTSJDBCPTDCNMAHMETZJVQWORHTXAZDFZGNBYYSIIGAWVXAQWYJKGQQTLBEWUJIVPPYBMOVNF");
    msg.sys_dst.assign("BUXKLBWCVFVOHTRHUBLRJMPGRJCOHPPDHGNTAQWYDOYXHPDRSMQXCEAXPMNPWGZNWNRHLMIGQJFDJITZVNEKDFSLEHOSATSEDIQQAEDFKRTJWKPUPYAZEVYCKFXFFPNRYSTLQRQBUYWMDUFMVGDCUBVDVCSAWWOENYAJZKBKZGNGIMAXZIEMIQFAUBGKSYCIIUOSTXWUJKTEHOZGZNGVVJLSL");
    msg.flags = 232U;
    const char tmp_msg_0[] = {9, 77, 70, 73, -50, -35, -91, 24, -69, 41, 114, -90, -41, -99, -73, 71, -61, -85, 91, -100, 74, -97, 85, -50, 110, 17, 54, -93, -128, 95, -27, -111, 76, 55, 5, -17, -60, 24, -3, 15, -115, 115, -58, -71, 10, -15, 115, -55, -41, 107, 13, 66, 29, -7, -21, -82, -33, -57, -40, -12, 42, -20, -27, -2, -102, -20, -82, 31, 50, 58, -36, 125, 91, -66, -99, 118, -104, -84, 86, 26, -87, -93, -95, -121, 101, -74, 56, -114, 80, 53, -10, 51, 28, 43, 68, -62, 103, -51, 19, -81, -30, -119, 54, -106, -57, -31, 119, -97, 102, -122, -78, 22, -62, -40, 91, 105, 50, -59, 104, 126, 27, -6, 23, 109, -92, -33, 50, 52, -47, 23, -107, -101, 60, 53, 97, 99, 96, -84, -35, -70, 6, 74, 32, 104, -24, -85, 70, -115, -88, 116, -57, 69, 95, -33, -44, 3, -78, -121, -72, -96, -114, 66, -14, 6, -108, -3, 26, 4, -61, -64, 50, -12, -10, -46, -29, 94, 99, -108, -98, -18, -121, -112, 107, -16, -13, 107, 63, -99, 90, 96, 52, 47, -3, -118, -120, -27, -90, -20, -54, 29, -106, 8, -78, 78, 113, 82, 67, -112, 98, 95, -75, 24, 23, 50, 56, -61, 100, 71, 66, -99, -115, 47, 19, -49, 9, 74, -78, -83, 11, 54, 105, 10, -42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.572118175698);
    msg.setSource(7113U);
    msg.setSourceEntity(177U);
    msg.setDestination(60029U);
    msg.setDestinationEntity(86U);
    msg.sys_src.assign("ZZEBHAYCWWOJHLTIKODIVYIBXSTOHGACXBULRTFFQJUFAEMQ");
    msg.sys_dst.assign("BMQVHRZGPEYGATXUGLUCIOALSSHLQXRGEHZATOCPOCHGMJLNDKBKAFDKCNNYXBXPVXJGHRLIVNWYMEIOTZDDXBKSVLKLMSUCCWKWGRNRQUAYHENDGOZ");
    msg.flags = 243U;
    const char tmp_msg_0[] = {13, 40, 43, 27, 119, 37, 56, 73, 114, 117, -120, -36, -73, 28, -29, -82, 48, -30, 43, -107, 68, 45, 63, -120, -20, 30, 55, -122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.419433271955);
    msg.setSource(32383U);
    msg.setSourceEntity(180U);
    msg.setDestination(14682U);
    msg.setDestinationEntity(146U);
    msg.seq = 46575U;
    msg.value = 210U;
    msg.error.assign("CBDPIFVVQFQCBDDBHHLNZJLTYXAWVFXEOYOMPETNCYESLUGCSJAOEJYRRNKIQCZSGLPQSOVGWMQKYEZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.148994136762);
    msg.setSource(47105U);
    msg.setSourceEntity(138U);
    msg.setDestination(64428U);
    msg.setDestinationEntity(135U);
    msg.seq = 39445U;
    msg.value = 216U;
    msg.error.assign("LFYMCLFIAMEVNSABSUIZULNIQEVFQWPZQMBKTCPCCQZDVNRHSXYQMNJMUXOCZRGKFVTATPDJRDHDPBKIDEUUHKLIMTRCNTZBAAVASXLCTOGHRROXMPPSLOXVTQJYYIEDEOKTUGCXPSZESHZDKKXOAGIJZJF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.743595461005);
    msg.setSource(11332U);
    msg.setSourceEntity(40U);
    msg.setDestination(38004U);
    msg.setDestinationEntity(151U);
    msg.seq = 7149U;
    msg.value = 172U;
    msg.error.assign("TIEFKUFKJGCBABDKWMFDUYPGCYGHHCAIILSUGSTMVWSKBDSBTSPTIOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.20689417327);
    msg.setSource(18766U);
    msg.setSourceEntity(114U);
    msg.setDestination(19139U);
    msg.setDestinationEntity(130U);
    msg.seq = 45014U;
    msg.sys.assign("TMTEKSEGGHLVOZGJIAIBWMJOUTIBQZOYASUDUGLVEOQHIRTQDXNWWKHUCQPBLIFVJQBNIISJKOKZWBSEM");
    msg.value = 0.207801068452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.237951657455);
    msg.setSource(51332U);
    msg.setSourceEntity(251U);
    msg.setDestination(12372U);
    msg.setDestinationEntity(92U);
    msg.seq = 7505U;
    msg.sys.assign("RBHPHJVKRXFEJXYWLCBNEGYYLHBEENIMOYSTNDIXKDFWZGSKZJXILPTHNUTDTASMNIEZDYRJFTCMSIPJDZMKPHALINZEFZQJNRMQOPYBUTPKCQARFSFWUKYQPMALRAOFHSRUFEIT");
    msg.value = 0.495756938693;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.00841660723395);
    msg.setSource(10602U);
    msg.setSourceEntity(250U);
    msg.setDestination(44460U);
    msg.setDestinationEntity(59U);
    msg.seq = 2855U;
    msg.sys.assign("UJAYOAHNRKFYPYFWLVFLUBMBHJKEGEJHYNUSDABCNZEFGERJSKCRARAATALTVTEGMBVELJMIVMQCQBOUILWOHOTIZIXYYCPIRKFCKQQNZCHEWDXKWIUZZWQQGMAEHUFNDQYPFIJMHFSYOERXWDFNDLUUJJENCQYZIDHJXGMASVTTLZTZRKHANGBPDLXNJVPKKQMSVSXDORGGZOBWLPYSWXXVTOPBGXSBIWNTPQMOHWRCLDPVMFVCBRDPTSIU");
    msg.value = 0.400918558423;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.355301321269);
    msg.setSource(15651U);
    msg.setSourceEntity(209U);
    msg.setDestination(65009U);
    msg.setDestinationEntity(70U);
    msg.seq = 38321U;
    msg.sys_dst.assign("GILSPIHZXWOQEVFBTATTNWWJEINZUOWKOPOVRHAFHSTXPINBXAYEDEZYNRJIIMKAKUYDTHLPMEBDREYUJSGFTYOLJHSQPIGKDLYKBCSDGEMFARPFIEMHCGBOHTBDWQQXGNNOMWHGLAPPJUPJZZBLRCTVGQEXAKVIVXUUXVKDLFSJDZQYFMREUAWUZG");
    msg.timeout = 0.159362366027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.262987074221);
    msg.setSource(47472U);
    msg.setSourceEntity(169U);
    msg.setDestination(6334U);
    msg.setDestinationEntity(67U);
    msg.seq = 32797U;
    msg.sys_dst.assign("ROBZJDPSPHCLPYEYJMWUSRHYUCXUIMHTOJXMJYCPSGDPRLNZHYTQHRSTEZLNVKYFLSMWMWSLAITHEFKTOVIKVPNLGIDHVDEATRQWHFZKWPEGAMGUQBZBOPFKWMHI");
    msg.timeout = 0.0271753903258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.315367508844);
    msg.setSource(35924U);
    msg.setSourceEntity(108U);
    msg.setDestination(59578U);
    msg.setDestinationEntity(231U);
    msg.seq = 30366U;
    msg.sys_dst.assign("SXTFZIKFJLMIEVWSSYIXEOHWUUWKHYOUCJPZIEBRDWINVVMMHKNRKRKOLZWKYVFKTNFQGVZAHRGCWEDMKSEJPIVULZVIGYBGQDUNQCBZSBXRVXGWJNITUEMFPNCBDOXTJLZMMSNNAGLST");
    msg.timeout = 0.314321396866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.451320524146);
    msg.setSource(18090U);
    msg.setSourceEntity(117U);
    msg.setDestination(33209U);
    msg.setDestinationEntity(59U);
    msg.action = 222U;
    msg.longain = 0.331120292574;
    msg.latgain = 0.475398107221;
    msg.bondthick = 893770006U;
    msg.leadgain = 0.520263979864;
    msg.deconflgain = 0.310605763683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.430237093072);
    msg.setSource(60799U);
    msg.setSourceEntity(139U);
    msg.setDestination(60021U);
    msg.setDestinationEntity(38U);
    msg.action = 214U;
    msg.longain = 0.469401585587;
    msg.latgain = 0.984675604828;
    msg.bondthick = 2329272712U;
    msg.leadgain = 0.19877298247;
    msg.deconflgain = 0.852485790356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.416927509293);
    msg.setSource(16256U);
    msg.setSourceEntity(124U);
    msg.setDestination(24648U);
    msg.setDestinationEntity(70U);
    msg.action = 34U;
    msg.longain = 0.69704536528;
    msg.latgain = 0.417816247051;
    msg.bondthick = 3116530887U;
    msg.leadgain = 0.712330511037;
    msg.deconflgain = 0.522857158174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.21769875898);
    msg.setSource(44005U);
    msg.setSourceEntity(6U);
    msg.setDestination(696U);
    msg.setDestinationEntity(246U);
    msg.err_mean = 0.492356049809;
    msg.dist_min_abs = 0.705908199107;
    msg.dist_min_mean = 0.179573814089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.630360648222);
    msg.setSource(22356U);
    msg.setSourceEntity(5U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(65U);
    msg.err_mean = 0.0821764117751;
    msg.dist_min_abs = 0.748781659816;
    msg.dist_min_mean = 0.273091543774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.951225020655);
    msg.setSource(34493U);
    msg.setSourceEntity(106U);
    msg.setDestination(16217U);
    msg.setDestinationEntity(70U);
    msg.err_mean = 0.128887588371;
    msg.dist_min_abs = 0.194956136549;
    msg.dist_min_mean = 0.65317286786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.553132226393);
    msg.setSource(20813U);
    msg.setSourceEntity(35U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(164U);
    msg.action = 166U;
    msg.lon_gain = 0.191826961673;
    msg.lat_gain = 0.950112450525;
    msg.bond_thick = 0.395934507617;
    msg.lead_gain = 0.551353034351;
    msg.deconfl_gain = 0.328765690609;
    msg.accel_switch_gain = 0.217666925883;
    msg.safe_dist = 0.40337329828;
    msg.deconflict_offset = 0.760547823923;
    msg.accel_safe_margin = 0.847076113223;
    msg.accel_lim_x = 0.710167181879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.127591022783);
    msg.setSource(47472U);
    msg.setSourceEntity(195U);
    msg.setDestination(29738U);
    msg.setDestinationEntity(224U);
    msg.action = 79U;
    msg.lon_gain = 0.0726238562138;
    msg.lat_gain = 0.809331141428;
    msg.bond_thick = 0.909548145872;
    msg.lead_gain = 0.572484004273;
    msg.deconfl_gain = 0.995502416201;
    msg.accel_switch_gain = 0.0795611301862;
    msg.safe_dist = 0.442182225075;
    msg.deconflict_offset = 0.227402378923;
    msg.accel_safe_margin = 0.785700596493;
    msg.accel_lim_x = 0.136520642137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.118425137327);
    msg.setSource(45049U);
    msg.setSourceEntity(186U);
    msg.setDestination(37524U);
    msg.setDestinationEntity(170U);
    msg.action = 97U;
    msg.lon_gain = 0.71311222747;
    msg.lat_gain = 0.0172015329853;
    msg.bond_thick = 0.0529922588963;
    msg.lead_gain = 0.857190189508;
    msg.deconfl_gain = 0.714231308414;
    msg.accel_switch_gain = 0.80007893549;
    msg.safe_dist = 0.329508669192;
    msg.deconflict_offset = 0.103666040988;
    msg.accel_safe_margin = 0.263380821736;
    msg.accel_lim_x = 0.150545637226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.441936738359);
    msg.setSource(58165U);
    msg.setSourceEntity(113U);
    msg.setDestination(35604U);
    msg.setDestinationEntity(96U);
    msg.type = 51U;
    msg.op = 241U;
    msg.err_mean = 0.0278103651796;
    msg.dist_min_abs = 0.439904230705;
    msg.dist_min_mean = 0.614695261158;
    msg.roll_rate_mean = 0.286400454195;
    msg.time = 0.270682846697;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 63U;
    tmp_msg_0.lon_gain = 0.370324933153;
    tmp_msg_0.lat_gain = 0.748155833468;
    tmp_msg_0.bond_thick = 0.183982171776;
    tmp_msg_0.lead_gain = 0.848752039995;
    tmp_msg_0.deconfl_gain = 0.444130471251;
    tmp_msg_0.accel_switch_gain = 0.0975971084831;
    tmp_msg_0.safe_dist = 0.323816027723;
    tmp_msg_0.deconflict_offset = 0.481735144806;
    tmp_msg_0.accel_safe_margin = 0.736798371625;
    tmp_msg_0.accel_lim_x = 0.168273500381;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.0153873192183);
    msg.setSource(32322U);
    msg.setSourceEntity(173U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(204U);
    msg.type = 192U;
    msg.op = 125U;
    msg.err_mean = 0.719022452572;
    msg.dist_min_abs = 0.912086569333;
    msg.dist_min_mean = 0.683320022079;
    msg.roll_rate_mean = 0.412777591503;
    msg.time = 0.237692072176;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 134U;
    tmp_msg_0.lon_gain = 0.0760066557709;
    tmp_msg_0.lat_gain = 0.19067975357;
    tmp_msg_0.bond_thick = 0.213393526781;
    tmp_msg_0.lead_gain = 0.0777598628707;
    tmp_msg_0.deconfl_gain = 0.879324268615;
    tmp_msg_0.accel_switch_gain = 0.85776836997;
    tmp_msg_0.safe_dist = 0.879518782972;
    tmp_msg_0.deconflict_offset = 0.278081424652;
    tmp_msg_0.accel_safe_margin = 0.360851787606;
    tmp_msg_0.accel_lim_x = 0.254520620395;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.300878420749);
    msg.setSource(34121U);
    msg.setSourceEntity(91U);
    msg.setDestination(42302U);
    msg.setDestinationEntity(192U);
    msg.type = 41U;
    msg.op = 181U;
    msg.err_mean = 0.7495812758;
    msg.dist_min_abs = 0.0569172831699;
    msg.dist_min_mean = 0.00787809578657;
    msg.roll_rate_mean = 0.165677199898;
    msg.time = 0.00133475399145;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 187U;
    tmp_msg_0.lon_gain = 0.92771686332;
    tmp_msg_0.lat_gain = 0.290626945555;
    tmp_msg_0.bond_thick = 0.831519721764;
    tmp_msg_0.lead_gain = 0.194491246891;
    tmp_msg_0.deconfl_gain = 0.484208293542;
    tmp_msg_0.accel_switch_gain = 0.0921286908666;
    tmp_msg_0.safe_dist = 0.549092903529;
    tmp_msg_0.deconflict_offset = 0.594075601831;
    tmp_msg_0.accel_safe_margin = 0.511228966749;
    tmp_msg_0.accel_lim_x = 0.957946723953;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.761619203574);
    msg.setSource(18806U);
    msg.setSourceEntity(125U);
    msg.setDestination(65120U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.658074160279;
    msg.lon = 0.89977151283;
    msg.eta = 132788165U;
    msg.duration = 29906U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.934124655907);
    msg.setSource(24975U);
    msg.setSourceEntity(32U);
    msg.setDestination(14959U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.523012095411;
    msg.lon = 0.896671512996;
    msg.eta = 4064203486U;
    msg.duration = 8139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.209264615719);
    msg.setSource(56690U);
    msg.setSourceEntity(115U);
    msg.setDestination(14839U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.37240021689;
    msg.lon = 0.306514590508;
    msg.eta = 1575739734U;
    msg.duration = 58266U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.448396282405);
    msg.setSource(22428U);
    msg.setSourceEntity(56U);
    msg.setDestination(63490U);
    msg.setDestinationEntity(181U);
    msg.plan_id = 9871U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.962332419283;
    tmp_msg_0.lon = 0.264181400797;
    tmp_msg_0.eta = 2171127526U;
    tmp_msg_0.duration = 49858U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.0413654728727);
    msg.setSource(1701U);
    msg.setSourceEntity(15U);
    msg.setDestination(18939U);
    msg.setDestinationEntity(55U);
    msg.plan_id = 65333U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.437991171043;
    tmp_msg_0.lon = 0.656126834604;
    tmp_msg_0.eta = 1684389081U;
    tmp_msg_0.duration = 58492U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.614176471479);
    msg.setSource(48542U);
    msg.setSourceEntity(65U);
    msg.setDestination(64032U);
    msg.setDestinationEntity(96U);
    msg.plan_id = 42146U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.737071019004;
    tmp_msg_0.lon = 0.0932073556237;
    tmp_msg_0.eta = 2951259475U;
    tmp_msg_0.duration = 9795U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.765633425859);
    msg.setSource(43923U);
    msg.setSourceEntity(96U);
    msg.setDestination(363U);
    msg.setDestinationEntity(156U);
    msg.type = 192U;
    msg.command = 170U;
    msg.settings.assign("DYNKIWTSPIYYXQHNKQWGAELGTRUNILREMLZAYUWQGHOBKCXV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11653U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.142976513784;
    tmp_tmp_msg_0_0.lon = 0.432200439218;
    tmp_tmp_msg_0_0.eta = 3205802548U;
    tmp_tmp_msg_0_0.duration = 21457U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WVVCGLEAWRUFUHXOTEXBHPVTUOTNJQFOFOVEZQTBOAOYMBAUZGYHJRIGKGIRBZKWBXVBJEKUCPJECNSAISFUYXLJTSFHFNGJTNXDVMAFFILIGVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.511891433581);
    msg.setSource(32050U);
    msg.setSourceEntity(49U);
    msg.setDestination(58537U);
    msg.setDestinationEntity(169U);
    msg.type = 197U;
    msg.command = 29U;
    msg.settings.assign("ZHRXWAJGFPUBOPBDXXTOUPMZKGZVCLYKTXEVBVJMYTYNQDGXVHZYXQYRMEVQUANWNSBHCGWICSMXPQITSGFJBMURCLHQEEYATKRPLGKAWWQLQREKFLGCCFBJFIAXJBSLOSDRZJWEUOLPPFRZWYTIQZDKVPMVKIANNKNADBSQEGUMCFSPYHCDHVMBHDEN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65127U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.742689692683;
    tmp_tmp_msg_0_0.lon = 0.509859411868;
    tmp_tmp_msg_0_0.eta = 3959345607U;
    tmp_tmp_msg_0_0.duration = 26162U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MBNKUCDOUOHAGSRFDHDKAAVUZQOIEHJEUNXJUIAYVLNSVNZFIKPLWSGMTGVQGDECHWUPQPYFRICTGMLHHJAOKKTFGRCEKWMEGECJPFAXNGDOAPDBTFRYLZQLSWMCIBNOXBGSFPPWXLZTURTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.362679513532);
    msg.setSource(23722U);
    msg.setSourceEntity(223U);
    msg.setDestination(53419U);
    msg.setDestinationEntity(169U);
    msg.type = 110U;
    msg.command = 227U;
    msg.settings.assign("HDJMRWCUXGBSSATMSKGOQAATULZFJTWDLVZACLIPORYISNPPJEEHWSRNKIHYEGJOXCKAVREXNSPMAYOBFWHBNFUXXPDJTHBFKEPDYJCYDKQQDDITLUNQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12115U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.165050578097;
    tmp_tmp_msg_0_0.lon = 0.865979193703;
    tmp_tmp_msg_0_0.eta = 3624650649U;
    tmp_tmp_msg_0_0.duration = 16584U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CMGPLXBTKNOZCAAKQXNJGONWHVNCWSBKYZNXYBIGZUROIDMEUOCJDJYVBWHFWUMDZXPKEHSCRKHVWETVOTOFQLRNIGXUYIRIVRSEAJUYLJGQRJFLVPQXFMLWPEOGSXGMBVNFNFDJFBAMPDKCQQDRDHEGVXUHZOITKSWYNIEQSUZUKCYZXHTKSMZBIQUHWPYDTERNPGEIADWLBABIGKYPTAVLESQABOHAUMZTFJSXQWFTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.829783938236);
    msg.setSource(10341U);
    msg.setSourceEntity(187U);
    msg.setDestination(41332U);
    msg.setDestinationEntity(236U);
    msg.state = 153U;
    msg.plan_id = 47092U;
    msg.wpt_id = 223U;
    msg.settings_chk = 31700U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.929421483036);
    msg.setSource(63774U);
    msg.setSourceEntity(211U);
    msg.setDestination(61511U);
    msg.setDestinationEntity(33U);
    msg.state = 237U;
    msg.plan_id = 60978U;
    msg.wpt_id = 141U;
    msg.settings_chk = 773U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.962514195831);
    msg.setSource(4940U);
    msg.setSourceEntity(35U);
    msg.setDestination(51545U);
    msg.setDestinationEntity(133U);
    msg.state = 89U;
    msg.plan_id = 25972U;
    msg.wpt_id = 195U;
    msg.settings_chk = 56019U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.238188668706);
    msg.setSource(52858U);
    msg.setSourceEntity(80U);
    msg.setDestination(41056U);
    msg.setDestinationEntity(20U);
    msg.uid = 71U;
    msg.frag_number = 161U;
    msg.num_frags = 122U;
    const char tmp_msg_0[] = {67, 92, -40, -66, -71, -81, -103, -16, 15, 26, 33, -71, -25, -8, -88, 40, -110, 19, 40, 28, 50, 114, 83, 15, 80, 97, 95, 50, -25, 60, -8, 77, -90, 41, 25, 104, 46, 108, -29, 96, 64, -47, 108, -51, -52, -87, 42, -126, -82, -49, -58, -26, 124, -106, 108, -56, 56, -80, 4, -84, 98, 108, 63, -121, -91, -88, 101, 18, -67, 29, -61, 57, 63, -127, 29, 10, -33, 45, -34, -104, 38, -69, -20, -44, 86, -97, 49, 20, 91, -51, 126, -60, 32, 118, -113, -51, 43, 76, 92, 3, -29, -96, 90, 85, 35, -18, 18, -19, 82, 117, -64, 72, -25, -101, 125, -87, 34, 9, 80, 45, 97, 92, 19, 0, -22, 56, -22, -61, -105, 101, -75, 40, -63, -86, 119, 7, -116, 1, -128, 15, -42, 14, -38, 9, -99, 94, 34, 89, 24, 118, 125, 13, 123, -77, -116, -34, 31, 66, 39, -42, 97, -67, -15, -47, -100, 84, -89, 7, 52, 75, 80, -75, 20, 55, -119, 79, 102, -68, 49, -55, 50, -1, -95, -110, -49, -86, -123, -24, 105, -80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.975463023212);
    msg.setSource(51483U);
    msg.setSourceEntity(239U);
    msg.setDestination(63194U);
    msg.setDestinationEntity(53U);
    msg.uid = 183U;
    msg.frag_number = 2U;
    msg.num_frags = 45U;
    const char tmp_msg_0[] = {31, -72, -98, 107, -59, 103, -23, 91, 81, -87, -15, 105, 124, 124, -62, 8, -23, 65, 29, -100, 87, 122, 47, 120, 29, -106, 58, 118, -26, 37, 81, -49, -90, -113, -116, 95, 63, 89, -109, 119, 40, 87, 107, 94, 89, 92, -5, -10, 120, 52, 77, 122, 11, -21, 71, 68, 28, 119, -31, 125, -19, 43, -126, 69, 51, 123, -44, 2, -107, -15, 48, -72, -43, -28, 107, 103, -110, 118, -32, 69, 101, 106, 84, 69, 84, 36, 46, -13, -89, 9, 28, 20, -122, 67, 108, 35, -109, 104, 26, 27, -5, -106, -26, 113, 6, 101, -27, 5, -65, 85, 93, -101, 42, -25, -107, -83, 1, -117, -71, 59, -125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.054731961817);
    msg.setSource(5407U);
    msg.setSourceEntity(68U);
    msg.setDestination(15093U);
    msg.setDestinationEntity(175U);
    msg.uid = 243U;
    msg.frag_number = 209U;
    msg.num_frags = 63U;
    const char tmp_msg_0[] = {113, 126, 80, -119, -100, 62, 64, -5, -4, -96, -127, -44, -45, -104, 75, -4, 63, -119, 101, 23, 87, -83, 78, 103, -25, 57, -37, -2, 28, 65, 116, 36, -101, 76, -1, 75, -56, -27, 57, -97, -76, -97, -22, 79, -56, 13, 38, -63, 73, 112, 58, 11, -31, 101, -67, 24, -48, 89, 97, -62, 49, 77, -20, 126, 126, -4, -42, -111, -68, 95, 124, 27, -17, -74, -108, 94, -112, 107, -89, 100, -90, -88, 72, 58, 33, 30, 58, 8, -40, -32, 11, 72, 88, 2, -11, 114, -4, -35, -6, -123, -50, -35, -99, 53, 106, 64, 112, 56, 42, 11, 112, -53, -42, -127, -111, -19, -42, 3, 70, -10, 2, -110, 56, 66, 16, -33, -46, -37, -6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.477103798861);
    msg.setSource(56602U);
    msg.setSourceEntity(124U);
    msg.setDestination(9124U);
    msg.setDestinationEntity(81U);
    msg.content_type.assign("GJFQIWQPBJZOTUOUUVQTCCSKPCMONFWDBOCXKHJTSVBQJIDKLYZBGQBWBOMQFYTZKPUCYXIFOLTUGCJQZRVZERYGUOCKRZAGUNISESUBJEPNNXLGSCFZWUSNVPRLHLXHQDWIJHPEDEIJHVMWYRBSAEBQRRXGJTNHYDAZIKNFVHDTAYXLVNMXLEQOXRIRKNMWYITTUEXPLXEOSPFDLNEALGHMFDSPVAA");
    const char tmp_msg_0[] = {110, 10, 118, -123, 41, 99, 48, -100, -78, 21, 39, -25, 83, 33, 25, -17, 11, -21, -43, -45, 29, 20, -3, -50, 21, 72, -85, 33, 91, 110, -36, 58, -48, 24, 99, -124, -96, 2, 9, -128, -102, -98, 73, 33, -66, 89, -49, -65, -89, -70, -118, -59, 77, -3, 61, -109, -52, 6, 112, -29, 62, -84, -120, 21, 8, -86, -54, -54, 10, 124, -92, 125, -97, 65, 109, 18, 107, 74, 31, 3, 118, -44, 59, 49, 65, -8, 20, -63, 99, -104, 118, -58, -67, -16, 20, 55, -86, 109, 38, 35, 69, 22};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.980154119411);
    msg.setSource(20600U);
    msg.setSourceEntity(82U);
    msg.setDestination(6189U);
    msg.setDestinationEntity(62U);
    msg.content_type.assign("ENTJYKJTBEIBWAKBTJPLWOODVACDHHJROEKHHNBJQHCWAKXMKEFAFFQNLBDFPMEPZAKPDCGPQQIVTQMSIFGMTWZCLSYNOXMJGKXRFLFRMIYZVXLZYYSJSIUSYBRSDKHXQNNAGGUMAZCWWGVVBEDOZQXHCVWPHXMXOTJHBEFIOSZIZRMIUGGUDCEDYWHNBAXNLUDR");
    const char tmp_msg_0[] = {-98, -99, -63, 5, -116, 18, 101, -57, -127, 38, -27, -94, -74, 89, -113, 4, -81, -67, -35, -68, 40, -77, 51, 57, -61, -20, -73, 71, 89, 56, 57, -85, -98, -27, -22, -70, -26, -113, 106, -1, 91, -103, 26, 94, 82, 39, 99, 120, -81, 23, 46, -36, -101, -90, 56, 42, -17, 26, -79, -87, -17, -89, -7, 63, -108, -6, 67, -97, 7, 70, -52, -1, -12, -122, -125, 123, -63, -112, -113, 102, 64, 102, -16, 117, 92, -128, -61, 39, -12, 122, 109, -12, 1, -128, -126, -65, -16, 101, 122, -124, 74, -75, 100, 9, -12, -112, -74, -36, -104, -119, -118, -90, -71, 11, 120, -50, 57, -37, -13, 70, -1, 7, -73, 48, 55, 125, -11, 99, 120, 17, 11, -86, 90, 33, 124, 114, -47, 109, -117, 68};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.138290055026);
    msg.setSource(51917U);
    msg.setSourceEntity(33U);
    msg.setDestination(28245U);
    msg.setDestinationEntity(137U);
    msg.content_type.assign("HADUCTMGIOCFAJFQMHWKNJFTDROEWQEVTWZEPEQSXOPNNAZDXDLGCNQHQZBAFNVNJTPITGIXYTDALXWBRSBZMCJBQPYGQRSHXKNXXIVYTSPUDLLQRLBRCLGUVKXEGNW");
    const char tmp_msg_0[] = {-10, 54, 109, 106, -66, 9, 21, 16, 113, -63, -38, -22, 44, -91, 18, -111, -98, 109, -96, 89, 84, -29, 24, -25, 52, -29, -46, -90, -62, -64, 82, -95, -114, -34, 53, 21, -33, 99, -106, -61, -71, 55, 16, -106, 84, 72, 116, -44, -103, 20, -8, -121, 82, -105, 14, -57, -64, 23, -85, -59, -7, 37, -24, -27, 120, -20, -68, 66, 95, -97, -62, -115, 32, 72, -26, 7, 59, -32, 86, 72, 31, 60, 58, -90, -1, 71, 38, 8, -91, 31, 10, -20, -42, 123, -68, 88, 37, -9, -54, -63, 73, -120, -30, 35, -21, 91, 79, -16, 114, 91, -61, 65, 28, -43, -104, 3, -65, 115, -42, -41, 111, -2, 119, -7, -74, -121, -6, 45, -76, -28, -83, -58, 122, -90, -5, -100, 25, -95, 111, -46, 126, 119, -67, -38, 92, 44, -37, 87, 120, -16, -50, -7, 58, 19, 108, -89, 45, -66, -42, -119, -46, 54, 64, -73, 11, 71, -69, -9, -58, -108, -107, 114, -89, -81, -59, 38, -106, 42, -114, -93, 71, 75, -82, 62, 5, -69, -49, -23, -67, -121, -10, 50, 79, -39, 121, 81, -111, 61, 122, 1, 2, -4, -77, -5, -1, 38, -45, 77, -47, 46, 0, -2, -45, -86};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.290768193572);
    msg.setSource(2771U);
    msg.setSourceEntity(83U);
    msg.setDestination(26572U);
    msg.setDestinationEntity(20U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.395954576622);
    msg.setSource(1449U);
    msg.setSourceEntity(189U);
    msg.setDestination(7693U);
    msg.setDestinationEntity(238U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.855661864594);
    msg.setSource(43830U);
    msg.setSourceEntity(216U);
    msg.setDestination(23946U);
    msg.setDestinationEntity(247U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.0203514543982);
    msg.setSource(34900U);
    msg.setSourceEntity(103U);
    msg.setDestination(23060U);
    msg.setDestinationEntity(74U);
    msg.target = 52922U;
    msg.bearing = 0.0550064617577;
    msg.elevation = 0.824275089698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.552071251783);
    msg.setSource(34737U);
    msg.setSourceEntity(33U);
    msg.setDestination(22389U);
    msg.setDestinationEntity(232U);
    msg.target = 32089U;
    msg.bearing = 0.736542441115;
    msg.elevation = 0.908535908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.975188904768);
    msg.setSource(26071U);
    msg.setSourceEntity(190U);
    msg.setDestination(47749U);
    msg.setDestinationEntity(7U);
    msg.target = 21027U;
    msg.bearing = 0.632558160269;
    msg.elevation = 0.89962196862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.40523295484);
    msg.setSource(44949U);
    msg.setSourceEntity(135U);
    msg.setDestination(28927U);
    msg.setDestinationEntity(32U);
    msg.target = 12375U;
    msg.x = 0.668986559307;
    msg.y = 0.0584879510134;
    msg.z = 0.334659674048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.245013905256);
    msg.setSource(3133U);
    msg.setSourceEntity(174U);
    msg.setDestination(20017U);
    msg.setDestinationEntity(35U);
    msg.target = 3754U;
    msg.x = 0.827959009537;
    msg.y = 0.531437345806;
    msg.z = 0.364700370208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.897148044455);
    msg.setSource(10174U);
    msg.setSourceEntity(213U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(164U);
    msg.target = 18490U;
    msg.x = 0.529720906973;
    msg.y = 0.849377832062;
    msg.z = 0.102207470594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.104494239568);
    msg.setSource(56568U);
    msg.setSourceEntity(196U);
    msg.setDestination(35411U);
    msg.setDestinationEntity(197U);
    msg.target = 8406U;
    msg.lat = 0.468907110345;
    msg.lon = 0.733380183516;
    msg.z_units = 169U;
    msg.z = 0.657487608187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.941501073907);
    msg.setSource(65036U);
    msg.setSourceEntity(43U);
    msg.setDestination(23035U);
    msg.setDestinationEntity(73U);
    msg.target = 8522U;
    msg.lat = 0.135447174793;
    msg.lon = 0.596623249574;
    msg.z_units = 58U;
    msg.z = 0.0318242025799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.148555347257);
    msg.setSource(8248U);
    msg.setSourceEntity(78U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(218U);
    msg.target = 29200U;
    msg.lat = 0.661863231933;
    msg.lon = 0.201519682429;
    msg.z_units = 187U;
    msg.z = 0.776273358267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.405255054834);
    msg.setSource(50716U);
    msg.setSourceEntity(48U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(193U);
    msg.locale.assign("OMDUUSQHQBIOICXLXNYDGBWMHXJVJERSYRXUVZFMRAESXKFVVRIKEGRKWSHHANIUPVFFAKWIWGOLKLMONFTANCAMKSEXOGYFTHLVPGGXEGKKQEAVBIHILYNFFPBCJMQTWOJLBDGELSGBPRZLAYYKCYNDUCTBLSBPFQPGWZZMHJCORSFAACWQPMJPWMWZXVTDNTJQYQZEIORJJDOVADUNTCNTRUDSTRSWCEXHDCUOUYVLUZJIZNH");
    const char tmp_msg_0[] = {60, 74, -61, -50, -48, 30, -41, -117, -48, 35, 64, 96, 11, 96, -74, -104, 117, 74, 66, -44, -57, -56, 91, 52, 123, 4, 111, -31, 49, -89, -108, -46, 27, 111, -61, -117, -18, -23, -47, 45, 6, 15, 51, -106, 109, 101, 115, 106, 64, 0, 66, -113, -23, 64, 125, 81, 48};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.323449655283);
    msg.setSource(40368U);
    msg.setSourceEntity(46U);
    msg.setDestination(31U);
    msg.setDestinationEntity(218U);
    msg.locale.assign("CJKFQENSZJFXNUHQAVDIWMUACWDWXOLLENGVVXPZLZAPGYUCPHPBGJJPOKHGUQZKYGLOIZNT");
    const char tmp_msg_0[] = {54, -128, -127, 94, 113, 91, 26, 22, 17, 99, 108, 43, 50, -51, -103, 35, 110, -120, 46, -10, 7, 106, -69, -46, 58, 122, 65, 20, -15, -109, 126, 64, 110, 14, -117, 10, 0, -3, -18, 81, 2, -56, 101, 20};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.997081667251);
    msg.setSource(50230U);
    msg.setSourceEntity(90U);
    msg.setDestination(18477U);
    msg.setDestinationEntity(5U);
    msg.locale.assign("JMSFUTJLIWMLWQEGLQFMIJTZSUSZHVQYOEZGHSYGQVHXAAEGGNWHPPWTKFMFTNRSRHIFCCAWTVKYPYBODJ");
    const char tmp_msg_0[] = {-87, -93, 77, 15, 85, -81, -58, 84, -84, -72, 122, 16, 37, -93, -93, 122, -28, 20, -23, 29, 58, 99, 84, 73, -5, -88, 58, -113, -20, 84, -85, -2, 3, -72, -102, 111, 32, 29, -46, 99, 92, 12, 114, -88, -39, -106, 9, 14, 41, 115, 4, 35, 20, 78, -120, 13, 68, 1, 97, 25, -63, -44, -23, -47, -114, 52, -101, 73, -9, 111, -16, 118, -40, -113, 31, -18, 74, -3, -66, 85, -110, 97, 2, -123, -87, 15, -94, -125, -11, -85, -122, 61, -103, 52, 28, -50, -63, 23, 100, -47, -24, 62, -111, -10, -83, 85, 38, -79, 67, 9, 30, 55, 3, 4, 13, 37, 26, -68, 30, -103, -127, -73, -93, 52, -48, 51, 115, -51, 19, -2, 52, -105, 83, -65, -5, -1, -81, -29, 74, 80, 53, 21, 33, 16, 29, -83, -126, -33, 14, 89, 68, 102, -59, 33, -40};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.48418414923);
    msg.setSource(59869U);
    msg.setSourceEntity(62U);
    msg.setDestination(8135U);
    msg.setDestinationEntity(0U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.951484035183);
    msg.setSource(22720U);
    msg.setSourceEntity(47U);
    msg.setDestination(56349U);
    msg.setDestinationEntity(237U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.94022848607);
    msg.setSource(31903U);
    msg.setSourceEntity(228U);
    msg.setDestination(34077U);
    msg.setDestinationEntity(3U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.182965283466);
    msg.setSource(14889U);
    msg.setSourceEntity(86U);
    msg.setDestination(46441U);
    msg.setDestinationEntity(12U);
    msg.camid = 67U;
    msg.x = 39772U;
    msg.y = 63438U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.707262928721);
    msg.setSource(32724U);
    msg.setSourceEntity(176U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(142U);
    msg.camid = 106U;
    msg.x = 21600U;
    msg.y = 40140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.261438271395);
    msg.setSource(60521U);
    msg.setSourceEntity(159U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(120U);
    msg.camid = 122U;
    msg.x = 49867U;
    msg.y = 51231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.57900836241);
    msg.setSource(31691U);
    msg.setSourceEntity(121U);
    msg.setDestination(11853U);
    msg.setDestinationEntity(94U);
    msg.camid = 157U;
    msg.x = 32807U;
    msg.y = 59305U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.470253869209);
    msg.setSource(27004U);
    msg.setSourceEntity(56U);
    msg.setDestination(38284U);
    msg.setDestinationEntity(236U);
    msg.camid = 150U;
    msg.x = 2284U;
    msg.y = 60710U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.778745554119);
    msg.setSource(46025U);
    msg.setSourceEntity(218U);
    msg.setDestination(38584U);
    msg.setDestinationEntity(137U);
    msg.camid = 99U;
    msg.x = 38104U;
    msg.y = 8781U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.691819792089);
    msg.setSource(29322U);
    msg.setSourceEntity(82U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(191U);
    msg.tracking = 205U;
    msg.lat = 0.772731930927;
    msg.lon = 0.309303981819;
    msg.x = 0.359365135103;
    msg.y = 0.971140398402;
    msg.z = 0.699408257285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.967987398439);
    msg.setSource(53925U);
    msg.setSourceEntity(35U);
    msg.setDestination(48518U);
    msg.setDestinationEntity(23U);
    msg.tracking = 172U;
    msg.lat = 0.141502192152;
    msg.lon = 0.900211897046;
    msg.x = 0.816054454333;
    msg.y = 0.69494160809;
    msg.z = 0.420085813356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.966480006769);
    msg.setSource(62562U);
    msg.setSourceEntity(14U);
    msg.setDestination(2463U);
    msg.setDestinationEntity(195U);
    msg.tracking = 247U;
    msg.lat = 0.316483063201;
    msg.lon = 0.178872290302;
    msg.x = 0.683018821011;
    msg.y = 0.777070489319;
    msg.z = 0.842709098253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.948915089);
    msg.setSource(944U);
    msg.setSourceEntity(78U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(170U);
    msg.target.assign("SOXMVJDTMLU");
    msg.lbearing = 0.366636595022;
    msg.lelevation = 0.814025683577;
    msg.bearing = 0.113375780361;
    msg.elevation = 0.681433188443;
    msg.phi = 0.904654775969;
    msg.theta = 0.0447766459344;
    msg.psi = 0.354879448291;
    msg.accuracy = 0.00683058787455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.959049024934);
    msg.setSource(63888U);
    msg.setSourceEntity(42U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(6U);
    msg.target.assign("CRINTNGOIALFUISJBFMOJPUTGPDVOONPFSABZXIEDNTVS");
    msg.lbearing = 0.894210351462;
    msg.lelevation = 0.325838832421;
    msg.bearing = 0.660798221455;
    msg.elevation = 0.950869304555;
    msg.phi = 0.447159272492;
    msg.theta = 0.0964726058388;
    msg.psi = 0.537697017258;
    msg.accuracy = 0.738888834924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.182649784313);
    msg.setSource(40587U);
    msg.setSourceEntity(36U);
    msg.setDestination(38982U);
    msg.setDestinationEntity(58U);
    msg.target.assign("VVDKJHVPWLRAUJRODNANMKGIHAYYPHDMUYQDDZEOOGHFGJOIKHJWUGWPIUCUTGYPZTIFSWEXXLLYQJYEHWXCMMOEETZTFZPM");
    msg.lbearing = 0.0127959276596;
    msg.lelevation = 0.0697011867188;
    msg.bearing = 0.893451243192;
    msg.elevation = 0.532585372374;
    msg.phi = 0.0140087794671;
    msg.theta = 0.136713337689;
    msg.psi = 0.320762364886;
    msg.accuracy = 0.0262247415537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.352756846409);
    msg.setSource(55100U);
    msg.setSourceEntity(196U);
    msg.setDestination(31775U);
    msg.setDestinationEntity(195U);
    msg.target.assign("HZJISLEFACYUCGENKWGBUVZQLLFKZDXFXLSQZIIYYTLOKSCPTTVSHDHFFBRRGGBAORDZMWYUUKLMXGMJAEUDCQVDJFOORANMEKJQHTLTNXNKDCFQBNCWPNGDTJHOEOPVWMJVNXANWLRBIYWZWBDRJIJYHYWFFJMOKWTEPSASJBAZEMVVRSUMMPR");
    msg.x = 0.0736859652771;
    msg.y = 0.962794161257;
    msg.z = 0.865315032625;
    msg.n = 0.647054770074;
    msg.e = 0.247692654438;
    msg.d = 0.90961513893;
    msg.phi = 0.670026621048;
    msg.theta = 0.525996157981;
    msg.psi = 0.429675170841;
    msg.accuracy = 0.337492037569;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.88812140888);
    msg.setSource(55184U);
    msg.setSourceEntity(79U);
    msg.setDestination(4928U);
    msg.setDestinationEntity(190U);
    msg.target.assign("SXZHVWJBLTCORMDCGJZYPEKCYGOQOPHAXKMAPYGHMSACMRZUPWBVSNUEYHUDXDQMNHDOBJICTBOLALKBPWSHGYJDDMRNLJRTTFQIHTMAYIUIJXZZRKGRPNOTKTAIHBGUJTOUWNJZRFWQLVCKSDUEGHQBBKNQQYVBRBIURRV");
    msg.x = 0.764502910607;
    msg.y = 0.380743082135;
    msg.z = 0.950480259086;
    msg.n = 0.560592992956;
    msg.e = 0.145943139079;
    msg.d = 0.114928139413;
    msg.phi = 0.344522104606;
    msg.theta = 0.527545714203;
    msg.psi = 0.680293024577;
    msg.accuracy = 0.44790938963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.348609094567);
    msg.setSource(4701U);
    msg.setSourceEntity(112U);
    msg.setDestination(23471U);
    msg.setDestinationEntity(242U);
    msg.target.assign("OLDAIPIYZFKKVURXHXROYXSQOBMCSINFUPEFQDEYUMQBENPSCPPAGUWCFJZLZDVZWERCBPQCCLEYGGVYFTZM");
    msg.x = 0.826947451953;
    msg.y = 0.689114296151;
    msg.z = 0.800239703212;
    msg.n = 0.85560955308;
    msg.e = 0.727191197363;
    msg.d = 0.57842483938;
    msg.phi = 0.877138637139;
    msg.theta = 0.885221178961;
    msg.psi = 0.905337942331;
    msg.accuracy = 0.363232395283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.00745265970829);
    msg.setSource(9737U);
    msg.setSourceEntity(137U);
    msg.setDestination(11199U);
    msg.setDestinationEntity(99U);
    msg.target.assign("OPMXAYFSJMTXTCVLYQHKINNRUWHRWDDZKTWCLSFMKQVLWNSHMZQRXSUHFSBQPSNPVIJOTFVDRALMZWGDZCYKGEBHZQJTVUTTIMCUBCJYPAWZGXIKCWJDJAKNMLAPQKBAYQNSTCHMBASUGGPOLPZNRDJXREAGEXDHRPOOGURXYQQIOOVGBIZLUIDHQTMBDZIVZNXYKNEAEOLHJWGUAFYEBVKSJCFEGXEVKCSUPVDJEFBTWRFCLOLORIE");
    msg.lat = 0.879600805185;
    msg.lon = 0.454360341914;
    msg.z_units = 156U;
    msg.z = 0.64778626561;
    msg.accuracy = 0.746705886247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.746685966873);
    msg.setSource(57823U);
    msg.setSourceEntity(86U);
    msg.setDestination(32338U);
    msg.setDestinationEntity(61U);
    msg.target.assign("SWNSQKODLXVJLJRJBJCTQSPEOPXQPVHTYIRRDHUGXMLKFBPLHCRDTYEQWLGJZWUESEVLOVMAIBNWUSVWQCXAWAFVZAHGZCXUGIEZCKQUYVAUCBHQOOFUPNIOIPQNBGOTHWATDGGZWSGRPSOZFAPFXZNYCSMWIIMJVBJXBHZIL");
    msg.lat = 0.754763533561;
    msg.lon = 0.879302347977;
    msg.z_units = 123U;
    msg.z = 0.519585074746;
    msg.accuracy = 0.325117200883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.20577799614);
    msg.setSource(21502U);
    msg.setSourceEntity(70U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(172U);
    msg.target.assign("NLOABOEBQDMLJUXZWKLTPTJRGJLMTPKWRYGTOWGIYIYLCSPALLYXUHXECFVIXBWDGGIRDULGYPVDJVUBXRIKDWIAPMFNMNAVQLENKNBTHSWCBPTHSPFMVIFYNAZEMKQXBNVQDXFGXOBFEJTOKHFQYKRROYBDYHDQQSZOESAASCQJPSHWJQICVUCVHZCAZVEUZKFECMLGHTZTORGHEVJBKXWTUSRDFQSJWPYKAZZMZRUMHDNPMCNGFOISJNOIC");
    msg.lat = 0.0344311648085;
    msg.lon = 0.116406614852;
    msg.z_units = 121U;
    msg.z = 0.474562274038;
    msg.accuracy = 0.0519834625639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.306211261094);
    msg.setSource(20640U);
    msg.setSourceEntity(169U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(90U);
    msg.name.assign("ECAZCIGFYYHIRLYVVNFZFYABCGVULGLTVOSOOOMTKBYJTXEOKHWDVIEUUPRSPIESFOZPMIPUZINPBSRLKQKQJYHMGXPCFBXHFAVBBJKEUEHUXEGDZMHDFSPIVMTYBNGDDSQDLVRCNBQMRAUMQJXNZIQKKFKCRWOPSJXTWTJTRLQYN");
    msg.lat = 0.504042208595;
    msg.lon = 0.744676632841;
    msg.z = 0.24103837318;
    msg.z_units = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.297565513511);
    msg.setSource(9097U);
    msg.setSourceEntity(207U);
    msg.setDestination(56755U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NLNDPRZVZWJCRQLQPOOKPIYUCLGDAQBVDKUGIKVCFOHTGYCFERIJUHXDSOWGRNMQMEFVIXSEJSKWUINVADJHGIAMJKZFQXOGIPRQEBPTCJCZSUARVSOBHZXKGLOTHAMAXSWOCCVKSMDEESMEAMYTZNPSBZXLRYVBPUJTTNYKZKRQATNFMOINEYEQFKPCIFIYXOQZRFBPVXD");
    msg.lat = 0.29206690813;
    msg.lon = 0.903358642096;
    msg.z = 0.067422685645;
    msg.z_units = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.117338413012);
    msg.setSource(57069U);
    msg.setSourceEntity(112U);
    msg.setDestination(62580U);
    msg.setDestinationEntity(6U);
    msg.name.assign("EBWEBPRRBHLQATTDXOTKVIWONTFQJFRQAEIGCSMRICEZGZCUHQPAMCWBDJL");
    msg.lat = 0.451054845774;
    msg.lon = 0.623819197269;
    msg.z = 0.719828018934;
    msg.z_units = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.924900637227);
    msg.setSource(61925U);
    msg.setSourceEntity(32U);
    msg.setDestination(64408U);
    msg.setDestinationEntity(193U);
    msg.op = 86U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PYZHLNGHHCHUVGIEJFCQRQMCPDIIZSGALOLYUJNJVTVAVOKQGIYUCHLKDDPU");
    tmp_msg_0.lat = 0.740052593335;
    tmp_msg_0.lon = 0.751868734876;
    tmp_msg_0.z = 0.269342776846;
    tmp_msg_0.z_units = 196U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.44762376401);
    msg.setSource(64966U);
    msg.setSourceEntity(202U);
    msg.setDestination(6235U);
    msg.setDestinationEntity(125U);
    msg.op = 29U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ROWCLGWROECGNJSGCFZIETWOUTJBDRVCMCUXXNRPJZYJGQAFMMWULWASQPH");
    tmp_msg_0.lat = 0.99779192269;
    tmp_msg_0.lon = 0.572079859777;
    tmp_msg_0.z = 0.496500401979;
    tmp_msg_0.z_units = 92U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.386312387228);
    msg.setSource(57840U);
    msg.setSourceEntity(95U);
    msg.setDestination(52530U);
    msg.setDestinationEntity(150U);
    msg.op = 163U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("UBGDEOXXUQNVLFPIYNKKUWDWHYXSYNWC");
    tmp_msg_0.lat = 0.776402930128;
    tmp_msg_0.lon = 0.672658303978;
    tmp_msg_0.z = 0.772191211912;
    tmp_msg_0.z_units = 136U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.676152032511);
    msg.setSource(55083U);
    msg.setSourceEntity(9U);
    msg.setDestination(56728U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0492724867663;
    msg.type = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.111215870159);
    msg.setSource(29032U);
    msg.setSourceEntity(210U);
    msg.setDestination(27758U);
    msg.setDestinationEntity(211U);
    msg.value = 0.564749888522;
    msg.type = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.517370941305);
    msg.setSource(17865U);
    msg.setSourceEntity(140U);
    msg.setDestination(53227U);
    msg.setDestinationEntity(44U);
    msg.value = 0.345041917692;
    msg.type = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.792558067403);
    msg.setSource(51450U);
    msg.setSourceEntity(181U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(168U);
    msg.value = 0.267496286672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.639877433167);
    msg.setSource(16325U);
    msg.setSourceEntity(25U);
    msg.setDestination(50250U);
    msg.setDestinationEntity(214U);
    msg.value = 0.713879260348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.325256084441);
    msg.setSource(42250U);
    msg.setSourceEntity(58U);
    msg.setDestination(10651U);
    msg.setDestinationEntity(194U);
    msg.value = 0.739671926462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.786054311435);
    msg.setSource(56910U);
    msg.setSourceEntity(136U);
    msg.setDestination(41296U);
    msg.setDestinationEntity(42U);
    msg.timestamp_last_service = 0.213920042345;
    msg.time_next_service = 0.884108980394;
    msg.time_motor_next_service = 0.551970295213;
    msg.time_idle_ground = 0.120490628239;
    msg.time_idle_air = 0.253672957331;
    msg.time_idle_water = 0.377654452192;
    msg.time_idle_underwater = 0.67768106235;
    msg.time_idle_unknown = 0.813330493241;
    msg.time_motor_ground = 0.570112444538;
    msg.time_motor_air = 0.244915142343;
    msg.time_motor_water = 0.943764616543;
    msg.time_motor_underwater = 0.691067974327;
    msg.time_motor_unknown = 0.276610912847;
    msg.rpm_min = 21002;
    msg.rpm_max = 25780;
    msg.depth_max = 0.846691721008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.544419214774);
    msg.setSource(9018U);
    msg.setSourceEntity(68U);
    msg.setDestination(10747U);
    msg.setDestinationEntity(241U);
    msg.timestamp_last_service = 0.856302603464;
    msg.time_next_service = 0.0717833106619;
    msg.time_motor_next_service = 0.0236005625919;
    msg.time_idle_ground = 0.248191961766;
    msg.time_idle_air = 0.79330966173;
    msg.time_idle_water = 0.123722069324;
    msg.time_idle_underwater = 0.51081066588;
    msg.time_idle_unknown = 0.792164903007;
    msg.time_motor_ground = 0.574347488444;
    msg.time_motor_air = 0.283257335031;
    msg.time_motor_water = 0.171322906607;
    msg.time_motor_underwater = 0.0411556104889;
    msg.time_motor_unknown = 0.0329710435087;
    msg.rpm_min = -208;
    msg.rpm_max = -710;
    msg.depth_max = 0.0410980020891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.974512867435);
    msg.setSource(9449U);
    msg.setSourceEntity(76U);
    msg.setDestination(17044U);
    msg.setDestinationEntity(15U);
    msg.timestamp_last_service = 0.77927805633;
    msg.time_next_service = 0.751600492231;
    msg.time_motor_next_service = 0.804450408768;
    msg.time_idle_ground = 0.908274600844;
    msg.time_idle_air = 0.484227919956;
    msg.time_idle_water = 0.937253584565;
    msg.time_idle_underwater = 0.443075819047;
    msg.time_idle_unknown = 0.537448288528;
    msg.time_motor_ground = 0.344198409749;
    msg.time_motor_air = 0.754845314673;
    msg.time_motor_water = 0.920562651735;
    msg.time_motor_underwater = 0.148078385187;
    msg.time_motor_unknown = 0.72723973339;
    msg.rpm_min = 15663;
    msg.rpm_max = 12747;
    msg.depth_max = 0.074339901698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.676903222136);
    msg.setSource(37012U);
    msg.setSourceEntity(116U);
    msg.setDestination(28420U);
    msg.setDestinationEntity(167U);
    msg.severity = 216U;
    msg.text.assign("XESHHBUBACNRRHIZGLHMTGAXNYPMDMJFAAKDVSWLVRQCUWIMQRIFNTEBKVDEKCOXEKDOPPJLNZMRHFWCLLWIGNWYZJJZIYYWDXSRIWGPPXQJVAOJQSMMHNBEFZENXTXVRFOSTULCHVUZPSOBWGGDKUZWLQFKCEMLIADXTBPOVRAAOKCQTWLPYROCZJSBQVKFSBBVOASXKEHYFGYOTTDCIJQQDIAPYNNMHSXNETGYKJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.237019895827);
    msg.setSource(51182U);
    msg.setSourceEntity(140U);
    msg.setDestination(18104U);
    msg.setDestinationEntity(89U);
    msg.severity = 242U;
    msg.text.assign("HXQFRBKYJQFCZLQOBIYCVNNIYPYBKUYTZXWHKLFEQOBPNLGLPUAGDCZGIZAOORDUFWMICPJYYITUFLTNEEWMVQQAGEJRWODKEWXONJHRBKXIMFDJTSLQKPACDZMOPKNSVUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.977736492884);
    msg.setSource(38366U);
    msg.setSourceEntity(141U);
    msg.setDestination(14941U);
    msg.setDestinationEntity(70U);
    msg.severity = 253U;
    msg.text.assign("UJGYMFJDFXAMOKKTVZPNHDWPUDIOABZCZLHSUDHRFGMYUUCWTBBRPINGWVOTGIESFROYKRUDUTIQVPZDTZIYCGMQDVGXSOLVLYAPASOEATWRVNOKQOQNNXBDZBCUEHELJQRMNWEZRRESZMWVBXZJQBAJNIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0914723575264);
    msg.setSource(9862U);
    msg.setSourceEntity(231U);
    msg.setDestination(55899U);
    msg.setDestinationEntity(194U);
    msg.channel = -36;
    msg.value = -1868269842;
    msg.gain = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.908899588313);
    msg.setSource(3886U);
    msg.setSourceEntity(120U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(209U);
    msg.channel = -123;
    msg.value = 1403462689;
    msg.gain = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.784259417689);
    msg.setSource(7566U);
    msg.setSourceEntity(109U);
    msg.setDestination(6251U);
    msg.setDestinationEntity(8U);
    msg.channel = -85;
    msg.value = 1546381732;
    msg.gain = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.808686833295);
    msg.setSource(31721U);
    msg.setSourceEntity(199U);
    msg.setDestination(54623U);
    msg.setDestinationEntity(79U);
    msg.ch01 = 0.87202417301;
    msg.ch02 = 0.503283031324;
    msg.ch03 = 0.883958616495;
    msg.ch04 = 0.849610241818;
    msg.ch05 = 0.622043333072;
    msg.ch06 = 0.0523939684236;
    msg.ch07 = 0.844347404047;
    msg.ch08 = 0.119578498956;
    msg.ch09 = 0.473373167991;
    msg.ch10 = 0.795143155439;
    msg.ch11 = 0.561919569858;
    msg.ch12 = 0.14901369189;
    msg.ch13 = 0.552628187353;
    msg.ch14 = 0.313956816407;
    msg.ch15 = 0.153464196543;
    msg.ch16 = 0.306762466627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.41750769317);
    msg.setSource(13450U);
    msg.setSourceEntity(198U);
    msg.setDestination(55268U);
    msg.setDestinationEntity(113U);
    msg.ch01 = 0.145938672753;
    msg.ch02 = 0.576089688084;
    msg.ch03 = 0.739492197327;
    msg.ch04 = 0.503567792422;
    msg.ch05 = 0.149325910364;
    msg.ch06 = 0.360354139903;
    msg.ch07 = 0.666687191192;
    msg.ch08 = 0.873220218718;
    msg.ch09 = 0.319238778411;
    msg.ch10 = 0.598804805663;
    msg.ch11 = 0.438154184967;
    msg.ch12 = 0.107655412205;
    msg.ch13 = 0.349207747497;
    msg.ch14 = 0.991413683235;
    msg.ch15 = 0.11279481822;
    msg.ch16 = 0.421919965861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.251854232723);
    msg.setSource(30667U);
    msg.setSourceEntity(138U);
    msg.setDestination(60342U);
    msg.setDestinationEntity(55U);
    msg.ch01 = 0.204710118917;
    msg.ch02 = 0.46382450991;
    msg.ch03 = 0.821434460741;
    msg.ch04 = 0.245091832662;
    msg.ch05 = 0.289746471172;
    msg.ch06 = 0.110533612068;
    msg.ch07 = 0.939611941635;
    msg.ch08 = 0.587668261133;
    msg.ch09 = 0.21620851748;
    msg.ch10 = 0.49067710083;
    msg.ch11 = 0.813279629693;
    msg.ch12 = 0.474788292051;
    msg.ch13 = 0.603462219164;
    msg.ch14 = 0.373663457999;
    msg.ch15 = 0.635390584292;
    msg.ch16 = 0.889864878507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.799221031826);
    msg.setSource(52052U);
    msg.setSourceEntity(6U);
    msg.setDestination(33929U);
    msg.setDestinationEntity(81U);
    msg.value = 0.701068157345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.523254609555);
    msg.setSource(58933U);
    msg.setSourceEntity(105U);
    msg.setDestination(31560U);
    msg.setDestinationEntity(25U);
    msg.value = 0.796653532539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.737420709537);
    msg.setSource(26087U);
    msg.setSourceEntity(12U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(12U);
    msg.value = 0.490205674255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.726026826383);
    msg.setSource(2097U);
    msg.setSourceEntity(162U);
    msg.setDestination(64037U);
    msg.setDestinationEntity(77U);
    msg.op = 61U;
    msg.lat = 0.575834949389;
    msg.lon = 0.664015945217;
    msg.height = 0.854727351033;
    msg.depth = 0.896908735205;
    msg.alt = 0.701870898664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.888719924108);
    msg.setSource(7041U);
    msg.setSourceEntity(12U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(53U);
    msg.op = 186U;
    msg.lat = 0.776084375917;
    msg.lon = 0.352285352445;
    msg.height = 0.381246844409;
    msg.depth = 0.447028059522;
    msg.alt = 0.935973654668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.636529942121);
    msg.setSource(11496U);
    msg.setSourceEntity(62U);
    msg.setDestination(49338U);
    msg.setDestinationEntity(67U);
    msg.op = 168U;
    msg.lat = 0.481545492591;
    msg.lon = 0.664677634257;
    msg.height = 0.23359767113;
    msg.depth = 0.237021365881;
    msg.alt = 0.920154870156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BUVMotorCommand msg;
    msg.setTimeStamp(0.82546483977);
    msg.setSource(65111U);
    msg.setSourceEntity(191U);
    msg.setDestination(49563U);
    msg.setDestinationEntity(80U);
    msg.tail_frequency = 0.664160321375;
    msg.tail_deflection = 0.159662372888;
    msg.tail_amplitude = 0.73209875383;
    msg.left_fin_frequency = 0.0254186854906;
    msg.left_fin_deflection = 0.871547698093;
    msg.left_fin_amplitude = 0.6137875345;
    msg.right_fin_frequency = 0.531601255669;
    msg.right_fin_deflection = 0.872998806783;
    msg.right_fin_amplitude = 0.248766014617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BUVMotorCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BUVMotorCommand msg;
    msg.setTimeStamp(0.168816471279);
    msg.setSource(31388U);
    msg.setSourceEntity(209U);
    msg.setDestination(54679U);
    msg.setDestinationEntity(163U);
    msg.tail_frequency = 0.922469234064;
    msg.tail_deflection = 0.326881859723;
    msg.tail_amplitude = 0.890952329205;
    msg.left_fin_frequency = 0.33437204717;
    msg.left_fin_deflection = 0.29519091902;
    msg.left_fin_amplitude = 0.579803855508;
    msg.right_fin_frequency = 0.0642912331499;
    msg.right_fin_deflection = 0.672610204055;
    msg.right_fin_amplitude = 0.910514393833;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BUVMotorCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BUVMotorCommand msg;
    msg.setTimeStamp(0.772380461745);
    msg.setSource(34260U);
    msg.setSourceEntity(151U);
    msg.setDestination(55848U);
    msg.setDestinationEntity(134U);
    msg.tail_frequency = 0.0194325351429;
    msg.tail_deflection = 0.82887702107;
    msg.tail_amplitude = 0.0559741887433;
    msg.left_fin_frequency = 0.551850994833;
    msg.left_fin_deflection = 0.845000682867;
    msg.left_fin_amplitude = 0.772863651819;
    msg.right_fin_frequency = 0.771867180156;
    msg.right_fin_deflection = 0.982646509018;
    msg.right_fin_amplitude = 0.35535126086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BUVMotorCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
