package com.sanguo.game.server.connectlogic.common.message.ProtoActivity
{
	import laya.utils.Byte;
	public class Reward4399DailyGiftResp
	{
		public static const PROTO:String = "ProtoActivity.Reward4399DailyGiftResp";
		public var package_root:*;
		public  var message:*;
		public var rechargeActivity:GameAcitivityCPP;
		public var commons:CommonItemsCPP;
		public function Reward4399DailyGiftResp(root:*)
		{
			package_root = root;
			message = root.lookup(PROTO);
			rechargeActivity = undefined;
			commons = undefined;
		}
		public function serialize():*
		{
			var serializeObj:Object = {};
			serializeObj.rechargeActivity = this.rechargeActivity.serialize();
			serializeObj.commons = this.commons.serialize();
			return serializeObj;
		}
		public function unserialize(msgObj:*):Reward4399DailyGiftResp
		{
			rechargeActivity = undefined;
			commons = undefined;
			this.rechargeActivity = new GameAcitivityCPP(package_root).unserialize(msgObj.rechargeActivity);
			this.commons = new CommonItemsCPP(package_root).unserialize(msgObj.commons);
			return this;
		}
		public function encode():* 
		{
			return message.encode(serialize()).finish();
		}
		public function decode(buffer:*):Reward4399DailyGiftResp
		{
			var msg:* = message.decode(buffer);
			return unserialize(msg);
		}
	}
}