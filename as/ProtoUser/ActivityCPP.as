package com.sanguo.game.server.connectlogic.common.message.ProtoUser
{
	import laya.utils.Byte;
	public class ActivityCPP
	{
		public static const PROTO:String = "ProtoUser.ActivityCPP";
		public var package_root:*;
		public  var message:*;
		public var id:int;
		public var version:int;
		public var data:Vector.<int>;
		public function ActivityCPP(root:*)
		{
			package_root = root;
			message = root.lookup(PROTO);
			id = undefined;
			version = undefined;
			data = new Vector.<int>();
		}
		public function serialize():*
		{
			var serializeObj:Object = {};
			serializeObj.id = this.id;
			serializeObj.version = this.version;
			serializeObj.data = [];
			for(var i:int = 0;i < this.data.length;i++)
			{
				serializeObj.data.push(this.data[i]);
			}
			return serializeObj;
		}
		public function unserialize(msgObj:*):ActivityCPP
		{
			id = undefined;
			version = undefined;
			data = new Vector.<int>();
			this.id = msgObj.id;
			this.version = msgObj.version;
			for(var i:int = 0;i < msgObj.data.length;i++)
			{
				this.data.push(msgObj.data[i]);
			}
			return this;
		}
		public function encode():* 
		{
			return message.encode(serialize()).finish();
		}
		public function decode(buffer:*):ActivityCPP
		{
			var msg:* = message.decode(buffer);
			return unserialize(msg);
		}
	}
}