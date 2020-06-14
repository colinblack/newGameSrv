package com.sanguo.game.server.connectlogic.common.message.ProtoUser
{
	import laya.utils.Byte;
	public class OrderCPP
	{
		public static const PROTO:String = "ProtoUser.OrderCPP";
		public var package_root:*;
		public  var message:*;
		public var slot:int;
		public var storageid:int;
		public var levelid:int;
		public var orderid:Byte;
		public var coin:int;
		public var exp:int;
		public var end_ts:int;
		public function OrderCPP(root:*)
		{
			package_root = root;
			message = root.lookup(PROTO);
			slot = undefined;
			storageid = undefined;
			levelid = undefined;
			orderid = undefined;
			coin = undefined;
			exp = undefined;
			end_ts = undefined;
		}
		public function serialize():*
		{
			var serializeObj:Object = {};
			serializeObj.slot = this.slot;
			serializeObj.storageid = this.storageid;
			serializeObj.levelid = this.levelid;
			this.orderid.pos = 0;
			serializeObj.coin = this.coin;
			serializeObj.exp = this.exp;
			serializeObj.end_ts = this.end_ts;
			return serializeObj;
		}
		public function unserialize(msgObj:*):OrderCPP
		{
			slot = undefined;
			storageid = undefined;
			levelid = undefined;
			orderid = undefined;
			coin = undefined;
			exp = undefined;
			end_ts = undefined;
			this.slot = msgObj.slot;
			this.storageid = msgObj.storageid;
			this.levelid = msgObj.levelid;
			this.orderid = new Byte();
			this.orderid.writeArrayBuffer(msgObj.orderid);
			this.orderid.pos = 0;
			this.coin = msgObj.coin;
			this.exp = msgObj.exp;
			this.end_ts = msgObj.end_ts;
			return this;
		}
		public function encode():* 
		{
			return message.encode(serialize()).finish();
		}
		public function decode(buffer:*):OrderCPP
		{
			var msg:* = message.decode(buffer);
			return unserialize(msg);
		}
	}
}