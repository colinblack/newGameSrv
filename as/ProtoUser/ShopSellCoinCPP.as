package com.sanguo.game.server.connectlogic.common.message.ProtoUser
{
	import laya.utils.Byte;
	public class ShopSellCoinCPP
	{
		public static const PROTO:String = "ProtoUser.ShopSellCoinCPP";
		public var package_root:*;
		public  var message:*;
		public var id:int;
		public var value:int;
		public function ShopSellCoinCPP(root:*)
		{
			package_root = root;
			message = root.lookup(PROTO);
			id = undefined;
			value = undefined;
		}
		public function serialize():*
		{
			var serializeObj:Object = {};
			serializeObj.id = this.id;
			serializeObj.value = this.value;
			return serializeObj;
		}
		public function unserialize(msgObj:*):ShopSellCoinCPP
		{
			id = undefined;
			value = undefined;
			this.id = msgObj.id;
			this.value = msgObj.value;
			return this;
		}
		public function encode():* 
		{
			return message.encode(serialize()).finish();
		}
		public function decode(buffer:*):ShopSellCoinCPP
		{
			var msg:* = message.decode(buffer);
			return unserialize(msg);
		}
	}
}